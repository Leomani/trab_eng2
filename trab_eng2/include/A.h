#include <string.h>
#include <stdio.h>

using namespace std;

class A
{
    public:

        void Set(int A1, float A2, std::string A3){
            _A1 = A1;
            _A2 = A2;
            _A3 = A3;
            soma(_A1, _A2);
        }

        std::string GetString(){

            return _A3;
        }

        int GetInt(){

            return _A1 ;
        }

        float GetFloat(){

            return _A2;
        }

        float soma(int _A1, float _A2){
            cout << "soma = " << _A1+_A2 << endl;
        }

    private:
        int _A1;
        float _A2;
        std::string _A3;
};


