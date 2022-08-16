#include<bits/stdc++.h>
using namespace std;

void mergeA(int *arr, int s, int e,int &inv){
    //inv=0;
    int mid=(s+e)/2;
    //copy values in two arrays;
    int len1=mid-s+1;
    int *first= new int[len1];
    int len2=e-mid;
    int *second= new int[len2];
    int mainArrayIndex=s;


//copying first half in one array
    for (int  i = 0; i < len1; i++)
    {
        first[i]=arr[mainArrayIndex++];
    }

//copying second half in second array
mainArrayIndex=mid+1;
  for (int  i = 0; i < len1; i++)
    {
        second[i]=arr[mainArrayIndex++];
    }
  
  //sort and merge two arrays
  int index1=0;
  int index2=0;
  mainArrayIndex=s;

  while (index1<len1 && index2<len2){
      if(first[index1]<second[index2]){
          arr[mainArrayIndex++]=first[index1++];
      }else{
        inv+=(len1-index1);
         arr[mainArrayIndex++]=second[index2++]; 

      }

  }

  //inserting remainings
  while (index1<len1)
  {
      arr[mainArrayIndex++]=first[index1++];
  }

  while (index2<len2)
  {
      arr[mainArrayIndex++]=second[index2++];
  }
  delete []first;
  delete []second;
}

void mergeSortArray(int *arr, int s, int e,int &inv){
    //inv=0;
    int mid=(s+e)/2;
    //base case

    if(s>=e){
        return;
    }

    //left side of array ko sort karna

    mergeSortArray(arr,s,mid,inv);

    //right side of array ko sort karna
    mergeSortArray(arr,mid+1,e,inv);

    //merge two sorted arrays
    mergeA(arr,s,e,inv);

}

int main(){
    int arr[]={ 21, 1, 6, 4, 5};
    int n=5;
    int s=0;
    int inv=0;
    mergeSortArray(arr,s,n-1,inv);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"inv="<<inv<<endl;
    
    return 0;
}