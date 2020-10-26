#include <iostream>

using namespace std;

int ile(float a)
{
    if(a<16)
    return 0;
    if(a<17)
    return 1;
    if(a<18.5)
    return 2;
    if(a<25)
    return 3;
    if(a<30)
    return 4;
    if(a<35)
    return 5;
    if(a<40)
    return 6;
    if(a>=40)
    return 7;
}

int main()
{
    float m, w, BMI;
    cout<<"Podaj mase ciala: "<<endl;
    cin>>m;
    cout<<"Podaj wzrost: "<<endl;
    cin>>w;
    BMI=m/(w*w);
    switch(ile(BMI))
    {
        case 0:
        cout<<"BMI: "<<BMI<<" - wyglodzenie";
        break;
        case 1:
        cout<<"BMI: "<<BMI<<" - wychodzenie";
        break;
        case 2:
        cout<<"BMI: "<<BMI<<" - niedowaga";
        break;
        case 3:
        cout<<"BMI: "<<BMI<<" - wartosc prawidlowa";
        break;
        case 4:
        cout<<"BMI: "<<BMI<<" - nadwaga";
        break;
        case 5:
        cout<<"BMI: "<<BMI<<" - I stopien otylosci";
        break;
        case 6:
        cout<<"BMI: "<<BMI<<" - II stopien otylosci";
        break;
        case 7:
        cout<<"BMI: "<<BMI<<" - otylosc skrajna";
        break;
        default:
        cout<<"Nieprawidlowa wartosc";
        break;
    }
}
