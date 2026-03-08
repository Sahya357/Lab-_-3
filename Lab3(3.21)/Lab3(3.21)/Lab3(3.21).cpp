#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukrainian");

    int TrueDetevctiv;
    printf("Напишіть номер серії: ");
	scanf_s("%d", &TrueDetevctiv);
    switch(TrueDetevctiv) {
        case 1:
            printf("Ви вибрали серію %d\n",TrueDetevctiv);
            printf("Дата виходу %d.01.2026", TrueDetevctiv);
            break;
        case 2:
            printf("Ви вибрали серію %d\n", TrueDetevctiv);
            printf("Дата виходу %d.01.2026", TrueDetevctiv);
            break;
        case 3:
            printf("Ви вибрали серію %d\n", TrueDetevctiv);
            printf("Дата виходу %d.01.2026", TrueDetevctiv);
            break;
        case 4:
            printf("Ви вибрали серію %d\n", TrueDetevctiv);
            printf("Дата виходу %d.01.2026", TrueDetevctiv);
            break;
        case 5:
            printf("Ви вибрали серію %d\n", TrueDetevctiv);
            printf("Дата виходу %d.01.2026", TrueDetevctiv);
            break;
        case 6:
            printf("Ви вибрали серію %d\n", TrueDetevctiv);
            printf("Дата виходу %d.01.2026", TrueDetevctiv);
            break;
        case 7:
            printf("Ви вибрали серію %d\n", TrueDetevctiv);
            printf("Дата виходу %d.01.2026", TrueDetevctiv);
            break;
        case 8:
            printf("Ви вибрали серію %d\n", TrueDetevctiv);
            printf("Дата виходу %d.01.2026", TrueDetevctiv);
            break;
        case 9:
            printf("Ви вибрали серію %d\n", TrueDetevctiv);
            printf("Дата виходу %d.01.2026", TrueDetevctiv);
            break;
        case 10:
            printf("Ви вибрали серію %d\n", TrueDetevctiv);
            printf("Дата виходу %d.01.2026", TrueDetevctiv);
            break;
        case 11:
            printf("Ви вибрали серію %d\n", TrueDetevctiv);
            printf("Дата виходу %d.01.2026", TrueDetevctiv);
            break;
        case 12:
            printf("Ви вибрали серію %d\n", TrueDetevctiv);
            printf("Дата виходу %d.01.2026", TrueDetevctiv);
            break;
        default:
            printf("Такої серії немає");
	}
}