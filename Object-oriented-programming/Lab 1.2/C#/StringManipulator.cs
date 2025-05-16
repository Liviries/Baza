using System;
using Chip;

namespace Dale {
public class MainClass {
    private string input;

    public MainClass() 
    {
        input = string.Empty;
    }

    public MainClass(string input) 
    {
        this.input = input;
    }

    public MainClass(MainClass other) 
    {
        this.input = other.input;
    }

    ~MainClass() {
    }

    public void Main()
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