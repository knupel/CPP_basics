#include <vector>
#include <iostream>
#include <cstdarg>


// RECURSION
/**
 * Variadic Template Function that accepts variable number
 * of arguments of any type.
* https://thispointer.com/c11-variadic-template-function-tutorial-examples/
*/
// Function that accepts no parameter
// It is to break the recursion chain of variadic template function
// but I don't underwant why it's necessary because the algorithm don't go here
// but without the programm crash
void function_recursive() {
	std::cout << "out" << std::endl;
}
 
template<typename T, typename ... Args>
void function_recursive(T first, Args ... args) {
	size_t const length = sizeof...(Args);
	std::cout<<first<<" , ";
	// recursion and option to stop it.
	if(length > 0) {
		std::cout << "in length: " << length << std::endl;
		function_recursive(args ...);
	}
}
 


// OFFICIAL
// https://en.cppreference.com/w/cpp/utility/variadic
template<typename... Ts> 
void function(Ts... args){
  // since initializer lists guarantee sequencing, this can be used to
  // call a function on each element of a pack, in order:
  size_t const length = sizeof...(Ts);
  std::cout << "length: " << length << std::endl;
  char dummy[length] = { (std::cout << args << " | ", '0')... };
}


template<typename... T> 
void function_by_ref(T &... args) {
  // since initializer lists guarantee sequencing, this can be used to
  // call a function on each element of a pack, in order:
  size_t const length = sizeof...(T);
  std::cout << "length: " << length << std::endl;
  char dummy[length] = { (std::cout << args << " | ", '0')... };
}

// STORE 
// Here we use advanced method for the vector list, we need to indicate to the temple a second argumnt, use to iterating the list.
// https://stackoverflow.com/questions/19094340/stdvector-as-a-template-function-argument
template<class V, typename A, typename... T>
void function_store(std::vector<V,A> &list, T ... ts) {
  list.reserve(sizeof...(ts));
  char dummy[] = { (list.push_back(ts), '0')... }; 
}





int main() {
  printf("\nfunction_recursive()\n");
	function_recursive(2, 3.4, "aaa");
  std::cout << "the end" << std::endl;
  
  printf("\nfunction()\n");
  int a = 3;
  int b = 2;
  function(a,b);

  printf("\n\nfunction_by_ref()\n");
  function_by_ref(a,b);

  printf("\n\nfunction_store()\n");
  std::vector<int> v_list;
  function_store(v_list,1,2,3);
  size_t length = v_list.size();
  for(size_t i = 0; i < length ; i++) {
    std::cout << v_list.at(i) << std::endl;
  }
	return 0;
}

