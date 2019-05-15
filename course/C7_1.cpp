/******
    #include <iostream>
    #include <string>
    using namespace std;

    class Account
    {
         string userName;
    public:
         Account(){};
         Account(string name );
         void  PrintUserName();
    };

    class CreditAccount : public Account
    {
    public:
         CreditAccount(string name, long credit);
         void PrintInfo();
    private:
         int credit;
    };

    //��ʵ��Account���캯��Account(char *name)
    //��ʵ��Account��PrintUserName()����
    //��ʵ��CreditAccount��Ĺ��캯��CreditAccount(char* name, long number)
    //��ʵ��CreditAccount���PrintInfo()����
    Account::Account(string name)
    {
        userName=name;
    }

    void Account::PrintUserName()
    {
        cout<<userName<<endl;
    }

    CreditAccount::CreditAccount(string name, long number):Account(name),credit(number){}

    void CreditAccount::PrintInfo()
    {
        PrintUserName();
        cout<<credit<<endl;
    }
    int main()
    {
         CreditAccount a("I Love CPP", 10000);
         a.PrintInfo();
         return 0;
    }
*****/
