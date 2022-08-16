#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int arr3[], int m, int n){
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
       arr3[k]=arr1[i];
       i++;
       k++;
        }else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }

    }
    while(i<m){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}

int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    merge(arr1, arr2,arr3,5,3);
    for (int i = 0; i < 8; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
    return 0;
}