nome = str(input('Qual é o seu nome? '))
if nome == 'Ramon':
    print('Que nome bonito!')
elif nome == 'Pedro' or 'Maria' or 'João':
    print('seu nome é bem popular no Brasil.')
else:
    print('Seu nome é bem normal.')


print('Tenha um Bom dia, {}!'.format(nome))