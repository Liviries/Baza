using System;
using Dale;

namespace Chip
{
    public class Program
    {
        public static void Main()
        {
            // Робота з DigitString
            Console.Write("Enter a string for DigitString: ");
            string digitInput = Console.ReadLine() ?? string.Empty;
            StringBase DS = new DigitString(digitInput);

            Console.WriteLine("Original DigitString: " + DS.Value);
            Console.WriteLine("Length of DigitString: " + DS.Length());
            Console.WriteLine("DigitString after ReplaceSpecial: " + DS.ReplaceSpecial());

            // Робота з LetterString
            Console.Write("Enter a string for LetterString: ");
            string letterInput = Console.ReadLine() ?? string.Empty;
            StringBase LS = new LetterString(letterInput);

            Console.WriteLine("Original LetterString: " + LS.Value);
            Console.WriteLine("Length of LetterString: " + LS.Length());
            Console.WriteLine("LetterString after ReplaceSpecial: " + LS.ReplaceSpecial());

            if (LS is LetterString letterStr)
            {
                letterStr.Sort();
                Console.WriteLine("Sorted LetterString: " + letterStr.Value);
            }
        }
    }
}