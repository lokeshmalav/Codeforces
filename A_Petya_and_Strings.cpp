#include <iostream>
 using namespace std;
int main (){
    string s1;
    string s2; 
     cin>>s1;
     cin>>s2;
     for(int i=0; i<s1.length(); i++){
         s1[i] = tolower(s1[i]);    //  to convert all char to lowercase in both strings
         s2[i] = tolower(s2[i]);
     }
     if(s1>s2){
        cout<<"1";
     }
     else if(s2>s1){
        cout<<"-1";
     }
     else{
        cout<<"0";
     }

     return 0;

}