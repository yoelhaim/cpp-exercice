#ifndef _HEADER_H
#define _HEADER_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <stdlib.h>

using namespace std;

int ft_strlen(std::string str);
void reverse(std::string str);
void cap(std::string str);
int is_prime(int nb);
int ft_atoi(std::string str);

// FG_RED      = 31,
// FG_GREEN    = 32,
// FG_BLUE     = 34,
// FG_DEFAULT  = 39,

// BG_RED      = 41,
// BG_GREEN    = 42,
// BG_BLUE     = 44,
// BG_DEFAULT  = 49
#endif