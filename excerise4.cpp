//excerise 4
#include <iostream>
using namespace std;

int main()
{
  int i;
  float F, c;
  for(i=0;i<=50;i++)
  {
      cout <<"*";
  }
  cout << endl;
  cout << "Temperature Converter\n";
  cout << endl;
  cout << "This program will convert Fahrenheit to Celsius\n\n\n\n";
  cout << "Please enter the Fahrenheit value that you wish to convert: ";
  cin >> F;
  c=(F-32)*5/9;
  cout << endl;
  cout << F <<" degrees Fahrenheit is equal to "<< c <<" degree Celsius.\n";
  for(i=0;i<=70;i++)
  {
     cout <<"*";
 }
    cout << endl;
  return 0;
}
