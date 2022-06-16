#include "header.hpp"
int main(int ac , char **av)
{
   if(ac== 1)
   {
       return (std::cout << "error arg", 0);
   }
//    std::cout << ft_strlen(av[1]);
// cap(av[1]);
 int val =is_prime(ft_atoi(av[1]));
 if(val)
    std::cout << "is prime";
else
    std::cout << "not prime";
}