//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)
#define vv vector<int> v

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,count=0;
        cin>>n;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(a>=10 && a<=60) count++;
        }  
        cout<<count<<"\n";
    }
    return 0;
}