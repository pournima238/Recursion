//recursive approach

#include<bits/stdc++.h>
using namespace std;
void sayDigits(int number){
    if(number==0){
        return;
    }
   int digit=number%10;
   number=number/10;
   sayDigits(number);
   cout<<digit<<" ";
  
   

}

int main(){
    int number;
    cin>>number;
    sayDigits(number);
}