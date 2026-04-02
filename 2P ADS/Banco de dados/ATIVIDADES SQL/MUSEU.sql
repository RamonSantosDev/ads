Listar o conteÃºdo da tabela de autores
SELECT * FROM AUTORES

--Listar o nome e nacionalidade de todos os autores
SELECT NOME, NACIONALIDADE  FROM AUTORES

--Listar CPF, nome, salÃ¡rio e salÃ¡rio anual dos funcionÃ¡rios
SELECT CPF, NOME, SALARIO, SALARIO * 40/3 FROM FUNCIONARIOS

--Listar o nome do autor concatenado com a sua nacionalidade
SELECT NOME || ' ' || NACIONALIDADE FROM AUTORES

--Listar o nome do autor concatenado com a sua nacionalidade com o alias de coluna nome e nacionalidade
SELECT NOME || ' ' || NACIONALIDADE AS"NOME E NACIONALIDADE" FROM AUTORES

--Listar a Ã¡rea mÃ©dia com o alias Ã¡rea mÃ©dia, e nÃºmero de salÃµes com o alias 'Total de salÃµes'
SELECT AVG(AREA) AS "AREA MEDIA", COUNT(*) "TOTAL SALOES" FROM SALOES

--Listar o total de pinturas com o alias 'Quantidade de pinturas'
SELECT COUNT(*) AS "Quantidade de Pinturas" 
FROM PINTURAS

--Listar o maior peso de uma escultura
SELECT MAX(PESO) AS "MAIOR PESO" 
FROM ESCULTURAS

--Listar o tÃtulo de uma obra que aparece primeiro na ordem alfabÃ©tica crescente
SELECT MIN(TITULO)  
FROM OBRAS