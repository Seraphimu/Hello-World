程序就是有序指令的集合
程序 文件

### 类和对象

一些复杂情况下，使用变量和数组可读性差，不利于数据的管理，所以引入了类和对象的概念。

一个程序就是一个世界，有很多事物。用对象体现事物，对象包括属性和行为。

比如猫的属性：name, age, color...

猫的行为：run, cry, eat...

假设一个养猫问题：

使用变量来存放信息，数量多起来的话管理起来很困难

```java
//用变量
//第一只猫的信息
String cat1Name = "小白";
int cat1Age = 3;
String cat1Color = "白色";

//第二只猫的信息
String cat2Name = "小花";
iint cat2Age = 100;
String cat2Color = "花色";
```

使用数组来存放信息，下标不明确，可读性差，数组长度是固定的，增减困难。

```java
String [] cat1 = {"小白", "3", "白色"};
String [] cat1 = {"小花", "100", "花色"};
```

使用类和对象，可读性好，便于管理

```java
class Cat {
    String name;
    int age;
    String color;
}
Cat cat1 = new Cat();		//分配空间
cat1.name = "小白";			//访问
cat1.age = 3;
cat1.color = "白色";

Cat cat2 = new Cat();		//分配空间
cat2.name = "小花";
cat2.age = 100;
cat2.color = "花色";
```

