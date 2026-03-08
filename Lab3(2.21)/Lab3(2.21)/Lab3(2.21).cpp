#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int a;
    int b;
    int R;
    int Skruha;
	int Spryamokutnyk;
    printf("Введіть довжину прямокутника: ");
    scanf_s("%d", &a);
    printf("Введіть ширину прямокутника: ");
    scanf_s("%d", &b);
    printf("Введіть радіус круга: ");
    scanf_s("%d", &R);
    
    Skruha = 3.14 * R * R;
    Spryamokutnyk = a * b;
    if (Skruha > Spryamokutnyk) {
        printf("Площа круга більша за площу прямокутника, прямокутник поміщається");
    }
    else if (Skruha < Spryamokutnyk) {
        printf("Площа прямокутника більша за площу круга, прямокутник не поміщається");
    }
    else {
        printf("Площа круга дорівнює площі прямокутника");
	}

}