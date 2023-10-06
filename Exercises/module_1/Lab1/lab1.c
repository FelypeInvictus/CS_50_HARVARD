#include <stdio.h>
//Biblioteca exclusiva do curso [CS50]
#include <cs50.h>



double getLoseForYear (int size_end);
double getGainForYear (int size);
int newPopulationSize (int size);


int main (void) {

int size;
int size_end;



do {
    size = get_int("Digite o tamanho populacional atual: ");
} while (size < 9 || size < 1 );


do {
    size_end = get_int("Digite o tamanho estimado da população: ");
} while (size_end < size || size_end < 1);


int years = 0;

do {

    size = newPopulationSize (size);
    years ++;


} while (size <= size_end);

printf("%i anos \n", years);

}

double getLoseForYear (int size) {
    return size / 4;
}


double getGainForYear (int size) {
    return size / 3;
}

int newPopulationSize (int size) {


    int resultGainForYear = getGainForYear (size);
    int resultLoseForYear = getLoseForYear (size);


    return size + (resultGainForYear - resultLoseForYear);
}
