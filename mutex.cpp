#include<iostream>
#include<mutex>
#include<thread>
using namespace std;
mutex mtx;
int count=0;
void inc()
{
    for(int i=0;i<10000000;i++)
    {
        mtx.lock();
        count++;
        mtx.unlock();
    }
}
int main()
{
    thread a(inc);
    thread b(inc);
    a.join();
    b.join();
    cout<<count;
}