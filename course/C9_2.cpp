/*********
#include <iostream>
using namespace std;

template <class T>
int binSearch(T arr[], int n, T key);

/*��ʵ���۰���ң�����˳����������ʵ�Ԫ���±�*/
/******
template <class T>
int binSearch(T arr[], int n, T key)
{
    int lo=0, hi=n-1, mid;
    while(lo<=hi)
    {
        mid = (lo+hi)/2;
        cout<<mid<<endl;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            hi=mid-1;
        else
            lo=mid+1;
    }
    return -1;

}
int main()
{
       int n, m;
       int key1;
       double key2;
       cin >> n >> m >> key1 >> key2;
       int* arr_int = new int[n];
       double* arr_double = new double[m];
       for (int i = 0; i < n; ++i)
              cin >> arr_int[i];
       for (int i = 0; i < m; ++i)
              cin >> arr_double[i];
       binSearch(arr_int, n, key1);
       binSearch(arr_double, m, key2);
       return 0;
}
****/
