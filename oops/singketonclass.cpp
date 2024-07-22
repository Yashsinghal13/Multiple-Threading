#include<bits/stdc++.h>
using namespace std;
class Boxfactory{
    private:
    static Boxfactory *instance;
    int length;
    int breadth;
    Boxfactory(int length,int Breadth)
    {
        this->length=length;
        this->breadth=Breadth;
    }
    public:
    static Boxfactory* createBox(int length,int breadth)
    {
        if(instance==nullptr)
        {
            instance=new Boxfactory(length,breadth);
        }
        return instance;
    }
    void getProperties()
    {
        cout<<this->length<<" "<<this->breadth<<endl;
    }
};
Boxfactory* Boxfactory::instance = nullptr;
int main()
{
    Boxfactory *box1=Boxfactory::createBox(4,5);
    Boxfactory *box2=Boxfactory::createBox(3,4);
    box1->getProperties();
    box2->getProperties();
    
    
    return 0;
}
