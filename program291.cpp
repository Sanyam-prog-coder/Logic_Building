#include<iostream>
using namespace std;

void Dsisplay()
{
    static int iCnt = 1;
    auto i = 1;

    if( iCnt <= 3)
    {
        cout<<"Jay Ganesh..."<<iCnt<<"-"<<i<<"\n";
        iCnt++;
        i++;
        Dsisplay();
    }
}

int main()
{
    cout<<"Inside Main\n";
    Dsisplay();
    cout<<"End of Main\n";
    return 0;
}