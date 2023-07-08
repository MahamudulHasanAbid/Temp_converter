//A program to calculate all the possibilities of temperature.
#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    cout<<" ######################################################## "<<endl<<endl;
    cout<<"Some sort of Indication";
    cout<<endl<<"Type 'c' for Celcius as an input."<<endl;
    cout<<"Type 'f' for fahrenheit as an input."<<endl;
    cout<<"Type 'k' for kelvin as an input."<<endl<<endl;
    cout<<" ######################################################## "<<endl;


    char Charecter;
    cout<<"Type 'c' or 'f' or 'k' as you want to take the input type: ";
    cin>> Charecter;

    if (Charecter == 'c' || Charecter == 'C')
    {
        float cel,fah,kal;
        cout<<"Enter the value of celcius for change it to fahrenheit and kalvin: ";
        cin>>cel;
        fah = (9*cel)/5 +32;
        kal = cel + 273;
        cout<<endl<<endl<<fixed<<setprecision(3)<<cel <<" degree celcius is "<<fah <<" degree fahrenheit and "<<kal<<" kalvin."<<endl<<endl;
        cout<<"...................................................................................................";

    }
    else if(Charecter == 'f' || Charecter == 'F')
    {
        float cel,fah,kal;
        cout<<"Enter the value of fahrenheit for change it to celcius and kalvin: ";
        cin>>fah;
        cel = (5*(fah-32))/9;
        kal = (5*(fah-32))/9 + 273;
        cout<<endl<<endl<<fixed<<setprecision(3)<<fah <<" degree fahrenheit is "<<cel <<" degree celcius and "<<kal<<" kalvin."<<endl<<endl;
        cout<<"...................................................................................................";

    }
    else if (Charecter == 'k' || Charecter == 'K')
    {
        float cel,fah,kal;
        cout<<"Enter the value of kalvin for change it to fahrenheit and kalvin: ";
        cin>>kal;
        fah = ((9*(kal-273))/5)+32;
        cel = kal-273;
        cout<<endl<<endl<<fixed<<setprecision(3)<<kal <<" kalvin is "<<cel <<" degree celcius and "<<fah<<" Fahrenheit."<<endl<<endl;
        cout<<"...................................................................................................";

    }

    else
    {
        cout<<"Sorry, Wrong Input.\nHaven't you seen the indication above.";
    }

    return 0;
}
