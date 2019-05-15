/***********
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
    string a,b,temp;
    cin>>a;
    cin>>b;
    int j;
    int count=0;
    for(j=0;j<a.size()-b.size();j++)
    {
        temp = a.substr(j,b.size());
        if(!b.compare(temp))
            count++;
    }
    cout<<count<<endl;

}
*******/
