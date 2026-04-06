Listar todos os dados dos autores com cÃ³digo maior que 105
SELECT * FROM AUTORES WHERE CODIGO > 105 

Listar todos os dados dos autores com cÃ³digo maior que 105 e de nacionalidade francesa
SELECT * FROM AUTORES WHERE CODIGO > 105 AND UPPER(NACIONALIDADE) = 'FRANCESA'

--Listar todos os dados dos autores franceses ou brasileiros
SELECT * FROM AUTORES WHERE UPPER(NACIONALIDADE) IN('FRANCESA', 'BRASILEIRA')

--Listar todos os dados dos autores com cÃ³digo entre 104 e 107 inclusive
SELECT * FROM AUTORES WHERE CODIGO BETWEEN 104 AND 107

--Listar todos os dados dos autores com Dali no nome
SELECT * FROM AUTORES WHERE NOME LIKE '%DALI%'

--Listar todos os dados dos salÃµes cuja Ã¡rea Ã© nula
SELECT * FROM SALOES WHERE AREA IS NULL

--Listar todos os dados dos autores em ordem descendente de nacionalidade
SELECT *
FROM AUTORES
ORDER BY NACIONALIDADE DESC

--Listar todos os dados dos autores em ordem ascendente de nacionalidade e descendente de cÃ³digo
SELECT * FROM AUTORES
ORDER BY NACIONALIDADE , CODIGO DESC 

--Repetir o comando anterior ordenando pela posiÃ§Ã£o da coluna
SELECT *
FROM AUTORES
ORDER BY 3 , 1 DESC