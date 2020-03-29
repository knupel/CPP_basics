#include <cstdio>
// clang++ -std=c++11 main.cpp -Wconversion && ./a.out
// you can use the flag -Wconversion to receive a warning about implicit conversion.
int main() {
	printf("step 0\n");
	float f = 42.042f;
	void *v_imp = &f; // promotion
	void *v_exp = (void*) &f; // promotion
	printf("ptr: %p > float f: %f\n", &f, f);
	printf("ptr: %p > void v_imp\n", v_imp);
	printf("ptr: %p > void v_exp\n", v_exp);
	printf("step 1\n");
	int *i_imp = v_imp; // not possible need an explicit cast
	int *i_exp = (int*)v_imp; // explicit demotion from void address implicit cast from float
	// printf("ptr: %p > int *i_imp: %i\n", i_imp, *i_imp);
	printf("ptr: %p > int *i_exp: %i\n", i_exp, *i_exp); // very bad idea because the float and the int bit field is totally different.
	return(1);
}