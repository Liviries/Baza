using System;
using Console_application;

namespace String_manipulator {

public class MainClass {
    public void Main(string input)  
    {
        string input_Lowercase = input.ToLower();
        int input_Length = input.Length;

        char[] chars = input.ToCharArray();
        Array.Sort(chars);
        string input_Sorted = new string(chars);


      Program transfer = new Program();
        transfer.Output(input, input_Length, input_Lowercase, input_Sorted);
    }
  }
}   