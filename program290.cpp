#include<iostream>
using namespace std;

void Dsisplay()
{
    static int iCnt = 1;
    
    if( iCnt <= 4)
    {
        cout<<"Jay Ganesh...\n";
        iCnt++;
        Dsisplay();
    }
}
int main()
{
    Dsisplay();

    return 0;
}