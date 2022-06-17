#include "header.hpp"
#define string std::string
#define cin std::cin
#define print std::cout
#define nl std::endl
class OBJ
{
public:
    string f_name;
    string l_name;
    string number;
    OBJ(string f, string l, string n);
};
OBJ::OBJ(string f, string l, string n)
{
    f_name = f;
    l_name = l;
    number = n;
}
void err_number()
{

    print << "Error allowed this number try again" << nl;
    exit(1);
}
int checknumer(string number)
{

    int i = 0;
    // int len = strlen34(number);
    // if (len < 10 || len > 12)
    //     err_number();
    while (number[i])
    {
        if (number[i] >= '0' && number[i] <= '9')
            i++;
        else
            err_number();
    }
    return (1);
}
int main()
{
    string type;
    cin >> type;
    if (type == "ADD")
    {
        string fname;
        print << "first name : ";
        cin >> fname;
        string lname;
        print << "last name : ";
        cin >> lname;
        print << "number  : ";
        string n;
        cin >> n;
        OBJ constr(fname, lname, n);
        checknumer(n);
        print << "--------------------" << nl;
        print << "first name : " << constr.f_name << nl;
        print << "last name  : " << constr.l_name << nl;
        print << "number     : " << constr.number << nl;
    }

    return 0;
}