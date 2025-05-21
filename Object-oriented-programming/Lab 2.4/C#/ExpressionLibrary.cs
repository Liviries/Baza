using System;

namespace ExpressionLibrary
{
    public class CalcException : Exception
    {
        public CalcException(string message) : base(message) { }
    }

    public class Calc
    {
        // Приватні поля
        private double a, b, c, d;

        // Властивості
        public double A { get { return a; } set { a = value; } }
        public double B { get { return b; } set { b = value; } }
        public double C { get { return c; } set { c = value; } }
        public double D { get { return d; } set { d = value; } }
        
        // Конструктор
        public Calc(double a, double b, double c, double d)
        {
            this.a = a;
            this.b = b;
            this.c = c;
            this.d = d;
        }
        
        // Метод обчислення
        public double Calculate()
        {
            try
            {
                double numerator = (a * b / 4) - 1;
                double radicand = 41 - d - b * a + c;
                
                if (radicand < 0)
                    throw new CalcException("Negative value under square root");
                
                double denominator = Math.Sqrt(radicand);
                
                if (denominator == 0)
                    throw new CalcException("Division by zero");
                
                return numerator / denominator;
            }
            catch (CalcException)
            {
                throw;
            }
            catch (Exception ex)
            {
                throw new CalcException(ex.Message);
            }
        }
    }
}