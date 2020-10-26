#include <iostream>
#include <cmath>
using namespace std;
int dzielniki(int c)
{
    int s=0;
    for(int i=1; i<=c/2; i++)
    {
        if (c%i==0)
        {
            s=s+i;
        }
    }

    return s;
}
int main()
{
    int a, b;
    int d1, d2;
    cout<<"Wprowadz dwie liczby calkowite"<<endl;
    cin >> a >>b;
    if(a<=1 || b<=1)
    {
        cout<<"Liczby nie skojarzone";
        return 0;
    }
    d1 = dzielniki(a);
    d2 = dzielniki(b);

    if(d1==b+1 && d2==a+1)
    {
        cout<<"Liczby sa skojarzone";
    }
    else
    {
        cout<<"Liczby nie sa skojarzone";
    }
    return 0;
}
