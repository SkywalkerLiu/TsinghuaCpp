#include <iostream>
#include <cmath>
#include <iomanip>
#include "C4_1.cpp"
using namespace std;
enum class Type{S1=1,S2,S3,S4,S5,S6};
class Equation{
private:
    int a, b, c;
    Type type;

public:
    Equation(int _a, int _b, int _c):a(_a),b(_b),c(_c){
        if(a==0){
            if(b==0){
                if(c==0){type=Type::S5;}
                else{type=Type::S4;}
            }
            else{type=Type::S6;}
        }
        else{
            if(b*b-4*a*c>0){type=Type::S1;}
            else if(b*b-4*a*c==0){type=Type::S2;}
            else{type=Type::S3;}
        }
    }
    void solve(){
    cout.setf(ios::fixed);
    double result1,result2,result;
    cout<<(int)type<<endl;
    double delta=b*b-4*a*c;
    switch(type)
    {
    case Type::S1:
        result2=(-b+sqrt(delta))/(2*a);
        result1=(-b-sqrt(delta))/(2*a);
        if(a>0){
            cout<<setprecision(2)<<result1<<" "<<result2<<endl;
        }
        if(a<0){
            cout<<setprecision(2)<<result2<<" "<<result1<<endl;
        }
        break;
    case Type::S2:
        result=(double)-b/(2*a);
        cout<<setprecision(2)<<result<<endl;
        break;
    case Type::S3:
    case Type::S4:
    case Type::S5:
        break;
    case Type::S6:
        result=(double)-(c/b);
        cout<<setprecision(2)<<result<<endl;
        break;
    default:
        break;
    }
}
};
