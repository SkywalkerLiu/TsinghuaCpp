#include <iostream>
#include <stdexcept>
#include <cmath>
#include <iomanip>
using namespace std;

double calArea(double a, double b, double c) {
    //判断三角形边长是否为正
    if (a <= 0 || b <= 0 || c <= 0)
        throw invalid_argument("The input is illegal");
   //判断三边长是否满足三角不等式
    if (a + b <= c || b + c <= a || c + a <= b)
        throw invalid_argument("The input is illegal");
    //判断三角形是否为等腰三角形
    if (a != c && b != c && a != b)
        throw invalid_argument("The input is illegal");
    double s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));

}

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    try{
        double area = calArea(a, b, c);
        cout << setiosflags(ios_base::fixed) << setprecision(2) << area << endl;
    }catch(exception& e){
        cout << e.what() << endl;
    }
}
