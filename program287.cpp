#include<iostream>
using namespace std;

void Dsisplay()
{
    static int iCnt = 0;                       // Static strorage Class
    cout<<"Jay Ganesh..."<<iCnt<<"\n";
    iCnt++;
    Dsisplay();
}
int main()
{
    Dsisplay();

    return 0;
}