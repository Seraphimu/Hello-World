#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_CONTACT 1000
//联系人类型定义

typedef struct PeoInfo {
    char name[MAX_NAME];
    char sex[MAX_SEX];
    int age;
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
}PeoInfo;

enum Option {
    EXIT,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SORT,
    PRINT
};

void InitContact(Contact * pc) {
    pc->sz = 0;
    //pc->data[] = 0;
    //void * memset ( void * ptr, int value, size_t num );
    memset(pc->data, 0, sizeof (pc->data));
}

void AddContact(Contact * pc) {
    if (pc->sz == MAX_CONTACT) {
        printf("Full!\n");
        return;
    }

    //pc->data[sz];
    printf("Please input name:>");
    scanf("%s", pc->data[pc->sz].name);
    printf("Please input age:>");
    scanf("%d", &(pc->data[pc->sz].age));
    printf("Please input sex:>");
    scanf("%s", pc->data[pc->sz].sex);
    printf("Please input tele:>");
    scanf("%s", pc->data[pc->sz].tele);
    printf("Please input addr:>");
    scanf("%s", pc->data[pc->sz].addr);
    //++
    pc->sz++;
}