#include <iostream>
#include <cstdlib>
using namespace std;
void babelkowe(int tab[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=1;j<n-i;j++)
		if(tab[j-1]>tab[j])
			swap(tab[j-1], tab[j]);
}
int main(int argc, char *argv[])
{
    int t[argc-1];
    for(int i=1;i<argc;i++)
    {
        t[i-1]=atoi(argv[i]);
    }
    for(int i=1;i<argc;i++)
    {
        cout<<t[i-1]<<" ";
    }
    cout<<endl;
    int n = sizeof(t)/sizeof(t[0]);
    babelkowe(t,n);
    for(int i=0;i<=argc;i++)
        {
            cout<<t[i]<<" ";
        }
    return 0;
}
