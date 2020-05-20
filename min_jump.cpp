#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(n,x) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define pb push_back
#define em emplace_back
#define ll long long int
#define debug(c) cout<<c<<endl;
#define find(v,x) find(all(v),x)!=v.end()
#define mp make_pair
#define isro ios_base::sync_with_stdio(false);

using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

bool min_jump(int n,int k){
    int count=0;
    while(n>0){
        if(n&1)
             count+=1;
        n=n>>1;     
    }
    
//    cout<<count<<endl;

    if(count<=k)
        return true;
    else 
        return false;               
}


int main(){
    isro;
    int n,k;
    cin>>n>>k;

    if(min_jump(n,k))
        cout<<"Yes"<<endl;
    else
        cout<<"NO"<<endl;

}

