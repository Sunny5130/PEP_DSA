// // // // See https://aka.ms/new-console-template for more information
// Console.WriteLine("Hello, World!");
// using System;

// class Program{
//     static void Main()
//     {
//         Console.WriteLine("=== Hello World ===");
//         HelloWorld();

//         Console.WriteLine("\n=== Variables and Data Types ===");
//         VariablesDemo();

//         Console.WriteLine("\n=== Conditional Statements ===");
//         ConditionalDemo();

//         Console.WriteLine("\n=== Loops ===");
//         LoopsDemo();

//         Console.WriteLine("\n=== Functions / Methods ===");
//         FunctionsDemo();

//         Console.WriteLine("\n=== Classes and Objects ===");
//         ClassesDemo();

//     }

//     // 1. Hello World
//     static void HelloWorld(){
//         Console.WriteLine("Hello, World!");
//     }

//     // 2. Variables and Data Types
//     static void VariablesDemo(){
//         int age = 25;
//         double salary = 45000.50;
//         string name = "Sunny";
//         bool isStudent = false;

//         Console.WriteLine($"Name: {name}, Age: {age}, Salary: {salary}, Student: {isStudent}");
//     }

//     // 3. Conditional Statements
//     static void ConditionalDemo(){
//         int number = 10;
//         if(number > 0)
//             Console.WriteLine("Positive number");
//         else if (number < 0)
//             Console.WriteLine("Negative number");
//         else
//             Console.WriteLine("Zero");
//     }

//     // 4. Loops
//     static void LoopsDemo(){
//         Console.WriteLine("For Loop:");
//         for (int i = 1; i <= 5; i++){
//             Console.WriteLine(i);
//         }

//         Console.WriteLine("While Loop:");
//         int j = 1;
//         while (j <= 5){
//             Console.WriteLine(j);
//             j++;
//         }
//     }

//     // 5. Functions / Methods
//     static void FunctionsDemo(){
//         int result = Add(5, 10);
//         Console.WriteLine("Sum: " + result);
//     }

//     static int Add(int a, int b){
//         return a + b;
//     }

//     // 6. Classes and Objects
//     static void ClassesDemo(){
//         Car myCar = new Car();
//         myCar.Brand = "Toyota";
//         myCar.Year = 2022;
//         myCar.DisplayInfo();
//     }
// }

// class Car{
//     public string Brand;
//     public int Year;
//     public void DisplayInfo()
//     {
//         Console.WriteLine($"Brand: {Brand}, Year: {Year}");
//     }
// }




//hello world print
// Console.WriteLine("this is my first line of cSharp");

// using System;
// using System.Net.Security;
// // class Saini {
// //     static void Main(string[] args){
// //         Console.WriteLine("Hello ji saini sahab ji");
// //      }
// // }

// class Sharp
// {
//     static void Main()
//     {
//         Console.WriteLine("=== Hello World ===");
//         hello();

//         Console.WriteLine("\n=== Conditional Statement ===");
//         statement();

//         Console.WriteLine("\n =====variable demo====");
//         VariablesDemo();
//     }

//     static void hello()
//     {
//         Console.WriteLine("Hello world");
//     }

//     static void statement()
//     {
//         int x = 23;

//         if (x < 23)
//         {
//             Console.WriteLine("Value is less than 23");
//         }
//         else if (x == 23)
//         {
//             Console.WriteLine("x is equal to 23");
//         }
//         else
//         {
//             Console.WriteLine("x is greater than 23");
//         }
//         Console.WriteLine("While loop----->");
//         int i = 0, p = 6;
//         while (i < p)
//         {
//             Console.Write(i);
//             Console.Write(" ");
//             i++;
//         }
//         Console.WriteLine();
//         Console.WriteLine("For loop--->");
//         for (int c = 0; c < p; c++)
//         {
//             Console.Write(c);
//             Console.Write(" ");
//         }
//     }

//     static void VariablesDemo()
//     {
//         int x = 0;

//     }
// }

using System;
using System.Security.Cryptography.X509Certificates;
using Microsoft.VisualBasic;
class Saini
{
    static void Main(string[] args)
    {
        //     int x = 0;
        //     double y = 3.123;
        //     char a = 's';
        //     string s = "Sunny saini ";
        //     Console.WriteLine(x);
        //     Console.WriteLine(y);
        //     Console.WriteLine(a);
        //     Console.WriteLine(s);
        //     int h = 1;
        //     Console.WriteLine(h);
        //     Console.WriteLine(x == h);

        //     Console.WriteLine(saini(2, 3));


        //----------------typecasting-----------------------//
        // double x = 5.12;
        // int s = Convert.ToInt32(x);
        // Console.WriteLine(s);
        // string p = Convert.ToString(s);
        // Console.WriteLine(p);

        //-----------------take input from user------------------------------//
        // Console.WriteLine("Enter your name : ");
        // String s = Console.ReadLine();
        // Console.WriteLine("name is : " + s);

        // int x = Convert.ToInt32(Console.ReadLine());
        // Console.WriteLine("value is: "+x);

        //----------------------------arithmatic operations
        // int x = 2;
        // x += 1;
        // Console.WriteLine(x);
        // Console.WriteLine(Math.Round(Math.Sqrt(x),3));
        // Console.WriteLine(Math.Ceiling(2.4));
        // Console.WriteLine(Math.Floor(2.4));


        //=--------------------   conditional statement checking by taking input-------------------------------//
        // Console.Write("Enter your age:  ");
        // int age = Convert.ToInt32(Console.ReadLine());
        // if (age > 0 && age <= 20)
        // {
        //     Console.WriteLine("Your age is between 1 to 20");
        // }
        // else if (age > 20 && age <= 40)
        // {
        //     Console.WriteLine("Age is betwwen 20 to 40");
        // }
        // else
        // {
        //     Console.WriteLine("age is greater than 40");
        // }
        // Console.Write("Enter string: ");
        // String s = Console.ReadLine();
        // if (s == "saini")
        // {
        //     Console.WriteLine("string is matching with saini");
        // }
        // else
        // {
        //     Console.WriteLine("String is not matching with saini");
        // }
        //     Console.WriteLine("Enter the day name:");
        //     String s = Console.ReadLine();
        //     if (s == "sunday")
        //     {
        //         Console.WriteLine("It's sunday");
        //     }
        //     else if (s == "monday")
        //     {
        //         Console.WriteLine("its' monday");
        //     }
        //     else if (s == "tuesday")
        //     {
        //         Console.WriteLine("tueusnjx");
        //     }
        //     else if (s == "wednesday")
        //     {
        //         Console.WriteLine("weedcsd");
        //     }
        //     else if (s == "thrusday")
        //     {
        //         Console.WriteLine("thsiudbsk");
        //     }
        //     else if (s == "friday")
        //     {
        //         Console.WriteLine("fridsdkn");
        //     }
        //     else if (s == "saturday")
        //     {
        //         Console.WriteLine("Shdbs");
        //     }
        //    else
        //     {
        //         Console.WriteLine("This is not a day of week you write wrong word");
        //     }



        //---------------------------Now coming on the array part ------------------------------//
        // Console.WriteLine("Taking the size of an array");
        // int n = Convert.ToInt32(Console.ReadLine());
        // String[] arr = new string[n];
        // for (int i = 0; i < n; i++)
        // {
        //     Console.Write("Taking the " + i + " index value of array is: ");
        //     arr[i] = Console.ReadLine();
        // }
        // Console.WriteLine("Output array is: ");
        // for (int i = 0; i < n; i++)
        // {
        //     Console.WriteLine(arr[i]);
        // }
        // int[] arr = new int[n];
        // for (int i = 0; i < n; i++)
        // {
        //     Console.Write("Taking the " + i + " index value of array is: ");
        //     arr[i] = Convert.ToInt32(Console.ReadLine());
        // }
        // Console.WriteLine("Output array is: ");
        // Array.Sort(arr);
        // for (int i = 0; i < n; i++)
        // {
        //     Console.WriteLine(arr[i]);
        // }
        // multiply(3,4);


        Human h = new Human();
        h.name = "Sunny";
        h.age = 23;

        h.info();

    }
}
class Human
{
    public String name;
    public int age;
    public void info()
    {
        Console.WriteLine(name + " is " + age + " year old");
    }
}