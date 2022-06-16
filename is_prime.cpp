#include "header.hpp"

int is_prime(int nb)
{

    for(int i = 2 ; i < nb ; i++)
    {

        if(nb % i == 0)
            return (0);
    }
    return(1);
}