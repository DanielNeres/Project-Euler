using System;

public class HelloWorld
{
    public static void Main()
    {
        int numero = 1, soma = 0;

            while (soma <= 1000 - numero){
                if (numero % 3 == 0){
                    Console.Writeline(numero);
                    soma += numero;
                    }
                else if (numero % 5 == 0){
                    Console.Writeline(numero);
                    soma += numero;
                    }
                numero += 1;
                }
            Console.Writeline(soma);
    }
}
