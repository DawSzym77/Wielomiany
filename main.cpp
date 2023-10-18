#include <iostream>
#include "polynomian.h"
#include <vector>
#include <algorithm>
using namespace std;
vector<double> v(0);
vector<double> v2(0);
vector<double> wynik;
    


int main()
{
int n;
    int x;
    cout<<"Podaj stopień 1. wielomianu"<<endl;
    cin>>n;
    cout<<"Podaj współczynniki 1. wielomianu od najwyzszej potegi"<<endl;
    for(int i = 0; i<n; i++)
    {
    cin>>x;
    v.push_back(x);
    }
    cout<<"Podaj stopień 2. wielomianu"<<endl;
    cin>>n;
    cout<<"Podaj współczynniki 2. wielomianu od najwyzszej potegi"<<endl;
    for(int i = 0; i<n; i++)
    {
    cin>>x;
    v2.push_back(x);
    }

cout<<"Suma wielomianów: ";
print(add(v, v2));
cout<<endl;
cout<<"Różnica wielomianów: ";
print(substract(v, v2));
cout<<endl;
cout<<"Iloczyn wielomianów: ";
print(multiply(v, v2));
}