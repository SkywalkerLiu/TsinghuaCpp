/**********
#include <iostream>
using namespace std;

/*��������������*/
/**
template <class T>
T getSum(const T* arr,int n)
{
    T temp=0;
    int i;
    for(i=0;i<n;i++)
    {
        temp += arr[i];
    }
    return temp;
}
int main()
{
       int n, m;
       cin >> n >> m;
       int* arr_int = new int[n];
       double* arr_double = new double[m];
       for (int i = 0; i < n; ++i)
              cin >> arr_int[i];
       for (int i = 0; i < m; ++i)
              cin >> arr_double[i];
       cout << getSum(arr_int, n) << endl;
       cout << getSum(arr_double, m) << endl;
       return 0;
}
*/
