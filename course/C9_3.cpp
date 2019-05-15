#include <iostream>
#include <string>
#include <vector>
using namespace std;
/********
using namespace std;

template<class T, int MAX = 1000>
class Stack
{
private:
       T list[MAX + 1];
       int top;
public:
       Stack();
       void push(const T &item);//��itemѹջ
       T pop();//��ջ��Ԫ�ص���ջ
       const T & peek() const;//����ջ��Ԫ��
       bool isEmpty() const;//�ж��Ƿ�ջ��
       void clearStack();
};
//�����ջģ�����ʵ�֣����������ƥ������
template<class T, int MAX>
Stack<T,MAX>::Stack():top(-1){}

template<class T, int MAX>
void Stack<T,MAX>::push(const T &item)
{
    list[++top]=item;
}

template<class T, int MAX>
T Stack<T,MAX>::pop()
{
    return list[top--];
}

template<class T, int MAX>
const T & Stack<T,MAX>::peek() const
{
    return list[top];
}

template<class T, int MAX>
bool Stack<T,MAX>::isEmpty() const
{
    return top<0;
}

template<class T, int MAX>
void Stack<T, MAX>::clearStack()
{
    top = -1;
}
int main()
{
    Stack<char> s1;
    string str;
    while(cin>>str)
    {
        for(auto i:str)
        {
            if(i=='(')
                s1.push(i);

            else if(i==')')
            {
                if((!s1.isEmpty())&&(s1.peek()=='('))
                    s1.pop();
                else
                    s1.push(i);
            }
        }
        if(s1.isEmpty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        s1.clearStack();
    }
    return 0;

}
*****/
