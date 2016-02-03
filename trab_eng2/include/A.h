

class A
{
    public:

        void Set(int A1, float A2){
            _A1 = A1;
            _A2 = A2;
        }
        int GetInt(){

            return _A1 ;
        }
        float GetFloat(){

            return _A2;
        }

    private:
        int _A1;
        float _A2;
};


