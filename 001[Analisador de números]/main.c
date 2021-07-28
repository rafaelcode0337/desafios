/* 
 * Desafios para melhorar a lógica e, as habilidades com programação
 * Dev.....: Rafael Fonseca Auer
 * Git hub.: https://github.com/rafaelcode0337/desafios
 *
 * [001]
 * entrada vários números inteiros, e pare de pedir apenas quando o usuário
 * digitar a condição de parada que será o número 0
 *
 * Como saída mostre, Quantos números foram digitados, sua média, soma de todos
 * eles, maior número digitado e menor número digitado
 *
 * Exemplo de entrada:
 * 12, 24, 70, 35, 11
 *
 * Exemplo de saída:
 *
 * Q. de números....: 5
 * Soma dos valores.: 152
 * Maior número.....: 70
 * Menor número.....: 11
 * Média............: 30,4
 */

#include <stdio.h>

int main() {
	
	int soma, maior, menor, contador = 0;
	int numero;

	while(1) {

	 	printf("\nDigite um número (0 para parar): ");
                scanf("%d", &numero);
		if(numero == 0) break;

		contador++;
		soma += numero;

		if(contador == 1) maior, menor = numero;

		else {
			if ( numero > maior ) maior = numero;
			else if ( numero < menor ) menor = numero;
		}
	}

	printf("\nQ. de números....: %i", contador);
        printf("\nSoma dos valores.: %i", soma);
	printf("\nMaior número.....: %i", maior);
	printf("\nMenor número.....: %i", menor);
	printf("\nMédia............: %d", soma / contador);

	return 0;
}
