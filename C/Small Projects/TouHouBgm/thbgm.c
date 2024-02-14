#include <stdio.h>
#include <stdint.h>
#include <string.h>
//#pragma pack(1)
#define SIZE 4

typedef struct {
    char id[SIZE];
    uint32_t size;
    char formtype[SIZE];
} ListHeader;

typedef struct {
    char id[SIZE];
    uint32_t size;
} ChunkHeader;

typedef struct {
    uint16_t audioformat;
    uint16_t numchannels;
    uint32_t samplerate;
    uint32_t byterate;
    uint16_t blockalign;
    uint16_t bitspersample;
} fmtData;


int main(int argc, char* argv[])
{
    FILE * src = NULL;
    FILE * dest = NULL;
    uint8_t buff[256];

    src = fopen(argv[1], "rb");
    dest = fopen(argv[2], "wb");

    fseek(src, 0, 2);
    uint32_t srcsize = ftell(src);
    rewind(src);

    ListHeader riffheader = {"RIFF", srcsize + 20, "WAVE"};

    uint16_t numchannels = 2;
    uint32_t samplerate = 44100;
    uint32_t bytespersample = 2;
    ChunkHeader fmtheader = {"fmt ", 16};
    fmtData fmtdata = {
        1,
        numchannels,
        samplerate,
        samplerate * numchannels * bytespersample,
        numchannels * bytespersample,
        bytespersample * 8
    };

    ChunkHeader dataheader = {
        "data",
        srcsize - 16
    };
    memcpy(buff,&riffheader,sizeof(riffheader));
    fwrite(buff, 1, sizeof(riffheader), dest);
    memcpy(buff,&fmtheader,sizeof(fmtheader));
    fwrite(buff, 1, sizeof(fmtheader), dest);
    memcpy(buff,&fmtdata,sizeof(fmtdata));
    fwrite(buff, 1, sizeof(fmtdata), dest);
    memcpy(buff,&dataheader,sizeof(dataheader));
    fwrite(buff, 1, sizeof(dataheader), dest);

    fread(buff, 1, 16, src);

    size_t count;

    for (;;)
    {
        count = fread(buff, 1, sizeof(buff), src);
        if (count <= 0)
            break;
        fwrite(buff, 1, count, dest);
    }

    fclose(src);
    fclose(dest);

    printf("Transform successfuly!\n");

    return 0;
}
