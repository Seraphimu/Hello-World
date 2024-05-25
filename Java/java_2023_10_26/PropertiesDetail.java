public class PropertiesDetail {
    public static void main(String [] args) {
        //Person是对象名（对象引用）
        //new Person才是真对象
        //可以先Person p1; 然后再 p1 = new Person();
        Person p1 = new Person();       //声明时创建
        System.out.println(p1.age + " " + p1.name + " " + p1.sal + p1.isPass);
    }
}

class Person {
    int age;
    String name;
    double sal;
    boolean isPass;
}
