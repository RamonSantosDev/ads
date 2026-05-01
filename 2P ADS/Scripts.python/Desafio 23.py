#Faça um program que leia um numero de 0 a 9999 e mostre na tela cada um dos digitos separados
n1 = input('Digite um numero de 0 a 9999 ')
troca = n1.replace('',' ')
separar = troca.split()
print(separar)
print('Unidade: {}'.format(separar[3]))
print('dezena: {}'.format(separar[2]))
print('centena: {}'.format(separar[1]))
print('milhar: {}'.format(separar[0]))