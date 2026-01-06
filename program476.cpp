#include<iostream>
using namespace std;

class ArrayX
{
    public :
        int *Arr;
        int iSize;

        ArrayX(int no);
        ~ArrayX();
        void Accept();
        void Display();
        int Addition();
        int Maximum();
};

ArrayX::ArrayX(int no)
{
    cout<<"inside Constructer\n";
    iSize = no;
    Arr = new int [iSize];
}

ArrayX::~ArrayX()
{
    cout<<"inside Destructer\n";
    delete [] Arr;
}

void ArrayX::Accept()
{
    int iCnt = 0;

    cout<<"Enter the Element : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX::Display()
{
    int iCnt = 0;
    cout<<"Elements of the Array Are : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int ArrayX::Addition()
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int ArrayX::Maximum()
{
    int iMax = 0;
    int iCnt = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

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

    cout<<"Summation of All Elements : "<<aobj->Addition()<<"\n";
    cout<<"Maximum is : "<<aobj->Maximum()<<"\n";
     
    // Step 3 : Deallocate the Memory
    delete aobj;

    return 0;
}