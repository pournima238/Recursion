#include<bits/stdc++.h>
using namespace std;
int Sum(int arr[], int size){
  //base case
    if(size==0)
    {return 0;}
    //recurrence relation
    int sum=arr[0]+Sum(arr+1, size-1); 

    return sum;


}
   
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    cout<<"sum is"<<Sum(arr, size);
}