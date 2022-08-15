#include "serialization.hpp"

int main()
{
	Data_t t;
	Data_t *t_p;

	t.a = 65;
	uintptr_t ptr = serialize(&t);
	cout << "ptr held address :  " << ptr << endl;
	cout << "t_data address   :  " << &t << endl;
	t_p = deserialize(ptr);
	cout << "a value after deserialize : " << t_p->a << endl;

	return (0);
}
	
/*
		Regular Cast : 

	ptr = (uintptr_t)(&t);
	t_p = (Data_t*)(ptr);
	cout << t_p->a << endl;
*/	
// cout << deserialize(serialize(&t))->a << endl;