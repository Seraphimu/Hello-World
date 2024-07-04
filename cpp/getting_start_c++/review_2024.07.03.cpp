#include <iostream>
#include <cstring>
using namespace std;

//test of encapsulation:
class Person {
    private:
        int id;
        string sex;
        //写错了……
        //int sex;
    public:
        string name;
        string hobby;
        int getId() {
            return id;
        }
        string getSex() {
            return sex;
        }
        string getName() {
            return name;
        }
        string getHobby() {
            return hobby;
        }

        void setId(int id) {
            this->id = id;
        }
        void setSex(string sex) {
            this->sex = sex;
        }
        
};


//复习封装特性的时候，问题还是比较多的。
//std这个名称空间没有写，把部分对象的类型给写错了，导致调试半天
//new这个关键字在C++中似乎和Java中的使用不太一样
//不过这回倒是没把public关键字忘掉，毕竟是封装，public没忘记写也很正常
void test_encap() {
    //Person zhangSan = new public Persion();
    //How to use the new key-word??
    Person zhangSan;

    //Error, the id and sex of zhangSan is a type in private.
    //zhangSan.id = 114514;
    //zhangSan.sex = "femail";

    //OK, the name and hobby is public
    zhangSan.name = "张三";
    zhangSan.hobby = "唱、跳、Rap、篮球";

    // using zhe zhangSan.setId
    //setId(114514);
    //setSex("femail");
    zhangSan.setId(114514);
    zhangSan.setSex("femail");
    
    cout << zhangSan.getId() << endl;
    cout << zhangSan.getSex() << endl;
    cout << zhangSan.getName() << endl;
    cout << zhangSan.getHobby() << endl;
}


//---------------------------------------------------------------------

//review inheriatance

class Anime {
    public:
        string date;
        string name;
        string author;
        
        int watch;
        int download;
        double values;

    private:
        string srcFile;
        string makeTech;
};

class InOrderRabbit : public Anime {
    public:
        string * roles;
        string * audio;

        //get values
        string getDate() {
            return date;
        }
        string getName() {
            return name;
        }
        string getAuthor() {
            return author;
        }
        int getWatch() {
            return watch;
        }
        int getDownload() {
            return download;
        }
        double getValues() {
            return values;
        }
        string * getRoles() {
            return roles;
        }
        string * getAudio() {
            return audio;
        }
    
        //set values
        void setDate(string date) {
            this->date = date;
        }
        void setName(string name) {
            this->name = name;
        }
        void setAuthor(string author) {
            this->author = author;
        }
        void setWatch(int watch) {
            this->watch = watch;
        }
        void setDownload(int download) {
            this->download = download;
        }
        void setValues(double values) {
            this->values = values;
        }
        void setRoles(string * roles) {
            this->roles = roles;
        }
        void setAudio() {
            this->audio = audio;
        }
};

void testInher(){
    InOrderRabbit rabbit;
    rabbit.setName("Do you In Order the Rabbit???");
    rabbit.setDate("2012-02-09");
    rabbit.setAuthor("Author");
    rabbit.setWatch(999999999);
    rabbit.setDownload(999999);
    string roles[] = {"Kokoa", "Chino", "Rize", "Syaru", "Chiya"};
    rabbit.setRoles(roles);
    
    cout << "Name: " << rabbit.getName() << endl;
    cout << "Date: " << rabbit.getDate() << endl;
    cout << "Watch: " << rabbit.getWatch() << endl;
    cout << "Download: " << rabbit.getDownload() << endl;
    cout << "Roles: ";
    //怎么让它更可移植？
    for (int i = 0; i < 5; i++) {
        cout << rabbit.roles[i] << " ";
    }
    cout << endl;
}

// ----------------------------------


//Constructure Method
class Cal {
    public:
        int x, y;
    Cal(int x, int y){
        this->x = x;
        this->y = y;
    }
};

void testCon() {
    Cal testC(114514, 1919810);
    cout << testC.x << endl;
    cout << testC.y << endl;
}






int main(void) {
    //test_encap();
    //testInher();  
    testCon();

    return 0;
}

