#include "header.hpp"

class OBJ {
    public :
        string f_name;
        string l_name;
    OBJ(string f, string l)
    {
        f_name = f;
        l_name = l;
    }
};

int main()
{
    string fname;
    cin >> fname;
    string lname;
    cin >> lname;
    OBJ constr(fname, lname);

print << constr.f_name << nl ;
print << constr.l_name << nl ;

}