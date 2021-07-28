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

#include <iostream>

using namespace std;

int main() {

        int soma, maior, menor, contador = 0;
        int numero;

        while(true) {

                cout << "\nDigite um número (0 para parar): ";
                cin >> numero;
                if(numero == 0) break;

                contador++;
                soma += numero;

                if(contador == 1) maior, menor = numero;

                else {
                        if ( numero > maior ) maior = numero;
                        else if ( numero < menor ) menor = numero;
                }
        }

        cout << "\nQ. de números....: " << contador;
        cout << "\nSoma dos valores.: " << soma;
        cout << "\nMaior número.....: " << maior;
        cout << "\nMenor número.....: " << menor;
        cout << "\nMédia............: " << (float) soma / contador;

        return 0;
}
