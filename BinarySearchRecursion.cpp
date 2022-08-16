#include<bits/stdc++.h>
using namespace std;
bool BinarySearch(int arr[],  int key, int start, int end){
    int mid= start+(end-start)/2;
    if(start>end){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    if(key>mid){
        BinarySearch(arr,key, mid+1, end );

    }else{
        BinarySearch(arr, key,start, mid-1);
    }
    



}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int key=15;
    int start=0;
    int end=5;
    cout<<BinarySearch(arr, key, start, end);
}