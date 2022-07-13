//pattern star
#include <iostream>
using namespace std;

int main()
{
    int n,row=1,number = 1,i,stars;
    cin>>n;

    while(row<=n){
        //work
        //har row mai row times star print krnei hai
        stars = 1;
        number = 1;
        i=1;
        while(stars<=row){
            cout<<number<<'*'<<" ";
            number = number+1;
            stars = stars+1;
            i++;
        }
        cout<<'\n';
        row=row+1;
    }
    return 0;
}

