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

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the Element : \n";
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;
            cout<<"Elements of the Array Are : \n";
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number of elments : \n";
    cin>>iValue;

    // Step 1 : Allocate Memory
    ArrayX *aobj = new ArrayX(iValue);

    // Step 2 : use the Memory
    aobj->Accept();
    aobj->Display();

    // Step 3 : Deallocate the Memory
    delete aobj;

    return 0;
}