# criar um programa que faça o computador jogar Jokenpô com Você.

import random
from time import sleep
print('-=-'*10)
print(' '*8,'Jogo Jokenpô'.upper())
print('-=-'*10)
print(' '*6,'Escolha uma Opção')
print('[ 1 ] TESOURA')
print('[ 2 ] PAPEL')
print('[ 3 ] PEDRA')
opcao = int(input('Qual o opção: '))
print('JO')
sleep(1)
print('KEN')
sleep(1)
print('PO!!!')
sleep(0.5)
computador = random.randint(1, 3)

itens = ('Tesoura', 'Papel', 'Pedra')

if opcao < 1 or opcao > 3:
    print('Opção invalida.')
else:
    print('-=-'*15)
    print(f'Computador jogou: {itens[computador - 1]}')
    print(f'Jogador jogou: {itens[opcao-1]}')
    print('-=-' * 15)

if (opcao == 1 and computador ==  1) or (opcao == 2 and computador == 2) or (opcao == 3 and computador == 3):
   print('EMPATE')
elif (opcao == 1 and computador == 2) or (opcao == 2 and computador == 3) or (opcao == 3 and computador == 1):
    print('JOGADOR VENCEU!')
elif (opcao == 1 and computador == 3) or (opcao == 2 and computador == 1) or (opcao == 3 and computador == 2):
    print('Computador Venceu!'.upper())
else:
    print('Opção invalida.')
