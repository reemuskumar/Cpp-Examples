#include <iostream>
#include <thread>

//C++11

using namespace std;

unsigned long x = 0;

void hello() {
    for (long i = 0; i < 100000; i++) {
        x++;
    }
}

int main()
{
    thread t1(hello);
    thread t2(hello);
    
    t1.join();
    t2.join();
    
    cout << "X = " << x << endl;
    return 0;
}
