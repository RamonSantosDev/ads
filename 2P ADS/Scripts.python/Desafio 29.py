velocidade = int(input('Digite a velocidade do carro: '))
multa = (velocidade - 80) * 7
if velocidade > 80:
    print('Voce esta acima da velocidade permitida sua multa é de R${:.2f}'.format(multa))

