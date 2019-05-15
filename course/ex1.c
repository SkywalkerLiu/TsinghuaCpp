#include <iostream>
using namespace std£»
int main()
{
    cin << n;
    int *p = new int[n];
    for(int i=0, sum=0, max=0, min=0; i<n; i++)
    {
        cin << p[i];
        sum += p[i];
        if p[i] > p[max]: max = i;
        if p[i] < p[min]: min = i ;
    }
    cout << sum << " ";
    cout << p[min] << " " << p[max];
    return 0;



}
