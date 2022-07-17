

#include <iostream>


int main(int argc, char *argv[])
{
    int x;

    x = 1;
    if (argc < 2)
    {
       std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
       return (0);
    }
    while (argv[x] != NULL)
    {
        for (int i = 0; argv[x][i]; i++)
            std::cout<<(char)toupper(argv[x][i]);
        x++;
        std::cout<<std::endl;
    }
    return 0;
}
