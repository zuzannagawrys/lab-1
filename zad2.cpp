#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
    string wyraz(argv[1]);
    int s=wyraz.size();
    bool t=1;
    for (int i=0;i<(s/2);i++)
    {
        if(wyraz[i]!=wyraz[s-i-1])
        {
            t=0;
            break;
        }

    }
    if(t==1)
    {
        cout<<"Wyraz jest palindromem";
    }
    else
    {
        cout<<"Wyraz nie jest palindromem";

    }
}
