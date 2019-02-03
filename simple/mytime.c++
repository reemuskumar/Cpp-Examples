#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    for (int i = 0; i < 100; i++)
        cout << time(NULL) << endl;
    return 0;
}
