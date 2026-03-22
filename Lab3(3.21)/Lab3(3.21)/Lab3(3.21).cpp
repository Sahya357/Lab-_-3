#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukrainian");

    int TrueDetevctiv;
    printf("Напишіть номер серії: ");
	scanf_s("%d", &TrueDetevctiv);
    switch(TrueDetevctiv) {
        case 1:
            printf("Ви вибрали серію %d ''The Long Bright Dark''\n",TrueDetevctiv);
            printf("Дата виходу 12 січня 2014 року");
            break;
        case 2:
            printf("Ви вибрали серію %d ''Seeing Things''\n", TrueDetevctiv);
            printf("Дата виходу 19 січня 2014 року");
            break;
        case 3:
            printf("Ви вибрали серію %d ''The Locked Room''\n", TrueDetevctiv);
            printf("Дата виходу 26 січня 2014 року");
            break;
        case 4:
            printf("Ви вибрали серію %d ''Who Goes There''\n", TrueDetevctiv);
            printf("Дата виходу 9 лютого 2014 року");
            break;
        case 5:
            printf("Ви вибрали серію %d ''The Secret Fate of All Life''\n", TrueDetevctiv);
            printf("Дата виходу 16 лютого 2014 року");
            break;
        case 6:
            printf("Ви вибрали серію %d ''Haunted Houses''\n", TrueDetevctiv);
            printf("Дата виходу 23 лютого 2014 року");
            break;
        case 7:
            printf("Ви вибрали серію %d ''After You've Gone''\n", TrueDetevctiv);
            printf("Дата виходу 2 березня 2014 року");
            break;
        case 8:
            printf("Ви вибрали серію %d ''Form and Void''\n", TrueDetevctiv);
            printf("Дата виходу 9 березня 2014 року");
            break;
        default:
            printf("Такої серії немає");
	}
}
