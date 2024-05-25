//张老太太养了两只猫猫：
//一只叫小白，今年三岁，白色
//一只叫小花，今年一百岁，花色
//请编写一个程序，当用户输入小猫的名字时，
//就显示该猫的名字、年龄、颜色，如果用户输入的猫名错误，则返回没有这只猫
public class Object01 {
	public static void main(String [] args) {
		// //方法一：变量。太碎，不利于管理
		// String cat1Name = "小白";
		// int cat1Age = 3;
		// String cat1Color = "白色";

		// String cat2Name = "小花";
		// int cat2Age = 100;
		// String cat2Color = "花色";

		// //方法二：数组。无法体现数据类型，取信息用下标，可读性差，名字和内容对应关系不明确
		// //数组长度固定，无法体现猫的行为
		// String [] cat1 = {"小白", "3", "白色"};
		// String [] cat2 = {"小花", "3", "花色"};

		//上述方法的缺陷就一句话：不利于数据管理，效率低。
		//所以要引出类与对象

        //类是用户自定义的数据类型
        //对象包含属性和行为
	}

	class Cat {
		String name;
		String color;
		int age;
	}
}
