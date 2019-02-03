#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    cout << RAND_MAX << endl;
    for (int i = 0; i < 10; i++)
        cout << rand() << endl;
    return 0;
}
