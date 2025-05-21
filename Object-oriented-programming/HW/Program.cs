using System;

namespace MatrixApp
{
    class Matrix
    {
        private int[,] arr;

        public Matrix(int rows, int cols)
        {
            arr = new int[rows, cols];
            Random rnd = new Random();
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    arr[i, j] = rnd.Next(1, 10);
                }
            }
        }

        public double this[int row]
        {
            get
            {
                int sum = 0;
                int cols = arr.GetLength(1);
                
                for (int j = 0; j < cols; j++)
                {
                    sum += arr[row, j];
                }
                
                return (double)sum / cols;
            }
        }

        public long Product
        {
            get
            {
                long result = 1;
                int rows = arr.GetLength(0);
                int cols = arr.GetLength(1);
                
                for (int i = 0; i < rows; i++)
                {
                    for (int j = 0; j < cols; j++)
                    {
                        result *= arr[i, j];
                    }
                }
                
                return result;
            }
        }

        public void Print()
        {
            int rows = arr.GetLength(0);
            int cols = arr.GetLength(1);
            
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    Console.Write(arr[i, j] + " ");
                }
                Console.WriteLine();
            }
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Matrix matrix = new Matrix(3, 4);
            
            Console.WriteLine("Матриця:");
            matrix.Print();
            
            Console.WriteLine("\nСередні значення рядків:");
            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine("Рядок " + i + ": " + matrix[i]);
            }
            
            Console.WriteLine("\nДобуток всіх елементів: " + matrix.Product);
            
            Console.ReadKey();
        }
    }
}