#include <iostream>
#include "Array.hpp"


#define MAX_VAL 750
int main(int, char**)
{

	// MY Beutiful main :

	Array<string> a(5);
	a[0] = "ayoub";
	a[1] = "salek";
	a[2] = "1337";
	a[3] = "junior";
	a[4] = "developer";
	Array<string> b = a;
	for (size_t i = 0; i < 5; i++)
	{
		cout << "a" << a[i] << endl;
		cout << "b" << b[i] << endl;
	}
	for (size_t i = 0; i < 5; i++)
	{
		a[i] = "100%";
	}
	for (size_t i = 0; i < 5; i++)
	{
		cout << "a" << a[i] << endl;
		cout << "b" << b[i] << endl;
	}
	
	//Intra  Cpp07 main

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}