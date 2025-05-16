using System;

namespace Dale
{
    public class Overload
    {
        public string Value { get; set; }

        // Конструктор за замовчуванням
        public Overload()
        {
            Value = string.Empty;
        }

        // Конструктор з параметрами
        public Overload(string value)
        {
            Value = value;
        }

        // Конструктор копіювання
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

        public static Overload operator +(Overload left, Overload right)         // Перевантаження оператора додавання для двох Overload
        {
            return new Overload(left.Value + right.Value);
        }


        public static Overload operator +(Overload s, char c)         // Перевантаження оператора додавання для Overload і символу
        {
            return new Overload(s.Value + c);
        }
        public static string[] operator /(Overload s, char separator)         // Перевантаження оператора ділення (розділення рядка на частини)
        {
            return s.Value.Split(separator);
        }
        public static Overload Add(params Overload[] items)         // Метод додавання для кількох рядків
        {
            string result = "";
            foreach (var item in items)
            {
                result += item.Value;
            }
            return new Overload(result);
        }
        public Overload RemoveEvenPositions()         // Метод для видалення символів на парних позиціях (індексація з 0)
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