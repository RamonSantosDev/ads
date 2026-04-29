# Crie um programa que leia quanto dinheiro uma pessoa tem na carteira e mostre quantos dolares ela pode comprar.
d = float(input('Quanto você tem na Carteira: '))
dolar = d / 5
print('Na sua carteira tem R${:.2f} com esse valor vc pode comprar US{:.2f}'. format(d, dolar))