using System;
using Dale;

namespace Chip {

public class Program {
    public static void Main()
    {
        Program program = new Program();
        program.Input();
    }

        public void Input()
        {
            Console.Write("Type string: ");
            string input = Console.ReadLine() ?? "";

            MainClass transfer = new MainClass(input);
            MainClass transfer2 = new MainClass(transfer);
            transfer.Main();
    }

    public void Output(string input, int input_Length, string input_Lowercase, string input_Sorted)
    {
        Console.WriteLine("");
        Console.WriteLine("Input: " + input);
        Console.WriteLine("Lowercase: " + input_Lowercase);
        Console.WriteLine("Length: " + input_Length);
        Console.WriteLine("Sorted: " + input_Sorted);
    }
  }
}