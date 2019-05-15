#include <cmath>
#include <iostream>
using namespace std;
int pow(int x,int y=2);
bool right_triangle(int x, int y, int z)
{
    if(pow(x)+pow(y)==pow(z)||pow(x)+pow(z)==pow(y)||pow(z)+pow(y)==pow(x)){
        return true;
    }
    else
        return false;
}
int pow(int x,int y)
{
    int product=1;
    while(y!=0){
        product*=x;
        y--;

    }
    return product;
}
