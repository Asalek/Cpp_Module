#include "easyfind.hpp"

int main()
{
	// std::vector<int> numb;
	// vector<int> numb {1, 2, 3, 4, 5, 6, 5, 7, 9};  not working 
	// vector<int> numb(3, 10);  //Create a vector of size n with all values 10
	
	
	int arr[] = {0, 1, 2, 3, 4 ,5 ,6, 7, 8, 9};
	int n = (sizeof(arr) / sizeof(arr[0]));

	vector<int> numb(arr, arr + n);
	// list<int> numb(arr, arr + n);

	numb.push_back(1337);

	easyfind(numb, 1337);
	numb.clear();
}


/*
			---LIST---
	front, back, empty, size, max_size, insert, emplace, push_back, 
	pop_back, push_front, resize, remove_if, remove, unique, merge, 
	pop_front, sort, reverse, clear, oprator= ...



	splice : append but in front or back.
		ex__ list1.splice(list1.begin(), list2);

	oprator= : list1 = list2;

	unique: remove duplecate
		ex__ list1.unique();
*/