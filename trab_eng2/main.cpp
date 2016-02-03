#include <iostream>
#include <conio.h>
#include "A.h"
using namespace std;


int main()
{
    cout << "Hello world!" << endl;

    A Object;
    A Object2;
    Object.Set(15, 25.3);
    Object2.Set(10, 15.5);
    cout << Object.GetInt() << " " << Object.GetFloat() << endl;
    cout << Object2.GetInt() << " " << Object2.GetFloat() << endl;

    return 0;
}
