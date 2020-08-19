#include <iostream>
#include <map>
#include <set>
/**
* Sorting map with lambda function
* https://thispointer.com/how-to-sort-a-map-by-value-in-c/
*/
void sort_different();
void sort_all();

int main() {
	std::cout << "different" << std::endl;
	sort_different();
	std::cout << "\nall" << std::endl;
	sort_all();
	
}

void sort_different() {
	std::map<std::string, int> list = { 
		{ "A", 10 }, 
		{ "B", 42 },
		{ "C", 62 },
		{ "D", 42 },
		{ "E", 42 }, 
		{ "F", 42 },  
		{ "G", 13 } 
	};
	// Declaring the type of Predicate that accepts 2 pairs and return a bool
	typedef std::function<bool(std::pair<std::string, int>, std::pair<std::string, int>)> Comparator;

	// Defining a lambda function to compare two pairs. It will compare two pairs using second field
	Comparator compare_function = [](	std::pair<std::string, int> elem_1,
																		std::pair<std::string, int> elem_2) {
		// the different sorting is here
		return elem_1.second < elem_2.second;
	};

	// Declaring a set that will store the pairs using above comparision logic
	std::set<std::pair<std::string, int>, Comparator> list_sorted(list.begin(), list.end(), compare_function);

	// Iterate over a set using range base for loop
	// It will display the items in sorted order of values
	for(std::pair<std::string, int> elem : list_sorted) {
		std::cout << elem.first << ": " << elem.second << std::endl;
	}
}



void sort_all() {
	std::map<std::string, int> list = { 
		{ "A", 10 }, 
		{ "B", 42 },
		{ "C", 62 },
		{ "D", 42 },
		{ "E", 42 }, 
		{ "F", 42 },  
		{ "G", 13 } 
	};

	typedef std::function<bool(std::pair<std::string, int>, std::pair<std::string, int>)> Comparator;
	Comparator compare_function = [](	std::pair<std::string, int> elem_1,
																		std::pair<std::string, int> elem_2) {
		// the different sorting is here
		if(elem_1.second != elem_2.second) {
			return elem_1.second < elem_2.second;
		}
		return elem_1.first < elem_2.first;
	};

	std::set<std::pair<std::string, int>, Comparator> list_sorted(list.begin(), list.end(), compare_function);
	for(std::pair<std::string, int> elem : list_sorted) {
		std::cout << elem.first << ": " << elem.second << std::endl;
	}

}

