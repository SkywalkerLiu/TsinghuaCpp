#include <iostream>
using namespace std;
class Yuebao
{
private:
    static double profitRate;
    double balance;
public:
    Yuebao(double _balance):balance(_balance){
    }
    static void setProfitRate(double rate){
        profitRate=rate;
    }
    void addProfit(){
        balance += balance * profitRate;
    }
    void deposit(double amount){
        balance += amount;
    }
    void withdraw(double amount){
        balance -= amount;
    }
    double getBalance(){
        return balance;
    }

};
/*****
#include <iostream>
#include <cmath>
#include "C5_1.cpp"
using namespace std;
double Yuebao::profitRate = 0.0;
int main()
{
    int n;
    while(cin >> n)
    {
        double profitRate;
        cin >> profitRate;
        Yuebao::setProfitRate(profitRate);//�趨��������
        Yuebao y(0); //�½����˻�������ʼ��Ϊ0
        int operation;//���������ж��Ǵ滹��ȡ
        double amount;//���������ȡ���
        for (int i = 0; i < n; ++i)
        {
            y.addProfit();//����ǰһ������������Ϣ
            cin >> operation >> amount;
            if (operation == 0)
                y.deposit(amount);//������
            else
                y.withdraw(amount);//ȡ�����
        }
        cout << y.getBalance() << endl;//��������˻����
    }
    return 0;
}
****/


