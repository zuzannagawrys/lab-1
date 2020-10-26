#include <iostream>
using namespace std;
int main()
{
    float m1[2][3]={{1,1,1},{2,2,2}}, m2[2][3]={{3,3,3},{4,4,4}}, m3[2][3];
    cout<<"Macierz 1:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<m1[j][i]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"Macierz 2: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<m2[j][i]<<"\t";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            m3[j][i]=m1[j][i]+m2[j][i];
        }
    }
    cout<<endl<<"Suma macierza 1 oraz 2: "<<endl;
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<m3[j][i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
