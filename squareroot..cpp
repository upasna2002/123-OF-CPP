#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float i=0,inc=1;
    int x=1;
    while (i*i<=n){
            i=i+inc;

}
    i=i-inc;
    inc=inc/10;
    x=x+1;
}
    cout<<i<<endl;
    return 0;
}
