// swaping Number
#include<iostream>

using namespace std;

int main(){

  int a,b,c{0};

  cout<<"Enter a 2 Number for A and B "<<endl;
  cout<<"We swap That "<<endl;


  cout<<"Enter a value for A : ";
  cin>>a;

  cout<<endl<<"Enter a value for B : ";
  cin>>a;

  c = b ;
  b = a ;
  a =c ;
  
  cout<<"A : "<<a<<" B : "<<b;


  return 0;



}