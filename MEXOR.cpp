#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
//Code Given by-> Akshay Pratap Singh
#define pb push_back
//Code Given by-> Akshay Pratap Singh
#define pf push_front
using namespace std;
int main()
{
fastread();
int t;
cin>>t;
while(t--){
    ll x;
    cin>>x;
    //LOGIC-> xor series for x=0---n will be
    //0  1  3 3  7 7 7 7  15 15 15 15 15 15 15 15
    //      -2x- --4x---  ----------8x-----------
    // You'll observe that the or changes at power of 2.
    //Code Given by-> Akshay Pratap Singh
    if(x==0){cout<<1<<endl;}
    else{
        ll b=1;
        while(b<=x){
            b=b*2;
        }
        //cout<<"END: "<<b<<endl; //x=9 b=16
        ll a=b/2;
        //cout<<"START: "<<a<<endl;
        if(x==a){
            ll OXA=b-1;
            if(OXA<=x){
                cout<<x+1<<endl;
            }
            else{
                cout<<x<<endl;
            }
        }
        else if(x>a && x<b){
            ll OXX=b-1;
            if(OXX<=x){
                cout<<x+1<<endl;
            }
            else{
                cout<<a<<endl;
            }
        }
        else if(x==b){
            ll OXB=b*2-1;
            if(OXB<=x){
                cout<<x+1<<endl;
            }
            else{
                cout<<x<<endl;
            }
        }
    }
}
return 0;
}
//Code Given by-> Akshay Pratap Singh
