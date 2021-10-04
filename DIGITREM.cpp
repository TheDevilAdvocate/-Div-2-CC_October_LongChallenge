#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
//Code Given->Akshay Pratap Singh
#define pb push_back
#define pf push_front
using namespace std;

vector<ll> digitteller(ll n){
    vector<ll> ans;
    while(n!=0){
        ll digi=n%10;
        ans.pb(digi);
        n=n/10;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
//Code Given->Akshay Pratap Singh
ll indextell(vector<ll> v,ll d){
    ll index=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==d){
            index=i;
            break;
        }
    }
    return index;
}
//Code Given->Akshay Pratap Singh
ll nummaker(ll index,ll s){
    ll num=1;
    ll size=s-(index+1);
    while(size--){
        num=num*10;
    }
    return num;
}

int main()
{
fastread();
int t;
cin>>t;
while(t--){
    ll n,d,ans=0;
    cin>>n>>d;
    vector<ll> v=digitteller(n);
    ll index=indextell(v,d);
    if(index==-1){cout<<0<<endl;}
    else{
        while(index != -1){
            ll s=v.size();
            ll num=nummaker(index,s);
            ll temp=num;
            ll num2=0;
            for(int i=index+1;i<s;i++){
                temp=temp/10;
                num2=num2+v[i]*temp;
            }
            //cout<<"num: "<<num<<"num2: "<<num2<<endl;
            //Code Given->Akshay Pratap Singh
            ans=ans+num-num2;
            n=n+num-num2;
            v.clear();
            v=digitteller(n);
            index=indextell(v,d);
        }
        cout<<ans<<endl;
    }
}
return 0;
}
//Code Given->Akshay Pratap Singh
