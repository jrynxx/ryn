#include <iostream>

using namespace std;

string test()
{
    return "abc";
}
int add(int x, int y)
{
    return x + y;
}
int subtract(int x, int y)
{
    return x - y;
}
int multiply(int x, int y)
{
    return x * y;
}
int divide(int x, int y)
{
    return x / y;
}
int main()
{
    int erika;
    int makoto;
    cout << "Enter erika: ";
    cin >> erika;
    cout << "Enter makoto: ";
    cin >> makoto;
    cout << "Enter operation: ";
    string ryn;
    cin >> ryn;
    if (ryn == "+")
    {
        cout << add(erika, makoto);
    }
    else if (ryn == "-")
    {
        cout << subtract(erika, makoto);
    }
    else if (ryn == "*")
    {
        cout << multiply(erika, makoto);
    }
    else if (ryn == "/")
    {
        cout << divide(erika, makoto);
    }
}