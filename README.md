# CPP Tutorial :
this is the 42 pool Cpp.
### roadMap :

<strong> C++ - Module 00: This Module is designed to help you understand the specifities of the language when compared to C.</strong>
### CPP00
* ex00 : Megaphone
* ex01 : My Awesome PhoneBook
* ex02 : The Job Of Your Dreams

<hr>

<strong> C++ - Module 01: This Module is designed to help you understand the memory allocation, reference, pointers to members and the usage of the switch in CPP.</strong>
### CPP01
* ex00 : BraiiiiiiinnnzzzZ
* ex01 : Moar brainz!
* ex02 : HI THIS IS BRAIN
* ex03 : Unnecessary violence
* ex04 : Sed is for losers
* ex05 :  Harl 2.0
* ex06 : Harl filter

<hr>

<strong> C++ - Module 02: This Module is designed to help you understand Ad-hoc polymorphism, overloads and orthodox canonical classes in CPP.</strong>
### CPP02
* ex00 : My First Class in Orthodox Canonical Form
* ex01 : Towards a more useful fixed-point number class
* ex02 : Now we’re talking
* ex03 : Unnecessary violence
* ex04 : BSP

<hr>

<strong> C++ - Module 03: This Module is designed to help you understand Inheritance in CPP.</strong>
### CPP03
* ex00 : Aaaaand... OPEN!
* ex01 : Serena, my love!
* ex02 : Repetitive work
* ex03 : Now it’s weird!

<hr>

<strong> C++ - Module 04: this Module is designed to help you understand Subtype polymorphism, abstract classes and interfaces in CPP.</strong>
### CPP04
* ex00 :  Polymorphism
* ex01 : I don’t want to set the world on fire
* ex02 : Abstract class
* ex03 : Interface & recap

<hr>

<strong> C++ - Module 05: This Module is designed to help you understand Try/Catch and Exceptions in CPP.</strong>
### CPP05
* ex00 :  Try & Catch excepiton
* ex01 : Inheret from Execption Class
* ex02 : Put All To gether
* ex03 : Froms Creator

</hr>

<strong> C++ - Module 06: This Module is designed to help you understand the different casts in CPP.</strong>
### CPP06
* ex00 :  Static_cast
* ex01 : reinterpret_cast
* ex02 : Dynamic_cast
</hr>

<strong> C++ - Module 07: This Module is designed to help you understand Templates in CPP.</strong>
### CPP07
* ex00 :  Templates
* ex01 : Templates with functions
* ex02 : Templates With Classes
</hr>

<strong> C++ - Module 08: This Module is designed to help you understand templated containers, iterators and algorithms in CPP.</strong>
### CPP08
* ex00 :  Easy Find
* ex01 : Span
* ex02 : MutantStack

<i>for the <strong> Mutant_Stack </strong> i put a question on stackoverflow and i respond it when i've found the solution, check the link : </i>
	https://stackoverflow.com/questions/73440733/how-can-i-implement-my-own-stack-iterator-in-c/73441074#73441074
</hr>

## Protected

Protected is similar to private, the difference is that the class member declared as Protected are inaccessible outside the class but they can be accessed by any subclass(derived class) of that class.

<strong>Exemple:</strong><a href="https://www.geeksforgeeks.org/public-vs-protected-in-c-with-examples/">Click_me</a>

## Copy Constructor :

Copy constructor takes a reference to an object of the same class as an argument and copying it in an already existing object :

```
class A{
	int	num;
	public:
		A();			//Default constructor
		~A();			//Destructor
		A (const A &a);	//Copy constructor				<-------
}

A::A(const A &a)
{
	*this = a;
}
```

## Copy assignment operator :

The copy assignment operator lets you create a new object from an existing one by initialization and return it :

```
class A{
	int	num;
	public:
		A();			//Default constructor
		~A();			//Destructor
		A &operator=(const A &a);	//Copy Assignment operator				<-------
}

A &A::operator(const A &a)
{
	if (this == &a)				//Self guard
		return (*this);
	this->num = a.num;
	return (*this);
}
```

## Typename

The keyword typename was introduced to specify that the identifier that follows is a type. Consider the following example:

```
template <class T>
Class MyClass
{
  typename T::aType *ptr;
  ...
};
```
Here, typename is used to clarify that aType is a type of class T. Thus, ptr is a pointer to the type T::aType. Without typename, aType would be considered a static member. Thus would be a multiplication of value SubType of type T with ptr :

```
T::aType x ptr;  //  aType multiply ptr
```

## Try And Catch
```
try{
	...
}
catch (int sd)
{
	....
}
catch(const char * execption)
{
	...
}
catch(...)   //catch any exception
{
	cout<<"assfaf";
}
```
## Orthodox Canonical Form :

The Orthodox Canonical Form Class it's a class that must contains :

- Default Constructor
- Copy Constructor
- Copy assignment operator
- Destructor

## Name Spaces :

name Spaces fix the double naming issue as bellow :

```
namespace namespace1{
	int	age = 12;
}

namespace namespace2{
	int age = 13;
}
```

## Virtual functions
virtual function let you arrived it and redefine it as you wan't

```
virtual void func1(){
	std::cout << Hi There;
}
```
## Pure Virtual Function
any class that inheret from base class will have to provide it's own implimentation to the inhereted function

```
class a{
	public:
		virtual void func1() = 0;
}
```
*func1 force every derived class to implement her own func1() function*

## Abstract Class

the abstract class it's a class that have at least one Pure virtual Function
```
class Name{
	protected:
		string a = "ayoub";
	public:
		Name(){};
		~Name(){};
		virtual void func1() = 0;
}

class nickName: public Name{
	void	func1()
	{
		std::cout<<"Hello There";
	}
}

int main()
{
	Name name;    // this will throw error cause it's an abstract class

	Name *n = new nickName();  //this work just fine cause you arrived the func1()
}
```

## STL Custom Allocators 

```
using std::cout;		//using it now to save time later
using std::endl;
using std::allocator;

template<typename type>
struct MyAlloc : allocator<type>			// creating a struct and inheret an allocator
{
	type	*allocate(size_t size)
	{
		cout << "Allocation size ==> " << size << endl;
		return new type[size];
	}
	void	deallocate(type *ptr, size_t size)
	{
		cout << "Deallocating size ==> "<< size << endl;
		delete [] ptr;
	}
};

int main(){
	vector<int, MyAlloc<int> >v1;

	v1.push_back(1); // Allocation size ==> 1
	v1.push_back(2); // Allocation size ==> 2 // Deallocating size ==> 1
	v1.puds_back(3); // Allocation size ==> 4 // Deallocating size ==> 2
	return 0; 		// Deallocating size ==> 4
}

vector<int, MyAlloc<int> >v1; // this implementation is similar to vector<int> v1. the only difference is that :
when not specify the allocator the default one (allocator) been called like this :
vector<int, allocator<int> > v1;
```

## More Ressources

* [C++ Tutorial for Beginners - Full Course](https://www.youtube.com/watch?v=vLnPwxZdW4Y&ab_channel=freeCodeCamp.org)
* [Constructors in C++](https://www.geeksforgeeks.org/constructors-c/)
* [Constructor Overloading in C++](https://www.geeksforgeeks.org/constructor-overloading-c/)
* [Copy Constructor in C++](https://www.geeksforgeeks.org/copy-constructor-in-cpp/)
* [Destructors in C++](https://www.geeksforgeeks.org/destructors-c/)
* [Pointers vs References in C++](https://www.geeksforgeeks.org/pointers-vs-references-cpp/)
* [Operator Overloading in C++](https://www.geeksforgeeks.org/operator-overloading-c/)
* [OPERATORS and OPERATOR OVERLOADING in C++](https://www.youtube.com/watch?v=mS9755gF66w&ab_channel=TheCherno)
* [C++ Operator Overloading beginner to advanced (in-depth explanation)](https://www.youtube.com/watch?v=BnMnozsSPmw&ab_channel=CodeBeauty)
* [Find a Fixed Point (Value equal to index) in a given array](https://www.geeksforgeeks.org/find-a-fixed-point-in-a-given-array/)
* [Const member functions in C++](https://www.geeksforgeeks.org/const-member-functions-c/)
* [Increment (++) and Decrement (–) operator overloading in C++](https://www.geeksforgeeks.org/increment-and-decrement-operator-overloading-in-c/)
* [Static Keyword in C++](https://www.geeksforgeeks.org/static-keyword-cpp/)
* [stringstream in C++ and its applications](https://www.geeksforgeeks.org/stringstream-c-applications/)
* [Multiple Inheritance in C++](https://www.geeksforgeeks.org/multiple-inheritance-in-c/)
* [Virtual Function in C++](https://www.geeksforgeeks.org/virtual-function-cpp/)
* [Polymorphism in C++](https://www.geeksforgeeks.org/polymorphism-in-c/)
* [Exception Handling in C++](https://www.geeksforgeeks.org/exception-handling-c/)
* [How to access private/protected method outside a class in C++](https://www.geeksforgeeks.org/how-to-access-private-protected-method-outside-a-class-in-c/)
* [rand() and srand() in C/C++](https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/)
* [Converting Strings to Numbers in C/C++](https://www.geeksforgeeks.org/converting-strings-numbers-cc/)
* [Type Conversion in C++](https://www.geeksforgeeks.org/type-conversion-in-c/)
* [Templates in C++ (article)](https://www.geeksforgeeks.org/templates-cpp/)
* [Templates in C++ (Video)](https://www.youtube.com/watch?v=I-hZkUa9mIs&ab_channel=TheCherno)
* [Casting in C++](https://www.youtube.com/watch?v=pWZS1MtxI-A&ab_channel=TheCherno)
* [C++ Type Casting Playlist](https://www.youtube.com/playlist?list=PL1w8k37X_6L-KS5DQt7U0rCtgIgdIadWz)
* [Polymorphism In C++ | Static & Dynamic Binding](https://www.youtube.com/watch?v=mv5_l4kuVho&ab_channel=CppNuts)
* [Containers in C++ STL (Standard Template Library)](https://www.geeksforgeeks.org/containers-cpp-stl)
* [Vector in C++ STL](https://www.geeksforgeeks.org/vector-in-cpp-stl/)
* [STL Custom Allocators for C++](https://www.youtube.com/watch?v=v-qePUHf8iU&ab_channel=AnInsightfulTechie)