#include <iostream>

using namespace std;

class Solution
{

    int factorial = 1;
    int i{1};

public:
    // FOR LOOP

    int forfact(int x)
    {

        for (; i <= x; i++)
        {
            /* code */
            factorial = factorial * i;
        }
        return factorial;
    }

    int whilefact(int y)
    {
        while (i <= y)
        {
            factorial = factorial * i;
            i--;
        }
        return factorial;
    }
    int dowhilefact(int z){

        do
        {
            factorial = factorial*i;
            i--;
            /* code */
        } while (i<=z);
        return factorial;
    }
};

int main()
{

Solution obj;


cout<<obj.forfact(5);
    return 0;
}