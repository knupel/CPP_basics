#include <fmt/core.h>
#include <iostream>

// brew install fmt
// don't compile on mac book pro 2018 
/**
clang++ -std=c++17 library_fmt.cpp && ./a.out
Undefined symbols for architecture x86_64:
  "fmt::v7::detail::vformat(fmt::v7::basic_string_view<char>, fmt::v7::format_args)", referenced from:
      _main in library_fmt-d2a6d5.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/

int main() {
	std::string message = fmt::format("The answer is {}", 42);
}
