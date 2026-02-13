#include <iostream>

using namespace std;

int main()
{

  int a;

  for (int i = 1; i < 5; i++)
  {
    for (int j = 1; j < i; j+i)
    {
      cout << "*" ;
    }
    cout << endl;
  }
}
