numero = 1; soma = 0

while soma <= 1000 - numero:
    if numero % 3 == 0:
        print(numero)
        soma += numero
        
    elif numero % 5 == 0:
        print(numero)
        soma += numero
    numero += 1
print(soma)
