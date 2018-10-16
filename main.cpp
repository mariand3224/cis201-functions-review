/*
 File: Week8
 Description: Functions Review
 Author: Marianna Delrio
 Email: Mariand3224@studnet.vvc.edu
 Date:10/16/18
*/


#include<string>
#include<iostream>


using namespace std;

 
int a(string m ) 
 {  
    int l =0;
    for(int i =0; i < m.length(); i++)
     { 
    if(m.at(i)=='a' || m.at(i)=='A') 
       
     { 
        l++;
     }


     }
            return l; 
 }



int main()
{
    string k = " johny apple seed";
    cout <<a(k)  << endl;

    return 0;
}






