#include <stdio.h>

void reverse_numbers(int *nmbr1, int *nmbr2)
	{
		int temp = 0;
		temp = *nmbr2;
		*nmbr2 = *nmbr1;
		*nmbr1 = temp;
	}
int main(void)
	{
		int nmbr1 = 26;
		int nmbr2 = 42;

		printf("origin : n1 = %d et n2 = %d\n", nmbr1, nmbr2);
		reverse_numbers(&nmbr1 ,&nmbr2);
		printf("remix : n1 = %d et n2 = %d\n", nmbr1, nmbr2);

		return 0;
	}

