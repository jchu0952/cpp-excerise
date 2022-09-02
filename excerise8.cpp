//  excerise8

#include <iostream>
using namespace std;

int main()
{
    int i;
    int odd = 0;
    int even = 0;
    int number[] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (i=0; i<=10;i++)
    {
        if(number[i]%2==0)
        {
            even = even + 1;
            
        }
        else
        {
            odd = odd + 1;
        }
    }
    cout << "Number of even numbers : "<< even;
    cout << endl;
    cout << "Number of odd numbers : " << odd;
    cout << endl;
    return 0;
}
