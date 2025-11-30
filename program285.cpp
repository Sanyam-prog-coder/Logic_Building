#include<iostream>
using namespace std;

void Dsisplay()
{
    int iCnt = 0;                       // Auto strorage Class
    cout<<"Jay Ganesh..."<<iCnt<<"\n";
    iCnt++;
    Dsisplay();
}
int main()
{
    Dsisplay();

    return 0;
}