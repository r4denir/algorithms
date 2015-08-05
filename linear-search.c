#include <stdio.h>
#include <stdlib.h>

/* Linear search */

int search(int *tab, int n) {
	int i=0;

	while(tab[i] != '\0') {
		if(tab[i] == n) {
			return i;
		}
		i++;
	}
	return -1;
}

/* Father node given - find children */

int main() {
	int tab[] = {1,2,3,4,5,6,7};
	int n;
	int index;

	scanf("%d", &n);
	index = search(tab, n);

	//left child
	printf("%d\n", tab[2*index + 1]);
	//right child
	printf("%d\n", tab[2*index + 2]);

	return 0;
}
