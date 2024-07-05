#include "contact.h"

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


void PrintContact(const Contact * pc) {
    int i = 0;
    //打印标题
    //左对齐
    printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "Name", "Age", "Sex", "Tele", "Addr");
    // printf("%20s\t%5s\t%5s\t%12s\t%20s\n", "Name", "Age", "Sex", "Tele", "Addr");

    for (i = 0; i < pc->sz; i++) {
        printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", 
            pc->data[i].name,
            pc->data[i].age,
            pc->data[i].sex,
            pc->data[i].tele,
            pc->data[i].addr
            //打印的应该是pc->data[i]的内容，此时pc->sz指向的是末位元素的下一位，在前面用memset()函数初始化为0的那些地方。
            // pc->data[pc->sz].name,
            // pc->data[pc->sz].age,
            // pc->data[pc->sz].sex,
            // pc->data[pc->sz].tele,
            // pc->data[pc->sz].addr
        );
    }
}

//只有本个源文件能看见，改变链接属性
static int FindByName(const Contact * pc, char name[]) {
    //遍历通讯录
    int i = 0;
    for (i = 0; i < pc->sz; i++) {
        if (0 == strcmp(pc->data[i].name, name)) {
            return i;
        }
    }
    //找到头都没找到名字
    if (i == pc->sz) {
        return -1;
    }
}

void DelContact(Contact * pc) {
    //1. 把数组位置pc->data[i]的位置用memset()方法初始化为0，或者用其他的方法
    //2. 把pc-sz--
    //3. 如果删除的还是最后一位，就要把后面的数据住前移动，方法同数据结构中顺序表的移动方法


    //查询通讯录的大小，若其中无元素，不可删除
    if (pc->sz == 0) {
        printf("Contact is empty!\n");
        return;
    }

    //若通讯录不为空，则先查找，再根据结果删除或返回错误信息
    //有、无


    char name[MAX_NAME];
    printf("Please Name that you want to delete: \n");
    scanf("%s", name);
    int pos = FindByName(pc, name);
    //如果没查到，即联系人不存在，返回错误信息
    if (-1 == pos) {
        printf("People Not Exist");
        return;
    }
    else {
        int i = 0;
        //i = [pos, pc->size - 2]
        //i+1 = [pos + 1, pc->size - 1]
        for (i = pos; i < pc->sz - 1; i++) {
            //用后一个覆盖前一个，最后一位用pc->sz限定其访问
            // pc->data[i].name = pc->data[i + 1].name;
            // pc->data[i].age = pc->data[i + 1].age;

            //不用每个元素都操作，直接对结构数组做操作就行
            pc->data[i] = pc->data[i + 1];
        }

        pc->sz--;

        printf("Delete Successfully!\n");
    }

}

void SearchContact(const Contact * pc) {
    char name[MAX_NAME];
    printf("Please Name that you want to search: \n");
    scanf("%s", name);
    int pos = FindByName(pc, name);
    //如果没查到，即联系人不存在，返回错误信息
    if (-1 == pos) {
        printf("People Not Exist");
        return;
    }
    //查到了
    //得封装一下打印函数，这样打并还是很方便
    printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", 
        pc->data[pos].name,
        pc->data[pos].age,
        pc->data[pos].sex,
        pc->data[pos].tele,
        pc->data[pos].addr
    );
}

void ModifyContact(Contact * pc) {
    char name[MAX_NAME];
    printf("Please Name that you want to modify: \n");
    scanf("%s", name);
    int pos = FindByName(pc, name);
    //如果没查到，即联系人不存在，返回错误信息
    if (-1 == pos) {
        printf("People Not Exist");
        return;
    }

    printf("Please input name:>");
    scanf("%s", pc->data[pos].name);
    printf("Please input age:>");
    scanf("%d", &(pc->data[pos].age));
    printf("Please input sex:>");
    scanf("%s", pc->data[pos].sex);
    printf("Please input tele:>");
    scanf("%s", pc->data[pos].tele);
    printf("Please input addr:>");
    scanf("%s", pc->data[pos].addr);
}