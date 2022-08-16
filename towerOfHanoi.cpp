#include<bits/stdc++.h>
using namespace std;
void toh(int n, char src, char extra, char dest){
    if(n==1){
        cout<<"Moving disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    toh(n-1,src,dest,extra);
     cout<<"Moving disk "<<n<<" from "<<src<<" to "<<dest<<endl;
     toh(n-1,extra,src,dest);
}
int main(){
    int n;
    cout<<"Enter the number of disks= ";
    cin>>n;
    
    toh(n,'a','b','c');
}