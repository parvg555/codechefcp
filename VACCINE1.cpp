#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
typedef long long ll;
typedef long double  ld;
#define pii pair<ll,ll>
#define vi vector< ll >
#define vvi vector< vi >
#define vpi vector< pii >
#define vvpi vector< vpi >
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define test(t) ll t;cin>>t;while(t--)
#define mem(a,b) memset(a,b,sizeof(a))
#define inn freopen("input.txt", "r", stdin)
#define outt freopen("output.txt", "w", stdout)
#define all(arr) arr.begin(),arr.end()
#define fr(i,n) for(ll i=0;i<(n);++i)
#define rep(i,a,b) for(ll i=a;i<=b;++i)
#define per(i,a,b) for(ll i=a;i>=b;i--)
#define remin(a,b) (a=min((a),(b)))
#define remax(a,b) (a=max((a),(b)))

/*=============================================================================
#  Author:          Parv Gupta - https://github.com/parvg555/
#  Email:           parvg555@gmail.com
#  FileName:        VACCINE1.cpp
#  Created On:      04/12/2020
=============================================================================*/


void sol(){
    ll d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    ll d = 0;
    while(p>0){
        //cout<<d<<" "<<p<<endl;
        d++;
        if(d>=d1){
            p -= v1;
        }
        if(d>=d2){
            p-=v2;
        }
    } 
    cout<<d<<endl;
}
int main(void){
    fast;
    sol();
}