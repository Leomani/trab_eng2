#include <iostream>
#include <conio.h>
#include "A.h"
#include <string.h>
using namespace std;


int main()
{
    A Object;
    A Object2;
    A Object3;


    Object.Set(15, 25.3, "teste");
    Object2.Set(10, 15.5, "alo");

    cout << Object.GetInt() << " " << Object.GetFloat() << " "
    << Object.GetString() << endl;
    cout << Object2.GetInt() << " "
    << Object2.GetFloat() << " "
    << Object2.GetString() << endl;

    return 0;
}
