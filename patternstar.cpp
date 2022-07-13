//pattern star
#include <iostream>
using namespace std;

int main()
{
    int n,row=1,i;
    cin>>n;

    while(row<=n){
        //work
        //har row mai row times star print krnei hai

        i=1;
        while(i<=row){
            cout<<'*'<<" ";
            i++;
        }
        cout<<'\n';
        row=row+1;
    }
    return 0;
}
