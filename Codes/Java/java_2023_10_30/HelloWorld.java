/**
 文档注释：
 作为HelloWorld类，入门第一个练习
 */
//HelloWorld类
// import java.util.Scanner;
// public class HelloWorld {
//     /**
//      * 命令行参数 String[] args
//      * @param args 这是干什么的
//      */
//     public static void main(String[] args) {
//         // System.out.println("Hello, World!");
//         // int $a = 114514;
//         // System.out.println($a);

//         // int maxNum = 10;
//         // int main = 1000;
//         // System.out.println(maxNum + main);
//         // int _____________a____=10;
//         // System.out.println(_____________a____);
//         Scanner sc = new Scanner(System.in);
//         String name = sc.nextLine();
//         System.out.println(name);
//     }
// }


import java.util.Random;
import java.util.Scanner;

public class HelloWorld {
    public static void main(String [] args) {
        Random random = new Random();
        int randNum = random.nextInt(100);
        System.out.println("生成的随机数字：" + randNum);
        
        Scanner scanner = new Scanner(System.in);
        while (true) {
            System.out.println("请输入你要猜的数字：");
            int num = scanner.nextInt();
            if (num > randNum) {
                System.out.println("猜大了");
            }
            else if (num == randNum) {
                System.out.println("猜对了");
                break;
            }
            else {
                System.out.println("猜小了");
            }
        }
    }
}