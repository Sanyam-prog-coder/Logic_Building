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
    // Step 1 : Allocate Memory
    ArrayX *aobj = new ArrayX(10);

    // Step 2 : use the Memory
    // 

    // Step 3 : Deallocate the Memory
    delete aobj;

    return 0;
}