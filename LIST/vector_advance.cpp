#include <vector>
#include <iostream>

// STORE 
// Here we use advanced method for the vector list, we need to indicate to the temple a second argumnt, use to iterating the list.
// https://stackoverflow.com/questions/19094340/stdvector-as-a-template-function-argument
template<class V, typename A, typename... T>
void function_store(std::vector<V,A> &list, T... ts) {
  list.reserve(sizeof...(ts));
  char dummy[] = { (list.push_back(ts), '0')... }; 
}


int main() {
  function_store(v_list,1,2,3);
  size_t length = v_list.size();
  for(size_t i = 0; i < length ; i++) {
    std::cout << v_list.at(i) << std::endl;
  }
	return 0;
}

