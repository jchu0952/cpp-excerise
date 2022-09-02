//excerise 6

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "input a number : ";
    cin >> a;
    if (100>=a&&a>=80)
    {
        cout << "A" << endl;
    }else if (80>a&&a>= 60)
    {
        cout << "B" << endl;
    }else if (60>a&&a>=40)
    {
        cout << "C" << endl;
    }else if (40>a&&a>=20)
    {
        cout << "D" << endl;
    }else if (20>a&&a>=0)
    {
        cout << "F" <<endl;
    }else
    {
        cout << "Your number is not in 0-100\n";
    }
    return 0;
}
