using System;

public class HelloWorld
{
    public static void Main()
    {
        int numero = 1, soma = 0;

            while (soma <= 1000 - numero){
                if ((numero % 3 == 0) || (numero % 5 == 0)){
                    Console.WriteLine(numero);
                    soma += numero;
                    }
                numero += 1;
                }
            Console.WriteLine("soma = " + soma);
    }
}
