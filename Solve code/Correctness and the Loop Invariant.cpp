#include<bits/stdc++.h>
#define ll          long long int
#define nl          '\n'
#define pi          acos(-1)
#define GCD(a, b)   __gcd(a, b)
#define boost       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define inout       freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#define mod         11092019
using namespace std;

int main(void){
    //boost;

    ll t,a,n,m,x,b,c,d,e,mx=0,cnt=1;
        cin>>t;
read:
    ll ar[t+5];

    for(int i=1; i<=t; i++){
        cin>>ar[i];
    }
    sort(ar+1,ar+1+t);

    for(int i=1; i<=t; i++){
        cout<<ar[i]<<" ";
    }
}
