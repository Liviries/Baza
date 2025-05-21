using System;
using System.Collections.Generic;
using System.Linq;

namespace Dale
{
    public interface IFirstCharStringBuilder
    {
        string BuildFirstCharString();
    }

    public class SimpleString
    {
        public string Value { get; }

        public SimpleString(string value)
        {
            Value = value;
        }

        public int Length() => Value.Length;
    }

    public class TextContainer : IFirstCharStringBuilder
    {
        private readonly List<SimpleString> lines = new();

        public IReadOnlyList<SimpleString> Lines => lines.AsReadOnly();

        public void Add(SimpleString line) => lines.Add(line);

        public bool Remove(SimpleString line) => lines.Remove(line);

        public void Clear() => lines.Clear();

        public SimpleString MinLine() =>
            lines.OrderBy(l => l.Length()).FirstOrDefault();

        public string BuildFirstCharString() =>
            string.Concat(lines.Where(l => l.Value.Length > 0).Select(l => l.Value[0]));

        public double CharFrequency(char c)
        {
            int total = lines.Sum(l => l.Value.Length);
            if (total == 0) return 0;
            int count = lines.Sum(l => l.Value.Count(ch => ch == c));
            return (double)count / total;
        }
    }
}