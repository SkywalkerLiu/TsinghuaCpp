/**********
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
/*********
sub palindrome sequence number question:MAX VALUE
DP[i][j]=1(i=j)
DP[i][j]=0(i>j)
DP[i][j]={
        DP[i+1,j]+DP[i,j-1]-DP[i+1,j-1];   a[i]!= a[j]
        DP[i+1,j]+DP[i,j-1]+1;             a[i] = a[j]
from DP[1][1]=0
}
*********/
/********
string s1;
cin>>s1;
int n=s1.length();
int i,j;
vector<vector<int>> DP(n);
for(i=0;i<n;i++){
    DP[i].resize(n);
}
for(i=n-1;i>=0;i--){
    for(j=0;j<n;j++){
        if(i==j){
            DP[i][j]=1;
        }
        else if(i>j){
            DP[i][j]=0;
        }
        else if(s1[i]!=s1[j]){
            DP[i][j]=DP[i+1][j]+DP[i][j-1]-DP[i+1][j-1];
        }
        else{
            DP[i][j]=DP[i+1][j]+DP[i][j-1]+1;
        }
    }
}
cout<<DP[0][n-1]<<endl;
return 0;
}
***********/
