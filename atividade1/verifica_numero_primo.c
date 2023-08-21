#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, d, Primo;		
    n= atoi(argv[1]);

    d = 2;
    Primo = 1;

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