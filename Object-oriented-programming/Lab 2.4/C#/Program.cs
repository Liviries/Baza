using System;
using ExpressionLibrary;

namespace ExpressionApp
{
    class Program
    {
        static void Main(string[] args)
        {
            // Створюємо масив об'єктів
            Calc[] calcs = new Calc[3];
            calcs[0] = new Calc(2, 4, 10, 5);    // нормальний
            calcs[1] = new Calc(10, 8, -30, 20); // від'ємне підкореневе
            calcs[2] = new Calc(0, 0, 0, 41);   
            
            // Обробляємо кожен об'єкт у масиві
            for (int i = 0; i < calcs.Length; i++)
            {
                Console.WriteLine($"Object {i+1}: a={calcs[i].A}, b={calcs[i].B}, c={calcs[i].C}, d={calcs[i].D}");
                
                try
                {
                    double result = calcs[i].Calculate();
                    Console.WriteLine($"Result: {result}");
                }
                catch (CalcException ex)
                {
                    Console.WriteLine($"Error: {ex.Message}");
                }
                
                Console.WriteLine();
            }
            
            Console.ReadKey();
        }
    }
}