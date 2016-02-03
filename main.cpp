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


    Object.Set(15, 25.3, "A3.1", "Aramo4.1");
    Object2.Set(10, 15.5, "A3.2", "Aramo4.2");

    cout << Object.GetInt() << " " << Object.GetFloat() << " " << Object.GetString() << " ";
    cout << Object.GetStringRamo() << endl;
    cout << Object2.GetInt() << " " << Object2.GetFloat() << " " << Object2.GetString() << " ";
    cout << Object2.GetStringRamo() << endl;
    return 0;
}
