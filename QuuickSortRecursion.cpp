#include<bits/stdc++.h>
using namespace std;
int partitionA(int arr[], int s, int e){

    int pivot=s;
    int count=0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<arr[pivot]){
            count++;
        }
    }
    int newPivot=s+count;
    swap(arr[pivot], arr[newPivot]);

    //after placing pivot in right place now we will make sure left part
    //has less numbers and right part has greater numbers

    int i=s;
    int j=e;
    while(i<newPivot && newPivot<j){
        while(arr[i]<arr[newPivot]){
            i++;
        }
        while(arr[j]>arr[newPivot]){
            j--;

        }
        if(i<newPivot && j>newPivot){
            swap(arr[i], arr[j]);
        }
    }
    return newPivot;
    

}

void quickSortA(int arr[], int s, int e){
    //base case
    if(s>=e){
        return ;
    }


    //to place pivot in perfect place with partition.
    int p= partitionA(arr, s, e);


    //the partions done have to be again sorted...
    //left part
    quickSortA(arr, s,p-1);

    //right part
    quickSortA(arr,p+1,e);



}

int main(){
    int arr[]={24, 18, 38, 43, 14, 40, 1, 54};
    int n=8;
    quickSortA(arr, 0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}