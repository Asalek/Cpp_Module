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