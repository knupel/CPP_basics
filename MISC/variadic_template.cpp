#include <vector>
#include <iostream>
#include <cstdarg>


// RECURSION
/**
* https://thispointer.com/c11-variadic-template-function-tutorial-examples/
*/
// Function that accepts no parameter
// It is to break the recursion chain of variadic template function
// but I don't underwant why it's necessary because the algorithm don't go here
// but without the programm crash
void function_recursive() {
	std::cout << "out" << std::endl;
}
 
/*
 * Variadic Template Function that accepts variable number
 * of arguments of any type.
 */
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
    const int size = sizeof...(args) + 2;
    int res[size] = {1,args...,2};
    // since initializer lists guarantee sequencing, this can be used to
    // call a function on each element of a pack, in order:
    size_t const length = sizeof...(Ts);
    std::cout << "length: " << length << std::endl;
    // int dummy[length] = { (args, 0)... };
    char dummy[length] = { (std::cout << args, '0')... };
    std::cout << "dummy[0]: " << dummy[0] << std::endl;
    std::cout << "dummy[1]: " << dummy[1] << std::endl;
}


// STORE 
// Here we use advanced method for the vector list, we need to indicate to the temple a second argumnt, use to iterating the list.
// https://stackoverflow.com/questions/19094340/stdvector-as-a-template-function-argument
template<class V, typename A, typename... T>
void function_store(std::vector<V,A> &list, T... ts) {
  list.reserve(sizeof...(ts));
  char dummy[] = { (list.push_back(ts), '0')... }; 
}





int main() {
	function_recursive(2, 3.4, "aaa");
  std::cout << "the end" << std::endl;
  function(3,2);

  std::vector<int> v_list;
  function_store(v_list,1,2,3);
  size_t length = v_list.size();
  for(size_t i = 0; i < length ; i++) {
    std::cout << v_list.at(i) << std::endl;
  }
	return 0;
}

