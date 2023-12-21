using System;

public class FibonacciSum
{
	public static void Main()
	{
		ulong numeroimprecao = 1, numeroanterior = 1, soma = 0;
		for (; numeroimprecao <= 4000000;)
		{
			Console.WriteLine(numeroimprecao);
			numeroimprecao += numeroanterior;
			numeroanterior = numeroimprecao - numeroanterior;
			if (numeroimprecao % 2 == 0)
			{
				soma += numeroimprecao;
			}
		}
		Console.WriteLine("soma = " + soma);
	}
}