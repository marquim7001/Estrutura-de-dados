#include <stdio.h>

int main()
{
    int n, d, Primo;		

    d = 2;
    Primo = 1;

    printf("Forneca um numero inteiro: ");
    scanf("%d", &n);

    if (n <= 1)
	Primo = 0;

    while (Primo == 1 && d <= n / 2) {
	if (n % d  == 0)
	    Primo = 0;
	d = d + 1;
    }

    if (Primo == 1)
	printf("1 \n");
    else
	printf("0\n");

    return 0;
}