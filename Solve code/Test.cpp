#include<bits/stdc++.h>
#define ll          long long int
#define nl          '\n'
#define pi          acos(-1)
#define GCD(a, b)   __gcd(a, b)
#define LCM(a, b)       (a * b) / GCD(a, b)
#define boost       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define inout       freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#define mod         11092019
using namespace std;

int main(void){
    boost;


   ll a,t,b,c,d,k,r,n,m,x,y;
        cin>>t;
read:
    while(t--){
        cin>>a>>b>>n;

        ll ar[n+5],br[n+5],mx=0,mx1=0,mi;

        for(int i=1; i<=n; i++){
            cin>>ar[i];

            mx=max(mx,ar[i]);
        }
        for(int j=1; j<=n; j++){
            cin>>br[j];

            mx1=max(mx1,br[j]);
        }
        //cout<<mx<<" "<<mx1<<nl;

        mi=min(mx,mx1);

        if(mi<=a||mi<=b) cout<<"YES\n";
        else cout<<"NO\n";
    }
}


