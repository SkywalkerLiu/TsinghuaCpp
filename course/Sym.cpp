#include <iostream>
using namespace std;
int Symmetry_high();
int Symmetry_high()
{
    int n,m=0;
    cin>>n;
    int i=n;
    while(i!=0)
    {
        m = m * 10 + i%10;
        i= i/10;
    }
    if(m==n){
        cout<<"Symmetry!"<<endl;

    }
    else{
        cout<<"NS!"<<endl;
    }
}
