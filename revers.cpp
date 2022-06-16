
#include "header.hpp"

void reverse(std::string str)
{
    int len = ft_strlen(str) -1;
    while(str[len])
    {
        std::cout << str[len--];
    }

}