#include <iostream>
#include <thread>
using namespace std;
void print(void)
{
    cout<<"Hello World\n";
}
int main()
{
    thread th1(print);
    thread th2(print);
    th1.join();
    th2.join();
    return 0; //return of parent thread ensures that threads th1 and th2 are terminated.
}
