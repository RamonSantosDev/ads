from random import randint
from time import sleep

print('--='*13)
print('Vou pensar em um numero entre 0 e 10')
print('--='*13)
contador = 1
escolhido = randint(0, 11)
pensei = int(input('Em que número eu pensei? '))
while escolhido != pensei:
    print('Processando...')
    sleep(0.5)
    pensei = int(input('errou! tente novamente: '))
    contador += 1

print('Processando...')
sleep(2)
print('PARABENS! Voce acertou! foram necessarios {} Palpites'.format(contador))