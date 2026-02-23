// #include <iostream>

// using namespace std;

// class Solution
// {

//     int factorial = 1;
//     int i{1};

// public:
//     // FOR LOOP

//     int forfact(int x)
//     {

//         for (; i <= x; i++)
//         {
//             /* code */
//             factorial = factorial * i;
//         }
//         return factorial;
//     }

//     int whilefact(int y)
//     {
//         while (i <= y)
//         {
//             factorial = factorial * i;
//             i--;
//         }
//         return factorial;
//     }
//     int dowhilefact(int z){

//         do
//         {
//             factorial = factorial*i;
//             i--;
//             /* code */
//         } while (i<=z);
//         return factorial;
//     }
// };

// int main()
// {

// Solution obj;


// cout<<obj.forfact(5);
//     return 0;
// }




// #include <iostream>
// using namespace std;

// class Solution
// {
// public:

//     // FOR LOOP FACTORIAL
//     int factorialFor(int n)
//     {
//         int fact = 1;

//         for (int i = 1; i <= n; i++)
//         {
//             fact *= i;
//         }

//         return fact;
//     }

//     // WHILE LOOP FACTORIAL
//     int factorialWhile(int n)
//     {
//         int fact = 1;
//         int i = 1;

//         while (i <= n)
//         {
//             fact *= i;
//             i++;
//         }

//         return fact;
//     }

//     // DO-WHILE LOOP FACTORIAL
//     int factorialDoWhile(int n)
//     {
//         int fact = 1;
//         int i = 1;

//         if (n == 0) return 1; // handle 0!

//         do
//         {
//             fact *= i;
//             i++;
//         } while (i <= n);

//         return fact;
//     }
// };

// int main()
// {
//     Solution obj;

//     cout << "For Loop: " << obj.factorialFor(5) << endl;
//     cout << "While Loop: " << obj.factorialWhile(5) << endl;
//     cout << "Do While Loop: " << obj.factorialDoWhile(5) << endl;

//     return 0;
// }
