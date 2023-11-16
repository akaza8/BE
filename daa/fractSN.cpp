#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2){
    double r1 = (double)p1.first/p1.second;
    double r2 = (double)p2.first/p2.second;
    return(r1>r2);
}
int main(){
    int n;
    cin>>n;
    int w;
    cin>>w;
    vector<pair<int,int>>sack(n);
    for(int i=0;i<n;++i){
        cin>>sack[i].first>>sack[i].second;
    }
    sort(sack.begin(),sack.end(),compare);
    int ans = 0;
    for(int i=0;i<n;++i){
        if(w>=sack[i].second){
            ans+=sack[i].first;
            w-=sack[i].second;
            continue;
        }
        double vw = (double)sack[i].first/sack[i].second;
        ans+=vw*w;
        w=0;
        break;
    }
    cout<<ans<<endl;
    return 0;
}