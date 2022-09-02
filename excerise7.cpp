//  excerise7
#include <iostream>
using namespace std;

int main()
{
    int input_number, a;
    cout <<"input a number :";
    cin >> input_number;
    a = input_number;
    int b;//1000
    b= a/1000;
    a= a-b*1000;
    int c;//500
    c=a/500;
    a=a-c*500;
    int d;//100
    d=a/100;
    a=a-d*100;
    int e;//50
    e=a/50;
    a=a-e*50;
    int f;//10
    f=a/10;
    a=a-f*10;
    int g;//5
    g=a/5;
    a=a-g*5;
    int h;//1
    h=a/1;
    a=a-h*1;
    cout << "1000:" << b <<", 500:" << c<< ", 100:" << d << ", 50:" << e<< ", 10:"<< f <<", 5:" << g << ", 1:" << h<< endl;
    return 0;
}
