#include <iostream>
#include <thread>
#include <atomic>

//C++11

using namespace std;

long x = 0;

void hello() {
    for (long i = 0; i < 100000; i++) {
        cout << " X = " << x << endl;
        x++;
    }
}

int main()
{
    thread t1(hello);
    
    t1.detach();
    
    // Warning: Program exits after Main thread is complete - even if thread is detached
    
    cout << "X = " << x << endl;
    return 0;
}
