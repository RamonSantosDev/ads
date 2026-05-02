distancia = int(input('QUal a distancia de sua viagem em Km? '))
preco1 = distancia * 0.50
preco2 = distancia * 0.45
if distancia <= 200:
    print('O preco da sua passagem ficou R${:.2f}'.format(preco1))
else:
    print('O preço da sua passagem ficou R${:.2f}'.format(preco2))