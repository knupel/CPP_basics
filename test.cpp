#include <cstdio>
int main() {
	int a = 1;
	int b = a;
	printf("%p\n",&a);
	printf("%p\n",&b);
	return(0);
}