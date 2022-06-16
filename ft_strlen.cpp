#include "header.hpp"
int ft_strlen(std::string str)
{
    int i =0;
    while(str[i])
        i++;

return (i);
}