import random
from time import sleep
print('--='*13)
print('Vou pensar em um numero entre 0 e 5')
print('--='*13)
n = int(input('Em que numero eu pensei? '))
lista = [0, 1, 2, 3, 4, 5]
escolhido = random.choice(lista)
print('Processando...')
sleep(2)
if escolhido == n:
    print('PARABENS! Voce acertou!')
else:
    print('GANHEI! Eu pensei no numero {} e não no {}! '.format(escolhido, n))