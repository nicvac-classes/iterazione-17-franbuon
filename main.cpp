#include <iostream>
using namespace std;

int main() {
    float N, max, min, mediapos, Npos, Nneg, somma;
    int vneg, vpos;
    max=0;
    min=0;
    vpos=0;
    vneg=0;
    somma=0;
    cout<<"Inserisci il numero"<<endl;
    cin>>N;
    while(N!=0)
    {
       if(N>0)
       {
        Npos=N;
        vpos=vpos+1;
        somma=somma+Npos;
       }
       else
       {
        vneg=vneg+1;
        Nneg=N;
       }
       if(N>max)
       {
        max=N;
       }
       else
       {
        if(N<min)
        {
            min=N;
        }
       }
       cout<<"Inserisci il numero"<<endl;
       cin>>N;
    }
    mediapos=somma/vpos;
    cout<<"La media dei valori positivi è "<<mediapos<<endl;
    cout<<"I valori negativi sono "<<vneg<<endl;
    cout<<"Il valore massimo è "<<max<<endl;
    cout<<"Il valore minimo è "<<min;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
