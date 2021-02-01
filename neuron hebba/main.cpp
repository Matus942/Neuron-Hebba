///zad6 zad7 zad4 na zaliczenie zad 4 i zad 7 plik fcl do 6 fcl i program + preceprton i 3 inne programy
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Neuron_Hebba

    int x1[13]={1,-1,-1,1,-1,-1,1,-1,-1,1,-1,-1,1};
    int x4[13]={1,1,-1,1,1,1,1,-1,-1,1,-1,-1,1};
    double wi[13]={0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
    double beta=-2.0;
    double d1=1.0;
    double d4=-1.0;
    double blad=0.00005;
    double E=0;
    double wsp_ucz=0.1;
    double y1=0,y4=0;
    double s1=0,s4=0;

    do
    {
        E=0;
        s1=0;
        s4=0;
        for(int i=0;i<13;i++)
        {
            s1+=x1[i]*wi[i];
        }

        y1=(1-pow(M_E,s1*beta))/(1+pow(M_E,s1*beta));


        for(int j=0;j<13;j++)
        {
            wi[j]=wi[j]+wsp_ucz*d1*x1[j];
        }

        for(int i=0;i<13;i++)
        {
            s4+=x4[i]*wi[i];
        }

        y4=(1-pow(M_E,s4*beta))/(1+pow(M_E,s4*beta));


        for(int j=0;j<13;j++)
        {
            wi[j]=wi[j]+wsp_ucz*d4*x4[j];
        }

        E=0.5*pow(d1-y1,2)+0.5*pow(d4-y4,2);
         cout<<"E="<<E<<endl;

    }while(E>blad);

    cout<<"y1="<<y1<<endl;
    cout<<"y4="<<y4<<endl;


    return 0;
}
