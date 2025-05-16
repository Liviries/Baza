using System;
using Dale;


namespace Chip
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Console.Write("Enter a string for R2: ");
            string userInput = Console.ReadLine() ?? string.Empty;

            // Описати клас, три об'єкти R1, R2, R3, використовуючи різні конструктори
            Overload R1 = new Overload(); 
            Overload R2 = new Overload(userInput); 
            Overload R3 = new Overload(R2); 

            R2 = R2.RemoveEvenPositions();

            // "Скласти" об'єкти R2, R3 і результат "помістити" до об’єкта R1
            R1 = R2 + R3;

            Console.WriteLine("R2 (without even positions): " + R2.Value);
            Console.WriteLine("R3 (copy): " + R3.Value);
            Console.WriteLine("R1 (R2 + R3): " + R1.Value);


            Console.WriteLine("R1 Uppercase: " + R1.GetUpper());
            Console.WriteLine("R1 Length: " + R1.Length());

            // Перевантаження оператора ділення
            string[] parts = R1 / 'e';
            Console.WriteLine("R1 split by 'e': " + string.Join(", ", parts));

            Overload sum = Overload.Add(R1, R2, R3);
            Console.WriteLine("Sum of R1, R2, R3: " + sum.Value);
        }
    }
}