using System;
using Dale;

namespace Chip
{
    public class Program
    {
        public static void Main()
        {
            var container = new TextContainer();

            Console.WriteLine("Enter lines for the container (empty line to finish):");
            while (true)
            {
                Console.Write("Line: ");
                string input = Console.ReadLine() ?? "";
                if (string.IsNullOrEmpty(input)) break;
                container.Add(new SimpleString(input));
            }

            Console.WriteLine("String from first characters: " + container.BuildFirstCharString());
            var minLine = container.MinLine();
            Console.WriteLine("Shortest line: " + (minLine?.Value ?? "none"));

            Console.Write("Enter a character to calculate its frequency: ");
            char ch = Console.ReadKey().KeyChar;
            Console.WriteLine();
            Console.WriteLine($"Frequency of '{ch}': {container.CharFrequency(ch):F3}");

            if (container.Lines.Count > 0)
            {
                Console.WriteLine($"Removing the first line: {container.Lines[0].Value}");
                container.Remove(container.Lines[0]);
                Console.WriteLine("After removal, string from first characters: " + container.BuildFirstCharString());
            }

            container.Clear();
            Console.WriteLine("After clearing, shortest line: " + (container.MinLine()?.Value ?? "none"));
        }
    }
}