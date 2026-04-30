#Crie um programa que leia o nome completo de uma pessoa e mostre.
#O nome com letras maiusculas.
#O nome com letras minusculas.
# Quantas letras tem sem considerar espaço.
# Quantas letras tem o  primeiro nome.
nome = str(input('Digite seu Nome Completo '))
print(nome.upper())
print(nome.lower())
print(len(nome.replace(' ', '')))

separar = nome.split()
print(len(separar[0]))