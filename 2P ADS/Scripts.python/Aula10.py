''' nome = str(input('Qual o seu nome? '))
if nome == 'Ramon':
    print('Que nome bonito!')
else:
    print('seu nome é tao normal')
print('Bom dia {}!'.format(nome)) '''
n1 = float(input('Digite a primeira nota: '))
n2 = float(input('Digite a segunda nota: '))
m = (n1 + n2)/2
print('A sua média foi {}'.format(m))
if m >= 6.0:
    print('Aprovado')
else:
    print('Reprovado')
