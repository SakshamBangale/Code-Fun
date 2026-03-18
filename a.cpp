


#include <iostream>
#include <iterator>

#include <iostream>
#include <iterator>

using namespace std;

class Student {

public:
  void print1(int x) {

    for (int i = 0; i <= x; i++) {
      for (int j = 0; j < x; j++)
        cout << "*";
      cout << endl;
    }
  }
void print1(int x) {

    for (int i = 0; i <= x; i++) {
      for (int j = 0; j < x; j++)
        cout << "*";
      cout << endl;
    }
  }
void print1(int x) {

    for (int i = 0; i <= x; i++) {
      for (int j = 0; j < x; j++)
        cout << "*";
      cout << endl;
    }
  }
  void print2(int x) {

    for (int i = 1; i <= x; i++) {
      for (int j = 1; j < i; j++)
        cout << "*";
      cout << endl;
    }
  }
  void print3(int x) {

    for (int i = 1; i <= x; i++) {
      for (int j = 1; j < i; j++)
        cout << j;
      cout << endl;
    }
  }
  void print4(int x) {

    for (int i = 0; i <= x; i++) {
      for (int j = 0; j < i; j++)
        cout << i;
      cout << endl;
    }
  }
  void print5(int x) {

    for (int i = 0; i < x; i++) {
      // cout<<"row";

      for (int j = 0; j < x - i; j++) {
        cout << "*";
        // cout<<"col";
      }

      cout << endl;
    }
  }
  void print6(int x) {

    for (int i = x; i >= 1; i--) {

      for (int j = 1; j <= i; j++)
        cout << j;

      cout << endl;
    }
  }
  //   void print7(int x) {
  //     for (int i = 1; i <= x; i++) {
  //       for (int j = 1; j <= x-i; j++) {
  //          cout << " ";
  //       }
  //       for (int j = 1; j < i*2; j++) {
  //         cout << "*";
  //       }
  //       cout << endl;
  //     }
  //   }

  void print7(int x) {
    for (int i = 1; i <= x; i++) {

      // spaces
      for (int j = 1; j <= x - i; j++) {
        cout << " ";
      }

      // stars
      for (int j = 1; j <= 2 * i - 1; j++) {
        cout << "*";
      }

      cout << endl;
    }
  }
  void print8(int x) {
    for (int i = 1; i <= x; i++) {

        // spaces
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= 2*i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
}
};

int main() {

  Student Stud;

  Stud.print8(6);

  return 0;
}
