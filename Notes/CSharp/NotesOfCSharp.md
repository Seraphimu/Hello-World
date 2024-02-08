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

### C# Data Types

A variable in C# must be a specified data type:

```c#
int myInt;
double myDoubleNum;
char myLetter;
bool myBool;
string myText;
```

A data type specifies the size and type of variable values.

It is important to use the correct data type for the corresponding variable; to avoid errors, to save time and memory, but it will also make your code more maintainable and readable. The most common data types are:

| Data Type | Size                  | Description                                                  |
| :-------- | :-------------------- | :----------------------------------------------------------- |
| int       | 4 bytes               | Stores whole numbers from -2,147,483,648 to 2,147,483,647    |
| long      | 8 bytes               | Stores whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| float     | 4 bytes               | Stores fractional numbers. Sufficient for storing 6 to 7 decimal digits |
| double    | 8 bytes               | Stores fractional numbers. Sufficient for storing 15 decimal digits |
| bool      | 1 bit                 | Stores true or false values                                  |
| char      | 2 bytes               | Stores a single character/letter, surrounded by single quotes |
| string    | 2 bytes per character | Stores a sequence of characters, surrounded by double quotes |

Number types:

1. Integer types stores whole numbers.
2. Floating point types represents numbers with a fractional part.

Integer Types (You should end the value with L for long types):

```c#
int myNum = 114514;
long myNum = 1145141919810L;
```

Floating point types (You should end the value with an F for floats and D for doubles):

```c#
float myNum = 114.514F;
double myNum = 114.5D;
```

Scientific Numbers (A floating point number can also be scientific number with an 'e' to indicate the power of 10:

```c#
float f = 1e10F;
double d = 1E10D;
```

### Type Casting

1. implicit casting (automatically)

   ```c#
   int a = 114.514;
   ```

2. explicit casting (manually)

   ```c#
   double d = 11.4;
   int a = (int)d;
   ```

3. type conversion methods (explicit manually)

   ```c#
   int myInt = 10;
   double myDouble = 2.5;
   bool myBool = true;
   Console.WriteLine(Convert.ToString(myInt));
   Console.WriteLine(Convert.ToDouble(myInt));
   Console.WriteLine(Convert.ToInt32(myDouble));
   Console.WriteLine(Convert.ToString(myBool));
   ```

### User input

You have already learned that `Console.WriteLine()` is used to output values. 

Now we will use `Console.ReadLine()` to get user input.

In the following example, the user can input his or hers username, which is stored in the variable `userName`. Then we output the value of `userName`

```c#
string userName = Console.ReadLine();
Console.WriteLine("Usename: " + userName);
```

**The `Console.ReadLine()` method returns a `string`**. Therefore, you cannot get information from another data type, such as `int`. The following program will cause an error (Cannot implicitly convert type `string` to `int`):

```c#
int age = Console.ReadLine();
Console.WriteLine(age);
```

Like the error message says, you cannot implicitly convert type `string` to `int`.

Luckily, for you, you just learned from the previous chapter (Type Casting), that you can convert any type explicitly, by using one of the `Convert.To.<type>(variable or numbers)` methods:

```c#
int age = Convert.ToInt16(Console.ReadLine());
Console.WriteLine(age);
```

### C# Operators

Operators are used to perform operations on variables and values.

In the example below, we use the `+` operator to add together two values.

```c#
int x = 114 + 514;
```

Although the `+` operator is often used to add together two values, like in example above, it can be used to add together a variable and a value, or a variable and another variable:

```c#
int sum1 = 114514 + 1919810;	//add together two values
int sum2 = sum1 + 24;			//add together a variable and a value
int sum3 = sum1 + sum2;			//add together a variable and other variable
```

#### Arithmetic Operators

Arithmetic operators are used to perform common mathematical operations:

| Operator | Name           | Description                            | Example |
| :------- | :------------- | :------------------------------------- | :------ |
| +        | Addition       | Adds together two values               | x + y   |
| -        | Subtraction    | Subtracts one value from another       | x - y   |
| *        | Multiplication | Multiplies two values                  | x * y   |
| /        | Division       | Divides one value by another           | x / y   |
| %        | Modulus        | Returns the division remainder         | x % y   |
| ++       | Increment      | Increases the value of a variable by 1 | x++     |
| --       | Decrement      | Decreases the value of a variable by 1 | x--     |

#### Assignment Operators:

Assignment operators are used to assign values to variables.

In the example below, we use the **assignment operator (`=`)** to assign the value 10 to a variable called x:

```c#
int x = 10;
```

The addition assignment operator `+=` adds a value to a variable:

```c#
int x = 10;
x += 3;
```

A list of all assignment operator:

| Operator | Example | Same As    |
| :------- | :------ | :--------- |
| =        | x = 5   | x = 5      |
| +=       | x += 3  | x = x + 3  |
| -=       | x -= 3  | x = x - 3  |
| *=       | x *= 3  | x = x * 3  |
| /=       | x /= 3  | x = x / 3  |
| %=       | x %= 3  | x = x % 3  |
| &=       | x &= 3  | x = x & 3  |
| \|=      | x \|= 3 | x = x \| 3 |
| ^=       | x ^= 3  | x = x ^ 3  |
| >>=      | x >>= 3 | x = x >> 3 |
| <<=      | x <<= 3 | x = x << 3 |

Abstraction:

`<variable> <operator>= <number>` equal to `<variable> = <variable> <operator> <number>`

#### C# Comparison Operators

Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.

The return value of a comparison is either `True` or `False`. These values are known as `Boolean values`.

In the following example, we use the **grater than operator (`>`)** to find out if 5 is grater than 3:

```c#
int x = 5;
int y = 3;
Console.WriteLine(x > y);	//Returns True, because 4 is greater than 3
```

A list of all comparison operators:

| Operator | Name                     | Example |
| :------- | :----------------------- | :------ |
| ==       | Equal to                 | x == y  |
| !=       | Not equal                | x != y  |
| >        | Greater than             | x > y   |
| <        | Less than                | x < y   |
| >=       | Greater than or equal to | x >= y  |
| <=       | Less than or equal to    | x <= y  |

#### Logical Operators

As with comparison operators, you also test for `True` or `False` values with logical operators.

Logical operators are used to determine the logic between variable or values.

A list of all logical operators:

| Operator | Name        | Description                                             | Example            |
| :------- | :---------- | :------------------------------------------------------ | :----------------- |
| &&       | Logical and | Returns True if both statements are true                | x < 5 && x < 10    |
| \|\|     | Logical or  | Returns True if one of the statements is true           | x < 5 \|\| x < 4   |
| !        | Logical not | Reverse the result, returns False if the result is true | !(x < 5 && x < 10) |

### C# Math

The C# Math has many method that allows you to perform mathematical tasks on numbers.

1. Max() method

   The `Math.Max(x, y)` method can be used to find the highest value of x and y:

   ```c#
   Math.Max(114, 514);
   ```

2. Min() method

   The `Math.Min(x, y)` method can be used to find the lowest value of x and y:

   ```c#
   Math.Min(114, 514);
   ```

3. Sqrt() method

   The `Math.Sqrt(x)` method returns square root of x:

   ```c#
   Math.Sqrt(64);
   ```

4. Abs() method

   The `Math.Abs(x)` method returns the absolute (positive) value of x:

   ```c#
   Math.Abs(-114);
   ```

5. Round() method

   The `Math.Round(x)` rounds a number to the nearest whole number:

   ```c#
   Math.Round(9.99)
   ```

### C# Strings

Strings are used for storing text.

A`string` variable contains a collection of characters surrounded by double quotes:

```c#
string myName = "MyName";
```

