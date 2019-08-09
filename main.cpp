#include <iostream>
#include <string>

using namespace sdt;

void pint_str(string str);

int main()
{
    print("Hello, World!");
    cout << '\n';

    return 0;
}

void pint_str(string str)
{
    cout << str;
}