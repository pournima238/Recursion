#include<bits/stdc++.h>
using namespace std;
bool LinearSearch(int arr[], int size, int key){
    if(size==0)
    {return false;}
    if(arr[0]==key){
        return true;
    }
    bool ans=LinearSearch(arr+1, size-1, key);
    return ans;



}
int main(){
int arr[]={1,2,3,4,5,6,7,8};
int size=8;
int key=9;
cout<<LinearSearch(arr, size, key);

}