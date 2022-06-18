#include "header.hpp"

#define string std::string
#define cin std::cin
#define print std::cout
#define nl std::endl
class OBJ
{
public:
    string f_name; // first name
    string l_name; // last name
    string number; // number phone
    OBJ(string f, string l, string n);
};
OBJ::OBJ(string f, string l, string n)
{
    f_name = f; // add value to first name
    l_name = l; // add value to last name
    number = n; // add value to number phone
}
int err_number()
{

    print << "\x1B[31m"
          << "Error allowed this number try again"
          << "\x1B[32m" << nl;
    exit(1);
    // return 0;
}
int checknumer(string number)
{

    int i = 0;
    int len = number.length();
    if (len < 10 || len > 15)
        err_number();
    while (number[i])
    {
        if (number[i] >= '0' && number[i] <= '9')
            i++;
        else
            err_number();
    }
    return (1);
}
void add_contact(string f, string l, string n)
{
    char arr[10];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = '\0';
}
int main()
{
    while (1)
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
            add_contact(constr.f_name, constr.l_name, constr.number);
            print << "\x1B[32m"
                  << "-------- successfully add contact ! -------"
                  << "\x1B[0m" << nl;
            print << "first name : " << constr.f_name << nl;
            print << "last name  : " << constr.l_name << nl;
            print << "number     : " << constr.number << nl;
        }
        else if (type == "EXIT")
            exit(1);
        else if (type == "SEARCH")
        {
            print << "type f  or l name  Or nickname" << nl;
            string sr;
            cin >> sr;
            print << sr << nl;
        }
        else
        {

            print << "\x1B[41m"
                  << "Error " << type << " commond not found try again !"
                  << "\x1B[0m" << nl;
        }
    }

    return 0;
}