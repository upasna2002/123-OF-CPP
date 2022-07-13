//123456789
#include<iostream>
using namespace std;

int main()
{
    int n,row=1,no=1,i=1;
    cin>>n;
    while(row<=n){
        i=1;
        while(i<=row)
            {
                cout<<no;
                no++;
                i++;
            }
    cout<<endl;
    row=row+1;
    }
}
