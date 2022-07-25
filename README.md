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

</hr>

<strong> C++ - Module 06: This Module is designed to help you understand the different casts in CPP.</strong>
### CPP06

</hr>

<strong> C++ - Module 07: This Module is designed to help you understand Templates in CPP.</strong>
### CPP07

</hr>

<strong> C++ - Module 08: This Module is designed to help you understand templated containers, iterators and algorithms in CPP.</strong>
### CPP08

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

## Protected

Protected is similar to private, the difference is that the class member declared as Protected are inaccessible outside the class but they can be accessed by any subclass(derived class) of that class.

<strong>Exemple:</strong><a href="https://www.geeksforgeeks.org/public-vs-protected-in-c-with-examples/">Click_me</a>


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
