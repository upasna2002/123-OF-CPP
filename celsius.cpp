#include<iostream>
using namespace std;
int main()

{
    int init,fi,step,f,n,c;      //i.initialvalue  fi final value s step
    cin>>init>>fi>>step;
    f=init;

    while(n<=fi){
            f=n;
            c=(5.0/9.0)*(f-32);
            cout<<f<<" "<<c<<endl;

      n=f+step;
    }
    return 0;
}
