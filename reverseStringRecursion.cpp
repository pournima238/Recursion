#include<bits/stdc++.h>
using namespace std;
//point to remember pass string as reference or else it will take pass by value.
void reverseString(string &str, int i, int j){
    cout<<str<<endl;
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverseString(str, i, j);
   
   
}

int main(){
    string str="abcde";
    int i=0;
    int j=str.length()-1;
    reverseString(str, i,j);
    cout<<str<<endl;
}