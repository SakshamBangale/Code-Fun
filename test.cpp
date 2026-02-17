#include <iostream>

using namespace std;

class Solution
{

public:
  int findlength(string s)
  {
    return s.length();
  }
};

int main()
{

  Solution obj;

  string s = "hello i am saksham";

  // cout << obj.findlength(s) << endl;

  for (int i = 0; i < obj.findlength(s); i++)
  {
    /* code */

    // " " == s[i]; hello i am saksham
    string a = " ";
  
    if (s[i] == a[0])
    {
      cout<<endl;
    }
    else
    {
      cout << s[i];
    }

   
  }

  return 0;
}
