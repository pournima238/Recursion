//it looks similar to for loop

#include<bits/stdc++.h>
using namespace std;
void reachHome(int start, int des){
    if(start==des){
        cout<<"pohoch gaya";
        return;
    }
    start++;
    reachHome(start, des);
}
int main(){
    int start =1;
    int des=10;
    reachHome(start,des);
    return 0;
    }