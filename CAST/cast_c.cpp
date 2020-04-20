#include <cstdio>
// clang++ -std=c++11 main.cpp -Wconversion && ./a.out
// you can use the flag -Wconversion to receive a warning about implicit conversion.
int main() {
	int i = 42;
	float f_imp = i; // promotion: implicit cast
	float f_exp = (int)i; // promotion: explicit cast
	printf("int i: %i | float f_imp: %f | float f_exp: %f",i,f_imp,f_exp);
	printf("\n");
	float f = 42.0424242;
	int i_imp = f; // demotion: implicit cast
	int i_exp = (int)f; // demotion: explicit cast
	printf("float f: %f | int i_imp: %i | int i_exp: %i",f,i_imp,i_exp);

	printf("\n");
	double d = 42.0424242;
	f_imp = d; // demotion: implicit cast
	f_exp = (float)d; // demotion: explicit cast
	printf("double d: %f | float f_imp: %f | float f_exp: %f",d,f_imp,f_exp);

	printf("\n");
	i_imp = d; // demotion: implicit cast
	i_exp = (int)d; // demotion: explicit cast
	printf("double d: %f | int i_imp: %i | int i_exp: %i",d,i_imp,i_exp);
	return(1);
}