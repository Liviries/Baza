using System;

namespace Dale
{
        public class LetterString : Overload
    {
        public LetterString(string value) : base(value) { }

        // Метод сортування рядка за зростанням
        public void Sort()
        {
            Value = new string(Value.OrderBy(c => c).ToArray());
        }

        // Метод отримання даних об'єкту
        public string GetData()
        {
            return Value;
        }
    }
    public class Overload
    {
        public string Value { get; set; }


        public Overload()
        {
            Value = string.Empty;
        }

        public Overload(string value)
        {
            Value = value;
        }

        public Overload(Overload other)
        {
            Value = other.Value;
        }
        public int Length()
        {
            return Value.Length;
        }
        public string GetUpper()
        {
            return Value.ToUpper();
        }

        public static Overload operator +(Overload left, Overload right)
        {
            return new Overload(left.Value + right.Value);
        }


        public static Overload operator +(Overload s, char c)
        {
            return new Overload(s.Value + c);
        }
        public static string[] operator /(Overload s, char separator)
        {
            return s.Value.Split(separator);
        }
        public static Overload Add(params Overload[] items)
        {
            string result = "";
            foreach (var item in items)
            {
                result += item.Value;
            }
            return new Overload(result);
        }
        public Overload RemoveEvenPositions()
        {
            var result = "";
            for (int i = 0; i < Value.Length; i++)
            {
                if (i % 2 == 0)
                    result += Value[i];
            }
            return new Overload(result);
        }
    }
}