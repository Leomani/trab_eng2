#include <iostream>
#include <conio.h>
#include "A.h"
#include "B.h"
#include <string.h>
using namespace std;


int main()
{
    A Object;
    A Object2;
    A Object3;
    B ObjectB;


    Object.Set(15, 25.3, "teste");
    Object2.Set(10, 15.5, "alo");
    ObjectB.Set(20, 30.6, "string B");

    cout << Object.GetInt() << " " << Object.GetFloat() << " " << Object.GetString() << endl;
    cout << Object2.GetInt() << " " << Object2.GetFloat() << " " << Object2.GetString() << endl;
    cout << ObjectB.GetInt() << " " << ObjectB.GetFloat() << " " << ObjectB.GetString() << endl;
    return 0;
}
