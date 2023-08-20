#include <stdio.h>
//Biblioteca exclusiva do curso [CS50]
#include <cs50.h>


int main(void)
{


    int num1 = get_int("Digite o primeiro número:");
    int num2 = get_int("Digite o segundo número:");

    char escolha;
    bool isChoose;
    do {
    escolha = get_char("Gostaria de saber o resultado? (S/N)");
    isChoose = escolha != 's' & escolha !='n' || escolha != 'S' & escolha !='N';
    if (escolha == 's' || escolha == 'S'){
        double resul = (double) num1 / (double) num2;
        printf("Esse é o resultado: %f :) \n", resul);
        return 0;
    } else if (escolha == 'n' || escolha == 'N'){
        printf("Ok! Você decidiu não ver a resposta. :( \n");
        return 0;
    } else {
        printf("Digito invalido! Digite S ou N, por gentileza.\n");
    }
       }
    while (isChoose);

    //printf("Você digitou o número: %i\n", num1);

    //string answer = get_string("What's your name?");
    //printf("Olá, Sr. %s\n!", answer);
}
