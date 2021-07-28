#!/usr/bin/env python
#
#
# Desafios para melhorar a lógica e, as habilidades com programação
# Dev.....: Rafael Fonseca Auer
# Git hub.: https://github.com/rafaelcode0337/desafios
# 
# [001]
# entrada vários números inteiros, e pare de pedir apenas quando o usuário 
# digitar a condição de parada que será o número 0
#
# Como saída mostre, Quantos números foram digitados, sua média, soma de todos
# eles, maior número digitado e menor número digitado
#
# Exemplo de entrada:
# 12, 24, 70, 35, 11
#
# Exemplo de saída:
#
# Q. de números....: 5
# Soma dos valores.: 152
# Maior número.....: 70
# Menor número.....: 11                                                              
# Média............: 30,4                                                            
#

__author__ = "Rafael Fonseca Auer"
__license__ = "MIT"

numeros:int = []

while True:
    numero = int(input('Digite um número (0 para parar ): '))
    if numero == 0:
        break
    numeros.append(numero)

print(f"{'Q. de números':.<18} : {len(numeros)}")
print(f"{'Soma dos valores':.<18} : {sum(numeros)}")
print(f"{'Maior número':.<18} : {max(numeros)}")
print(f"{'Menor número':.<18} : {min(numeros)}")
print(f"{'Média':.<18} : {sum(numeros) / len(numeros)}")
 
