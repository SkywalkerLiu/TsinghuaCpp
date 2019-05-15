/*****
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int m,n,wid;
    double num;
    cin>> m>> n>> num;
    num = floor(num*pow(10,n))/pow(10,n);
    if(n==0)
        wid = m;
    else
        wid = m+n+1;
    if(m==0&&n==0)
        cout<<0<<endl;
    else
    {
        cout<< setiosflags(ios_base::fixed);
        cout.fill('0');
        cout<< setprecision(n)<< setw(wid) << setiosflags(ios_base::right)<< num<< endl;
    }
}
********/
