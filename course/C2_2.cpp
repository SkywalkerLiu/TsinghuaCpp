#include <iostream>
using namespace std;
int main2()
{
    int n;
    cin >> n;
    int sum = 0, pos = 1;
    while(n!=0)
    {
        sum += pos * (n % 10);
        n = n/10;
        pos *= 2;
    }
    cout << sum;


}
