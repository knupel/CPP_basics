#include <iostream>
#include <cstdio>

int const NUM = 10;

void init_a(int *tab) {
	for(int i = 0; i < NUM ; i++) {
		tab[i] = rand()%256;
	}
}

void init_b(int tab[]) {
	for(int i = 0; i < NUM ; i++) {
		tab[i] = rand()%256;
	}
}

/*
void init_c(int tab[5]) {
	for(int i = 0; i < 5 ; i++) {
		tab[i] = 0;
	}
}
*/
void init_c(int tab[2]) {
	// int len = sizeof(tab) / sizeof(tab[0]);
	int len = sizeof(tab);
	printf("\ntab len: %i\n", len);
	for(int i = 0; i < len ; i++) {
		tab[i] = 0;
	}
}

void display(int tab[NUM]) {
	for(int i = 0; i < NUM ; i++) {
		printf("tab[%d]=%d\n",i,tab[i]);
	}
}

int main(void) {
	int t[20] = {0};
	display(t);
	init_a(t);
	printf("\n");
	display(t);
	init_b(t);
	printf("\n");
	display(t);
	init_c(t);
	printf("\n");
	display(t);
	return (0);
}



