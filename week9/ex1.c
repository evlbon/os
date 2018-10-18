#include <stdio.h>
#include <stdlib.h>


int p[10],a[10];

int main()
{
	FILE* fp = fopen("1ex.txt", "r");

	int t = 0, n_of_miss = 0, j;
	for (int i = 0; i < 10; i++)
		p[i] = -1;

	

	int fault;
	int elder;

	while (fscanf(fp, "%d", &j) == 1) {
		fault = 1;
		elder = 0;

		for (int i = 0; i < 10; i++) {
			if (p[i] == j) {
				a[i] = (1 << (31 - 1)) & (a[i] >> 1);
				fault = 0;
			} else {
				a[i] = a[i] >> 1;
			}
			if (a[i] < a[elder] || p[i] == -1) 
				elder = i;
		}

		++t;
		if (fault==0) continue;

		++n_of_miss;
		a[elder] = 1 << (31 - 1);
		p[elder] = j;				
	}	 

	
	printf("Frames %d\t \nTotal => %d\t \nHits => %d\t \nMisses => %d\n", 10, t, t - n_of_miss, n_of_miss);
	printf("Hits/Miss => %.2f\n", (double)(t-n_of_miss)/(n_of_miss));
	
	return 0;
}