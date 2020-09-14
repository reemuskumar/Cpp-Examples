#include <iostream>
#include <thread>

//C++11

using namespace std;

void run()
{
    cout << "hello world - thread - " << this_thread::get_id() << endl;
}

int main()
{
    thread t1(run);
    
    t1.join();
    
    cout << "hello world - main" << endl;
    return 0;
}
