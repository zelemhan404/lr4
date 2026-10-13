#include <stdio.h>
#include <locale.h>
int task1()
{
	setlocale(LC_CTYPE, "RUS");
	char c = '!';

	int i = 2;

	float f = 3.14f;

	double d = 5e-12;
	printf("значения равны: c = %c, i = %d, f =  %.2f, d = %e\n", c, i, f, d);
	return 0;
}
int task2() {
	setlocale(LC_CTYPE, "RUS");
	char c1;
	int i1;
	float f1;
	double d1;
	printf("введите значения\n");
	scanf(" %c %d %f %lf", &c1, &i1, &f1, &d1);
	printf("значения равны: c = %c, i = %d, f =  %.2f, d = %e\n", c1, i1, f1, d1);
	return 0;
}

int task2a() {
	setlocale(LC_CTYPE, "RUS");
	float x;
	x = 123.456;
	printf("%.f\n", x);
	printf("%.3f\n", x - 123);
}
int task3() {
	setlocale(LC_CTYPE, "RUS");
	int x,a,b;
	float y;
	double z;
	a = 11;
	b = 3;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("x = %d, y = %f, z = %e,", x, y, z);
}
int task4() {
	setlocale(LC_CTYPE, "RUS");
	int n, n1;
	printf("ваше число\n");
	scanf("%d", &n);
	printf("последенее число равно %d\n", n % 10);
	printf("первое число равно %d\n", n/100);
	printf("второе число равно %d\n", (n / 10) % 10);
	n1 = (n % 10) + (n / 100) + ((n / 10) % 10);
	printf("сумма цифр равна %d\n", n1);
	
	
	return 0;
}
int main() {
	task4();
}