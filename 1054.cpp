#include<bits/stdc++.h>
#define ll long long 
using namespace std;

#define M 1000000007
#define pii pair<ll,ll>




pii extnuc(ll a,ll b)
{
    if(b==0)return pii(1,0);
    pii d=extnuc(b,a%b);
    return pii(d.second,d.first-d.second*(a/b));
}



ll modi(ll n)
{
    pii d=extnuc(n,M);
    return ((d.first%M)+M)%M;
}



vector <ll> prime_number;



void sieve(){
vector<bool> prime(1000010,true);

prime[1]=false;
    for(ll i=2;i<=1000000;i++){
        if(prime[i]){
            prime_number.push_back(i);
            for(ll j=i*i;j<=1000000;j+=i) prime[j]=false;
        }
    }
    prime.clear();


}




ll power(ll x, unsigned ll y)
{
    ll res = 1;     // Initialize result
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            {
                res = res*x;
                res%=M;
            }
        
        y /= 2; 
        x = x*x;  
        x%=M;
    }
    return res;
}

ll sigma(ll n, ll p)
{
    ll ans=1;
    ll sq=sqrt(n);
    for(ll i=0; prime_number[i]*prime_number[i]<=n ; i++){

        if(n%prime_number[i]==0){
            ll count=0;
            while(n%prime_number[i]==0){
                n/=prime_number[i];
                count++;
            }
            ll sum=power(prime_number[i],count*p+1)-1;
            ans*=sum;
            ans%=M;
            ans*=modi(prime_number[i]-1);
            ans%=M;
        }

    }
    if(n>1){
        ll sum=power(n,p+1)-1;
        ans*=sum;
        ans%=M;
        ans*=modi(n-1);
        ans%=M;
    }
	if(ans<0) ans+=M;
    return ans;

}

int main(){
    sieve();
    ll test;
    scanf("%lld",&test);
    ll n, p;
    for(ll i=1;i<=test;i++){
        scanf("%lld%lld",&n,&p);
        printf("Case %lld: %lld\n",i,sigma(n,p));
    }
    return 0;

}