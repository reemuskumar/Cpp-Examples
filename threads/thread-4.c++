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
       
    // Warning: Program exits after Main thread is complete
    
    cout << "X = " << x << endl;
    return 0;
}
