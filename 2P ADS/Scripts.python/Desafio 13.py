# faça um algoritmo que leia o salario de um funcionario e mostre seu novo salario com 15% de aumento.
salario = float(input('QUal é o seu salario '))
aumento = salario + (salario * 15 / 100)
print('seu salario é R${:.2f} e você recebeu um aumento de 15%\nseu novo salario é R${:.2f}'.format(salario, aumento))