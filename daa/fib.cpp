#include<bits/stdc++.h>
using namespace std;
void fib(int n, vector<int>&arr,int i){
    while(n--){
        arr.push_back(arr[i]+arr[i+1]);
        i++;
    }
    for(auto k:arr){
        cout<<k<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    // 0,1,1,2,3,5
    n-=2;
    vector<int>arr;
    arr.push_back(0);
    arr.push_back(1);
    fib(n,arr,0);
    return 0;
}