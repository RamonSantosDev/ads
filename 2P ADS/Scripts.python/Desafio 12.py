#faça um algoritmo que leia o preco de um produto e moste seu novo preço com 5% de desconto.
p = float(input('Preço do produto: '))
des = p - (p * 5 / 100)
print('Valor do Produto é R${:.2f} com desconto de 5% o novo valor é R${:.2f}'.format(p, des))