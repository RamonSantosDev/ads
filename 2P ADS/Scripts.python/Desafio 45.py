# criar um programa que faça o computador jogar Jokenpô com Você.

import random
print('-=-'*10)
print(' '*8,'Jogo Jokenpô'.upper())
print('-=-'*10)
print(' '*6,'Escolha uma Opção')
print('[ 1 ] TESOURA')
print('[ 2 ] PAPEL')
print('[ 3 ] PEDRA')
opcao = int(input('Qual o opção: '))
computador = random.randint(1, 3)

itens = ('Tesoura', 'Papel', 'Pedra')

if opcao < 1 or opcao > 3:
    print('Opção invalida.')
else:
    print(f'Você: {itens[opcao-1]}')
    print(f'Computador: {itens[computador-1]}')

if (opcao == 1 and computador ==  1) or (opcao == 2 and computador == 2) or (opcao == 3 and computador == 3):
   print('Empate')
elif (opcao == 1 and computador == 2) or (opcao == 2 and computador == 3) or (opcao == 3 and computador == 1):
    print('Você venceu!')
elif (opcao == 1 and computador == 3) or (opcao == 2 and computador == 1) or (opcao == 3 and computador == 2):
    print('Computador Venceu!')
else:
    print('Opção invalida.')
