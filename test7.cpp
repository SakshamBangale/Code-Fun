// Pass by Value

// #include <iostream>
// using namespace std;

// void modify(int a) {
//     a = a + 10;
// }

// int main() {
//     int x = 5;
//     modify(x);
//     cout << x << endl; // Output: 5
//     return 0;
// }



// Pass by Reference

#include <iostream>
using namespace std;

void modify(int &a) {
    a = a + 10;
}

int main() {
    int x = 5;
    modify(x);
    cout << x << endl; // Output: 15
    return 0;
}