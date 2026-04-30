#Escreva um programa que converta uma temperatura digitanda em °C e converta para °F.
c = float(input('Digite a temperatura em Celsius: '))
f = (c * 1.8) + 32
print('A temperatura de {:.1f}°C corresponde a {:.1f}°F '.format(c, f))