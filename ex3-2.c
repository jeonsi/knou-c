#include <stdio.h>
#pragma warning(disable:4996)
void main() {
    int in_money, coin_500, coin_100, coin_50, coin_10;
    printf("동전으로 교환할 금액은? ");
    scanf("%d", &in_money);

    coin_500 = in_money / 500;
    in_money = in_money % 500;
    coin_100 = in_money / 100;
    in_money = in_money % 100;
    coin_50 = in_money / 50;
    in_money = in_money % 50;
    coin_10 = in_money / 10;
    in_money = in_money % 10;

    printf("\n오백원짜리 ==> %d개", coin_500);
    printf("\n백원짜리 ==> %d개", coin_100);
    printf("\n오십원짜리 ==> %d개", coin_50);
    printf("\n십원짜리 ==> %d개", coin_10);
    printf("\n바꾸지 못한 잔돈 ==> %d원\n", in_money);    
}