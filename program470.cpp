#include<iostream>
using namespace std;

class ArrayX
{
    public :
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            cout<<"inside Constructer\n";
            iSize = no;
            Arr = new int [iSize];
        }
        
        ~ArrayX()
        {
            cout<<"inside Destructer\n";
            delete [] Arr;
        }
};

int main()
{
    ArrayX aobj(10);

    return 0;
}