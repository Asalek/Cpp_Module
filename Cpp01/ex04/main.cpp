#include "replace.hpp"

int main(int ac, char **av)
{
	ifstream	myFile;
	string		tp;
	int			x;
	string		fileName;

	if (ac > 4 || ac < 4)
		return (cout<<"Only three argument !"<<endl, 0);
	fileName = (av[1]);
	fileName.append(".replace");
	myFile.open(av[1]);
	if (!myFile.is_open())
		return (cout<<"Error while opening file : "<<av[1]<<endl, 0);
	ofstream	file(fileName);
	while (getline(myFile, tp))
	{
		x = tp.find(av[2]);
		while (x != -1)
		{
			tp.erase(x, strlen(av[2]));
			tp.insert(x, av[3]);
			x = tp.find(av[2]);
		}
		file << tp << endl;
	}
	myFile.close();
}
