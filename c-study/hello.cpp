#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 198�~ ����������
    int amount_of_juice = 198;
    // 138�~ ����
    int amount_of_milk = 138;
    // 1000�~ �x�����z
    int amount_of_paid = 1000;
    // 0.05 �����
    double consumption_tax = 0.05;
    // �Ŕ������i
    int tax_excluded_price = amount_of_juice + amount_of_milk * 2;
    // �ō��݉��i
    int tax_included_price = (int)(tax_excluded_price + tax_excluded_price * consumption_tax);
    // ���ނ�͐���
    int change = amount_of_paid - tax_included_price;
    printf("���ނ�F%d\n", change);
    return 0;
}