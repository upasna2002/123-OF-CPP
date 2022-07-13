#include<iostream>
using namespace std;
int main()

{
    int i,n;
    cin>>n;

    i=2;

    while(i<=n-1){
        if(n%i==0)
    {
        cout<<"It is not a prime"<<endl;
        return 0;
    }
      i++;
    }
    cout<<"It is a prime number"<<endl;




        return 0;
}
