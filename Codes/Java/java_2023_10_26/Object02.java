public class Object02 {
    public static void main(String [] args) {

    }
}

//成员变量 == 属性 == 字段（field）
class Car {
    //访问修饰符是什么？
    //控制属性的访问范围，有四种访问修饰符
    //public, protected, private, 默认的
    protected int a;
    String name;
    double price;
    String color;
    String [] master;       //类中的属性可以是引用类型
}