class s1
{
private:
    int x1;
    int x2;
public:
    s1(int x1,int x2):x1(x1),x2(x2){}
};
class s2:public s1
{
private:
    int x1;
    int x2;
public:
    s2(int x1,int x2):x1(x1),x2(x2),s1(x1,x2){}
};

class s3:public s1,s2
{
private:
    int x1;
    int x2;
public:
    s3(int x1,int x2):x1(x1),x2(x2),s1(x1,x2),s2(x1,x2){}
};
