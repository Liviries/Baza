using System;
using Console_application;

namespace String_manipulator {

public class MainClass {
    public string Main(string input)  
    {
        string input_Lowercase = input.ToLower();
        int input_Length = input.Length;

        char[] chars = input.ToCharArray();
        Array.Sort(chars);
        return new string(chars);
    }
  }
}   