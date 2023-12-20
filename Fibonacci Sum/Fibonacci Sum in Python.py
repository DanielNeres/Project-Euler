numeroimprecao = 1; numeroanterior = 1; soma = 0
while numeroimprecao < 4000000:
    print(numeroimprecao)
    numeroimprecao += numeroanterior
    numeroanterior = numeroimprecao - numeroanterior
    if numeroimprecao % 2 == 0:
        soma += numeroimprecao

print("soma =", soma);
