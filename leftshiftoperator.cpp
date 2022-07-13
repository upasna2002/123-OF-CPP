#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    //cin>>n;
    n=128;
    while(n>0){
        if((n&1)==1){
            ans++;
        }
        n=n>>1;
    }
    cout<<"set bits:"<<ans<<endl;
    return 0;
    }


