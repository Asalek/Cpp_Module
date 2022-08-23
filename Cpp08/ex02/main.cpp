#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	// LIST TEST :::
	// std::cout<<"------------------------------------------------" << std::endl;

	// list<int> msstackList;
	// msstackList.push_back(5);
	// msstackList.push_back(17);
	// std::cout << msstackList.front() << std::endl;
	// msstackList.pop_front();
	// std::cout << msstackList.size() << std::endl;
	// msstackList.push_back(3);
	// msstackList.push_back(5);
	// msstackList.push_back(737);
	// //[...]
	// msstackList.push_back(0);
	// list<int>::iterator itt = msstackList.begin();
	// list<int>::iterator itte = msstackList.end();
	// ++itt;
	// --itt;
	// while (itt != itte)
	// {
	// std::cout << *itt << std::endl;
	// ++itt;
	// }
	// std::list<int> ss(msstackList);

	return 0;
}

