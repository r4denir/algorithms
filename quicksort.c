#include <stdio.h>

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void quicksort(int *tab, int u, int o) {
	int p = o;
	int pn;

	if(o > u) {
		pn = partition(tab, u, o, p);
		quicksort(tab, u, pn-1);
		quicksort(tab, pn+1, o);
	}
}

int partition(int *tab, int u, int o, int p) {
	int i;
	int pn = u;
	int pv = tab[p];
	swap(&tab[p], &tab[o]);

	for(i=u; i<o; i++) {
		if(tab[i] <= pv) {
			swap(&tab[pn], &tab[i]);
			pn++;
		}
	}
	swap(&tab[pn], &tab[o]);
	return pn;
}

int main() {
	int i;
	int tab[10] = {4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
	quicksort(tab,0,9);

	int n = sizeof tab / sizeof tab[0];

	for(i=0; i<n; i++) {
		printf("%d ", tab[i]);
	}
	
	return 0;
}
