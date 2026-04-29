# Faça um programa que leia a largura e a altura de uma parede calcule a area e a quantidade
# de tinta necessaria para pinta-la, sabendo que cada litro de tinta pinta uma area de 2m².
l = float(input('Largura da parede: '))
a = float(input('Altura da parede: '))
r = float(input('Qual o redimento da Tinta: '))
area = l * a
re = area / r
print('Sua Parede {:.2f}m por {:.2f}m tem uma area de {:.2f}m²'.format(l, a, area))
print("Com esse rendimento {:.2f}m² por L a quantidade de tinta vai ser {:.2f}Litros".format(r, re))