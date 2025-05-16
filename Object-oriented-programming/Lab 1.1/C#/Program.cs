using System;
using String_manipulator;

namespace Console_application {

public class Program {
        public static void Main()
        {
            MainClass program = new MainClass();
            string input = Input();
            string result = program.Main(input);
            Output(input, input.Length, input.ToLower(), result);
    }

    public static string Input()
    {
        Console.Write("Type string: ");
        return Console.ReadLine() ?? "";
    }

    public static void Output(string input, int input_Length, string input_Lowercase, string input_Sorted)
    {
        Console.WriteLine("");
        Console.WriteLine("Input: " + input);
        Console.WriteLine("Lowercase: " + input_Lowercase);
        Console.WriteLine("Length: " + input_Length);
        Console.WriteLine("Sorted: " + input_Sorted);
    }
  }
}