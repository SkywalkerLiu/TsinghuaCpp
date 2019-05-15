#include <iostream>
int Maxsubarr(int* arr,int n);
using namespace std;
int main3()
{
    int n;
    int i;
    int a[5000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<Maxsubarr(a,n)<<endl;
    return 0;
}

