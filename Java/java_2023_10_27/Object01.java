public class Object01 {
	//用面向对象的方式创建一只猫

	public static void main(String [] args) {


		// 类与对象
		// 一个程序就是一个世界，有很多事物
		// 用对象体现事物
		// 对象 = {属性, 行为...}
		// 狗 = {{跑，跳}，{吃，叫}}
	
		//类
		//比如：猫类，就是一个数据类型
		//类就是一种数据类型，类似于结构体，自定义的数据类型
		//猫有属性：name, age, color...
		//猫有行为：run, cry, eat...
	
		//对象
		//通过猫类创建一个猫对象，
		//Cat aa
		//aa.name = ..., aa.age = ...
		//把特性提取出来成为一个数据类型，再根据类创建具体的对象
		//类就是数据类型，对象是一个具体的事物
		//创建一个对象，实例化一个对象，把类实例化
		//
		//new Cat();
		//用cat1接收：Cat cat1 = new Cat();
		class Cat {
		String name;
		int age;
		String color;
	
		//行为
		}
		Cat cat1 = new Cat();
		cat1.name = "小白";
		cat1.age = 3;
		cat1.color = "白色";
	
		Cat cat2 = new Cat();
		cat2.name = "小花";
		cat2.age = 100;
		cat2.color = "花色";
		System.out.println(cat1.name + cat1.age + cat1.color);





		//Java设计者引入类与对象的根本原因就是现有的技术不能完美的解决问题
		//垃圾书上说什么哲学我真的服了
		//使用变量和数组可读性差，使用单独的变量来解决，不利于数据的管理
		//第一只猫的信息
		/*
		String cat1Name = "小白";
		int cat1Age = 3;
		String cat1Color = "白色";
	
		//第二只猫的信息
		String cat2Name = "小花";
		iint cat2Age = 100;
		String cat2Color = "花色";
	
		//数组解决：数据类型体现不出来
		//用下标获取信息不明确（下标的可读性很差）
		//数组长度固定
		String [] cat1 = {"小白", "3", "白色"};
		String [] cat1 = {"小花", "100", "花色"};
		*/
	}

}