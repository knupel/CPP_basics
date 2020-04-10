#include <iostream>
#include <vector>

template<class T>
T max(std::vector<T> v_list) {
	return *std::max_element(v_list.begin(), v_list.end());
}

template<class T>
T min(std::vector<T> v_list) {
	return *std::min_element(v_list.begin(), v_list.end());
}


// c++11
// more exemple on this link
// https://en.cppreference.com/w/cpp/algorithm/minmax
template<class T>
std::pair<T,T> minmax(std::vector<T> v_list) {
	auto p = std::minmax_element(v_list.begin(), v_list.end());
	return std::make_pair(*p.first, *p.second);
}


// c++11
int main() {
	std::vector<int> v;
	v.push_back(3);
	v.push_back(2);
	v.push_back(13);
	v.push_back(-1);

	std::cout << min(v) << std::endl;
	std::cout << max(v) << std::endl;

	std::pair<int,int> p = minmax(v);
	std::cout << p.first << " | " << p.second << std::endl;
	return(0);
}