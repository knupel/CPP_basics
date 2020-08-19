#include <iostream>
#include <map>
#include <set>

// Comparison function for sorting the set by increasing order of its pair's
// second value. If second value are equal, order by the pair's first value
struct comparator {
	template<typename T>
	bool operator()(const T &elem_1, const T &elem_2) const {
		if (elem_1.second != elem_2.second) {
			return elem_1.second < elem_2.second;
		}
		return elem_1.first < elem_2.first;
	}
};

int main() {
	std::map<std::string, int> list = { 
		{ "A", 10 }, 
		{ "B", 42 },
		{ "C", 62 }, 
		{ "D", 13 } 
	};

	// create an empty vector of pairs
	std::set<std::pair<std::string,int>, comparator> list_sorted(list.begin(), list.end());

	// print the vector
	for (auto const &elem: list_sorted) {
		std::cout << elem.first << ": " << elem.second << std::endl;;
	}
}