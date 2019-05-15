#include <iostream>
#include <cmath>
using namespace std;
class Integer{
private:
    int _num;

    int getLength(){
        int len = 0;
        int a = _num;
        while(a!=0){
            a=a/10;
            len++;
        }
        return len;
    }
public:

    Integer(int num):_num(num){
    }

    int inversed(){
        int num = 0;
        int a = _num;
        while(a!=0){
            num *=10;
            num += a%10;
            a = a/10;
        }
        return int(num);
    }
};
