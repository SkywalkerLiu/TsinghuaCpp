#include <iostream>
using namespace std;
class Mouse{
private:
    static int num;
public:
    Mouse(){
        num++;
    }
    Mouse(const Mouse& m){
        num++;
    }
    ~Mouse(){
        num--;
    }
    friend void fn(Mouse m);
    friend int main();
};


