#Escreva um programa que leia um valor em metros e o exiba convertido em centimetro e milimetros.
print('='*5, 'Desafio 8', '='*5)
m = float(input('Qual é a sua altura em metros: '))
cm = m * 100
mm = m * 1000
print('Sua a altura é {}'.format (m))
print('Em centimetros é {}' .format (cm), end=' ')
print('Em milimetros é {}'. format (mm))