#include <iostream>
#include <map>
#include <vector>

/**
* Sorting map with lambda function
* https://www.techiedelight.com/sort-map-values-cpp/
*/


int main() {
	std::map<std::string, int> list = { 
		{ "A", 10 }, 
		{ "B", 42 },
		{ "C", 62 },
		{ "D", 42 },
		{ "E", 42 }, 
		{ "F", 42 },  
		{ "G", 13 } 
	};

	typedef std::pair<std::string,int> pair;

	// create an empty vector of pairs
	std::vector<pair> list_sorted;

	// copy key-value pairs from the map to the vector
	std::copy(list.begin(), 
						list.end(), 
						std::back_inserter<std::vector<pair>>(list_sorted));

	// sort the vector by increasing order of its pair's second value
	// if second value are equal, order by the pair's first value
	std::sort(list_sorted.begin(), list_sorted.end(),
			[](const pair& elem_1, const pair& elem_2) {
				if(elem_1.second != elem_2.second) {
					return elem_1.second < elem_2.second;
				}
				return elem_1.first < elem_2.first;
			});

	// print the vector
	for (auto const &elem: list_sorted) {
		std::cout << elem.first << ": " << elem.second << std::endl;
	}
}