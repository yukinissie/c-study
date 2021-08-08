#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 198‰~ ´—Áˆù—¿…
    int amount_of_juice = 198;
    // 138‰~ ‹“û
    int amount_of_milk = 138;
    // 1000‰~ x•¥‹àŠz
    int amount_of_paid = 1000;
    // 0.05 Á”ïÅ
    double consumption_tax = 0.05;
    // Å”²‚«‰¿Ši
    int tax_excluded_price = amount_of_juice + amount_of_milk * 2;
    // Å‚İ‰¿Ši
    int tax_included_price = (int)(tax_excluded_price + tax_excluded_price * consumption_tax);
    // ‚¨’Ş‚è‚Í®”
    int change = amount_of_paid - tax_included_price;
    printf("‚¨’Ş‚èF%d\n", change);
    return 0;
}