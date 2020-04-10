#include <iostream>
#include <cstdarg>
#include <string>

// https://en.cppreference.com/w/cpp/utility/variadic
void print_arg(const char* fmt...) {
	va_list args;
	va_start(args, fmt);
  
	while (*fmt != '\0') {
		if (*fmt == 'i') {
			int i = va_arg(args, int);
			std::cout << i << '\n';
		} else if (*fmt == 'c') {
		// note automatic conversion to integral type
			int c = va_arg(args, int);
			std::cout << static_cast<char>(c) << '\n';
		} else if (*fmt == 'f') {
			double d = va_arg(args, double);
			std::cout << d << '\n';
		}
		++fmt;
	}
	va_end(args);
}
 
int main() {
	// fmt_info describe the sentence of vriatic argument, necessary to chartch it in the method.
	char *fmt_info = "iiiii";
	print_arg(fmt_info,0,1,2,3,10,11,12,13);
	fmt_info = "cc";
	print_arg(fmt_info,0,1,"truc",3,10,11,12,13);
	fmt_info = "icff";
	simple_printf(fmt_info, 3, 'a', 1.999, 42.5); 
}