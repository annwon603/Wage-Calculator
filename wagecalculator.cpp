#include <iostream>

using namespace std;
int main()
{
    int rate;
    double hours1;
    double hours2;
    double wage;
    double total;
    double tax;
    bool again=true;
    string choice;
    while(again){
        cout<<"Enter your hourly rate: ";
        cin>>rate;
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
        cout<<"Type in yes or no"<<"\n";

        cin>>choice;
        if(choice=="yes"){
            again=true;
        }
        else if(choice=="no"){
            again=false;
        }
        else{
            cout<<"Invalid statement, please type again";
            cin>>choice;
        }
    }

    return 0;
}
