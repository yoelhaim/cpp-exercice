#include "header.hpp"

void cap(std::string str)
{
    int i = 0;
    int s_c = 1;
    while(str[i])
    {
        if((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(s_c && (str[i] >= 'a' && str[i] <= 'z'))
                str[i] = str[i] -= 32;
            else if (!s_c && (str[i] >= 'A' && str[i] <= 'Z'))
                str[i] = str[i] += 32;
            s_c =0;
            
        }
        else
            s_c = 1;
        std::cout << str[i];
        i++;
    }
}