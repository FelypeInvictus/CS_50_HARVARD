#include<stdio.h>
#include<cs50.h>

int CountCoins (int coins1, int coins2, int coins3, int coins4);

int main (void) {

    //Declerando variaveis das moedas
    int coins25 = 0, coins10 = 0, coins5 = 0, coins1 = 0;
    //Declarando total de moedas
    int total_coins;
    //Declarando variavel do resto de moedas
    int rest_coins;
    //declarando  numero de entrada
    double number_user = 0;

    do {
    number_user = get_double("Digite o troco: ");

    while (number_user>=25){
        coins25++;
        number_user -= 25;
    }

    while (number_user>=10){
        coins10++;
        number_user -= 10;
    }

    while (number_user>=5){
        coins5++;
        number_user -= 5;
    }

    rest_coins = number_user;
    coins1 = rest_coins;

    total_coins = CountCoins(coins25, coins10, coins5, coins1);

    printf("%d \n", total_coins);


    } while (number_user < 1);


}

int CountCoins (int coins1, int coins2, int coins3, int coins4){

    return (coins1 + coins2 + coins3 + coins4);
}
