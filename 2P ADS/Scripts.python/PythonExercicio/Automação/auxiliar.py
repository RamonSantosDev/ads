import pyautogui
import time
import pandas
time.sleep(5)
print(pyautogui.position())
tabela = pandas.read_csv('produtos.csv')
print(tabela)

'''      codigo       marca  ... custo               obs
 0    MOLO000251    Logitech  ...   6.5               NaN
 1    MOLO000192    Logitech  ...   5.0               NaN
 2    CAHA000251     Hashtag  ...  11.0               NaN
 3    CAHA000252     Hashtag  ...  11.0  Conferir estoque
 4    MOMU000111  Multilaser  ...   3.4               NaN
..          ...         ...  ...   ...               ...'''
