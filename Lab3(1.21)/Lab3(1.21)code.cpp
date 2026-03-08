#include <stdio.h> 
#include <locale.h> 
int main() {
	setlocale(LC_ALL, "Ukrainian");
	int x;
	int z;
	int y;
	scanf_s("%d", &x);
	scanf_s("%d", &z);
	if (x < 3) { y = 3 * x + z; }
	else if (x > 3 && x < 10) { y = (2 * x * z) / (7 - z); }
	else if (x > 10) { y = x; }
	
	/*
	if (x < 3) { y = 3 * x + z }
	if (x < 3 && x > 3 && x < 10) { y = (2 * x * z) / (7 - z) }
	if (x < 3 && x > 3 && x < 10 && x > 10) { y = x }
	*/
	if (y != 0) {
		printf("Відповідь : %d", y);
	}
		else {
			printf("Відповідь : невідомо");
		}
}