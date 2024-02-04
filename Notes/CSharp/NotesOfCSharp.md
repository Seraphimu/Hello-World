## C# Tutorial(Notes)

### What is C#?

- C# is pronounced "C-Sharp".
- C# (C-Sharp) is a object-oriented programming language developed by Microsoft that runs on the .NET Framework.
- C# is used to develop web apps, desktop apps, mobile apps, games and much more.
- C# has roots from the C family, and the language is close to other popular languages like C++ and Java.
- The first version was released in year 2002. The C# 12, was released in November 2023.

### Why use C#?

- It is one of the most popular language in the world.
- It is easy to learn and simple to use.
- It has a huge community support.
- C# is an object oriented language which gives a clear structure to programs and allows codes to reused, lowering development costs.
- As C# is close to C, C++ and Java, it makes it easy for programmers to switch to C# or vice versa.

### C# Syntax

```csharp
//The first program in C Sharp:
using System;
namespace HelloWorld
{
	class Program
    {
        static void Main(string [] args)
        {
            Console.WriteLine("Hello, World!\n");
        }
    }
}
```

1. `using System` means that we can use classes from the `System` namespace.
2. A blank line. C# ignores white space. However, multiple lines **make the code more readable**.
3. namespace is used to organize your code, and it is a container for other namespaces and classes.
4. The curly braces  `{}` marks the beginning and the end of a block of code.
5. class is a container for data and methods.
6. Main() method always appear in a C# program. Any code inside its curly brackets `{}` will be executed. 
7. Console is a class of the System namespace, which has a WriteLine() method that is used to output text.
8. If we omit the `using System;`, we should to write `System.Console.WriteLine()` to output text.
9. Every C# statement ends with a semicolon(`;`).
10. C# is case-sensitive.
11. the name of the C# file does not have to match the class name, but they often do.

### C# Output

To output values or output text in C#, you can use the `WriteLine()` method.

```c#
Console.WriteLine("Hello, World!\n");
```

`Write()`  method is similar to `WriteLine()` method.

`Write()`  method can insert a new line at the end of the output automatically.

It is difference to `WriteLine()` method is that it does not insert a new line at the end of the output.

code:

```c#
using System;
namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello, World!");
            Console.Write("Hello, World!");
            Console.Write("I will print on the same line.");
        }
    }
}
```

### C# Comments

Comments can be used to explain C# code, and to make it more readable. It also be used to prevent execution when testing alternative code.(It may be that prevent the code that you don't wish running)

Any text between `//` and the end of the line is ignored by C# (will not be executed).

1. single line comments

   ```c#
   class Test	//This is a class
   {
       //This is the Main method
       static void Main(string[] args)
       {
           Console.WriteLine("Hello, World!");
       }
   }
   ```

2. multi line comments

   ```c#
   /*
   1. This is a program that print a hello on this screen.
   2. This program is written by C#
   */
   class Test
   {
       static void Main(string[] args)
       {
           Console.WriteLine("Hello, World!");
       }
   }
   ```

   

### C# Variables

#### Variables are containers for storing data values.

- `int` - stores integers (whole numbers), without decimals(dot number), such as 123 or -123
- `double` - stores floating point numbers, with decimals, such as 19.99 or -19.99
- `char` - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
- `string` - stores text, such as "Hello World". String values are surrounded by double quotes
- `bool` - stores values with two states: true or false

#### Declaring (Creating) Variables

To create a variable, you must specify(say it clear) the type and assign it a value:

```c#
<type> <name> = <value>;
```

You can also declare a variable without assigning the value, and assign the value later:

```c#
<type> <name>;
<name> = <value>;
```

To create a variable that should store text, look at the following example:

```c#
//Example_1
string homoName = "田所浩二";
```

```c#
//Example_2
string homoName;
homoName = "田所浩二"
```

To create a variable that should store a number, look at the following example:

```c#
//Example_1
int homoId = 114514;
```

```c#
//Example_2
int homoAge;
homoId = 114514;
```

If you assign a new value to an existing variable, it will overwrite the previous value:

```c#
//Example
int homoId = 114514;
Console.WriteLine(homoId);
homoId = 1919810;
Console.WriteLine(homoId);
```

Other types is similar to the type of int and type of string:

```c#
//Example
bool myBool = false;
myBool = true;
char myChar = 'a';
myChar = 'B';
double myDouble = 114.514;
myDouble = 1919.810;
```

#### C# Constants

If you don't want others to overwrite existing values, you can add the 'const' keyword in front of the variable type.

This will declare the variable as "constant", which means unchangeable and read-only.

```c#
//Example
const int myConstNum = 114;
//The following is error in c#
//myConstNum = 514;
```

You cannot declare a constant variable without assigning the value. If you do, an error will occur: A const field requires a value to be provided.

#### C# Display Variables

The WriteLine() method is often used to display variable values to the console window.

To combine both text and a variable, use the `+` character:

```c#
string homoName = "田所浩二";
Console.WriteLine("Hello " + homoName);
```

You can also use the  `+` variable to another variable:

```c#
string firstName = "浩二";
string lastName = "田所";
string fullName = lastName + firstName;
Console.WriteLine(fullName);
```

For numeric values, the `+` character works as a mathematical operator(plus):

```c#
int x = 5;
int y = 6;
Console.WriteLine(x + y);	//Use WriteLine() method to display the value of x+y, which is 11;
```



#### C# Multiple Variables

Declare Many Variables:

To declare more than one variable of the same type, use a comma(`,`)-separated(alone) list:

```c#
int x = 5, y = 6, z = 50;
Console.WriteLine(x + y + z);
```

You can also assign the same value to multiple(more) variables in one line:

```c#
int x, y, z;
x = y = z = 50;
```

#### C# Identifiers(is similar to a flag)

All C# variables must be identified with unique names.

These unique names are called identifiers.

Identifiers can be short names or more descriptive(mean) names.

It is recommended to use descriptive names in order to create understandable and  code and to make the code more readable. (readable)

```c#
//Good
int age = 114514;
//Ok, but not easy to understand what a actually is
int a = 114514;
```

The general rules for naming variables are:

- Names can contain letters, digits and the underscore character(`_`);
- Names must begin with a letter or underscore;
- Names should start with a lowercase letter and it cannot contain whitespace;
- Names are case sensitive(myVar and myvar are different variables);
- Reserved words (like keywords, such as `int` or `double`) cannot be used as names.



