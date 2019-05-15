#include <iostream>
using namespace std;
int Maxsubarr(int* arr,int n)
{
    /*********
    MAX SUBARRAY QUESTION
    DP[i] : MAX subarrays of arr[0:i]
    x[i] : MAX subarrays of arr[0:i] which most right element is arr[i]
    DP[i] = max{x[i-1]+a[i],a[i],DP[i]}
          = max{x[i],DP[i]}
    x[i] = max{x[i-1]+a[i],a[i]}
    DP[0] = arr[0];
    x[0] = arr[0];
    *********/
    int DP=arr[0],x=arr[0];
    int i=0;
    for(i=1;i<n;i++)
    {
        if(x>0){
            x=x+arr[i];
        }
        else{
            x=arr[i];
        }
        if(x>DP){
            DP=x;
        }
    }
    return DP;
}


