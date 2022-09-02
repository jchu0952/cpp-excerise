#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int i;
    string month[12] = {January, February, March, April, May, June, July, August, September, October, November, December};
    string day[12] = {31, 28/29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (i=0;i<=12;i++)
    {
        cout <<  day[i]<<endl;
    }
    return 0;
}