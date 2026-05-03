sex = str(input('Informa seu sexo: [ M/F ] ')).strip().upper()[0]
while (sex != 'M') and (sex != 'F') :
    sex = str(input('dados invalidos. por favor informe seu sexo: ')).strip().upper()[0]

print('Sexo {} Registrado com sucesso!' . format(sex))