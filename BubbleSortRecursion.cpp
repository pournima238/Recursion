#include<bits/stdc++.h>
using namespace std;
void sortarr(int *arr, int size){
if(size==0 || size==1){
    return;
}
for (int i = 0; i < size-1; i++)
{
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
}
sortarr(arr,size-1);

}
int main(){
    int arr[]={4,6,3,5,1};
    int size=5;
    sortarr(arr,size);
    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i]<<endl;
    }
    
}