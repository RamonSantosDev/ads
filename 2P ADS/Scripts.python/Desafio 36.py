valorC = float(input('Qual o valor da casa? '))
salario = float(input('Qual é o seu salario? '))
prazo = int(input('Qual é o prazo? '))
limite= (salario * 30)/100
meses = 12 * prazo
parcela = valorC / meses

if parcela > limite:
    print('emprestimo negado! pois a parcela R${:.2f} passou do limite de 30%'.format(parcela))
elif parcela <= limite:
    print('emprestimo aprovado voce vai pagar {}x de R${:.2f} no periodo de {} anos.'.format(meses, parcela, prazo))



