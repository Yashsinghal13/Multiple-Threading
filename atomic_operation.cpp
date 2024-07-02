/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<thread>
#include<atomic>
using namespace std;
atomic<int> count;//it is used to avoid the  inconsitency and provide the atomic operation. 
void inc()
{
    for(int i=0;i<10;i++) count++;
}
int main()
{
    thread a(inc);
    thread b(inc);
    //count=0;
    a.join();
    b.join();
    cout<<count;
}