#include<bits/stdc++.h>

using namespace std;


class Solution{

public: 

   bool comparsion(string str1,string str2){

    return str1 == str2;
   }


};


int main(){

    string name,surename;

    Solution obj;

    cout<<"Enter a Name : ";
    cin>>name;

    cout<<"Enter a Surename : ";
    cin>>surename;


    if(1==obj.comparsion(name,surename)) 
     cout<<"name and surename is same ";
    else 
      cout<<"Name and Surname is different "; // in print section we write a entered text is correct 



}