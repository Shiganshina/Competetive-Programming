//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>=b) b+=c;
        else a+=c;
        if(a>=b) b+=d;
        else a+=d;
        if(a>=b) cout<<"N\n";
        else cout<<"S\n";
    }
    return 0;
}