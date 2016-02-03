#include <string.h>
#include <stdio.h>

using namespace std;

class B
{
    public:

        void Set(int B1, float B2, std::string B3){
            _B1 = B1;
            _B2 = B2;
        }

        int GetInt(){

            return _B1 ;
        }

        float GetFloat(){

            return _B2;
        }

        std::string GetString (){

            return _B3;
        }

    private:
        int _B1;
        float _B2;
        std::string _B3;
};


