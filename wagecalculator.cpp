#include <iostream>

using namespace std;
int main()
{
    const int rate=16;
    double hours1;
    double hours2;
    double wage;
    double total;
    double tax;

    cout<<"Enter your hours for first week: ";
    cin>>hours1;
    cout<<endl;
    cout<<"Enter your hours for second week: ";
    cin>>hours2;
    cout<<endl;
    cout<<"You worked for "<<hours1+hours2<<" in total"<<endl;
    wage=rate*(hours1+hours2);
    cout<<"Gross income: "<<wage<<endl;
    cout<<"Enter tax percentage between .75 and .95: "<<endl;
    tax= .75<=.95;
    cin>>tax;
    total=wage*tax;
    cout<<"Tax income: "<<total<<"\n"<<endl;
    cout<<"Again?"<<endl;


    return 0;
}

