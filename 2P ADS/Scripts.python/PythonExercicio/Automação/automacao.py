import pyautogui
import time
pyautogui.PAUSE = 1
link = 'https://dlp.hashtagtreinamentos.com/python/intensivao/login'
# entrar no navegador
pyautogui.press('win')
pyautogui.write('chrome')
pyautogui.press('enter')
pyautogui.write(link) #Digita o link
pyautogui.press('enter')
time.sleep(3) #espera o site carregar
#login
pyautogui.click(x=713, y=405) #clicar no email
pyautogui.write('Ramonccb20@gmail.com')
pyautogui.press('tab')# passa para o proximo campo
pyautogui.write('123456')
pyautogui.press('tap')
pyautogui.press('enter')
time.sleep(3)

import pandas

pyautogui.click(x=687, y=291)
tabela = pandas.read_csv('produtos.csv')
for linha in tabela.index:
    codigo = str(tabela.loc[linha, 'codigo'])
    pyautogui.write(codigo)
    pyautogui.press('tab')
    marca = str(tabela.loc[linha,'marca'])
    pyautogui.write(marca)
    pyautogui.press('tab')