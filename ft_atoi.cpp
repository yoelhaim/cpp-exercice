#include "header.hpp"
int ft_atoi(std::string str)
{
     int sign =1, res=0, i;
    for(i =0;str[i] == 32 && (str[i] >= 9 && str[i] <= 13);i++){}
    if(str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    if(str[i] == '+')
        i++;
    for(int j =i; str[j] && (str[j] >= '0' && str[j] <= '9');j++)
    {
        res *=10;
        res += str[j]  - 48;
        
    }
    return (res * sign);
}