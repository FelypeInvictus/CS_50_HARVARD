#include <stdio.h>
//Biblioteca exclusiva do curso [CS50]
#include <cs50.h>


// Teste de piramide

void showPyramid(bool isBiggerOrLess, int heigth);

int main(void){
//Mostrar aviso
printf("O tamanho da pirâmide não pode ser maior 8 ou menor que 1!\n");
//Declarando variavel tamanho
int heigth;
//Declarando variavel se é maior ou menor
bool isBiggerOrLess;
//Declarando limite de quantidade de blocos
const int maxLimit = 8;
//Declarando limite minimo de blocos
const int minLimit = 1;

do {
//Pergunta ao usuario o tamanho
heigth = get_int("Digite o tamanho da pirâmide: ");
//Entrada da condição booleana
isBiggerOrLess = (heigth > maxLimit || heigth < minLimit);
//Mostrar pirâmide
showPyramid(isBiggerOrLess, heigth);

} while (isBiggerOrLess);
}

void showPyramid(bool isBiggerOrLess, int heigth){
if(!isBiggerOrLess){
    for(int i = 0; i<heigth;i++){
        for(int y = 0; y< heigth - i;y++){
            printf(" ");
    }
    for (int j = heigth; j >= heigth - i; j--){
            printf("#");
    }
    
    printf(" ");
    
    for(int h = heigth; h >= heigth - i; h-- ){
        printf("#");
    }
    
    
    
        printf("\n");
        }
    }
}


