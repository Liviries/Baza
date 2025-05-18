using System;

namespace Dale
{
    // Похідний клас "Символи"
    public class LetterString : StringBase
    {
        public LetterString(string value) : base(value) { }

        public override string ReplaceSpecial()
        {
            return Value.Replace("#", "!!");
        }

        public void Sort()
        {
            Value = new string(Value.OrderBy(c => c).ToArray());
        }
    }

    // Базовий клас "Рядки"
    public class StringBase
    {
        public string Value { get; protected set; } // обмеження set

        public StringBase()
        {
            Value = string.Empty;
        }

        public StringBase(string value)
        {
            Value = value;
        }

        public StringBase(StringBase other)
        {
            Value = other.Value;
        }

        // Віртуальна функція обчислення довжини
        public virtual int Length()
        {
            return Value.Length;
        }

        // Віртуальна функція заміни символу
        public virtual string ReplaceSpecial()
        {
            return Value;
        }
    }

    // Похідний клас "Цифри"
    public class DigitString : StringBase
    {
        public DigitString(string value) : base(value) { }

        // Перевизначення функції заміни '3' на '11'
        public override string ReplaceSpecial()
        {
            return Value.Replace("3", "11");
        }
    }
}