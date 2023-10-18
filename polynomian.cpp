#include <iostream>
#include "polynomian.h"
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<double> w){
for(long long unsigned int i = 0; i < w.size(); i++){
    cout<<w.at(i);
    if(i!=w.size()-1){
        cout<<"x^"<<w.size()-1-i<<" + ";
    }
}
}
vector<double> add(vector<double> w, vector<double> w2){
    reverse(w.begin(),w.end());
reverse(w2.begin(),w2.end());
vector<double> result;
for(int i = 0; i < max(w.size(), w2.size()); i++){
    result.push_back(w[i]+w2[i]);
}
reverse(result.begin(), result.end());
return result;
}
vector<double> substract(vector<double> w, vector<double> w2){
    reverse(w.begin(),w.end());
reverse(w2.begin(),w2.end());
vector<double> result;
for(int i = 0; i < max(w.size(), w2.size()); i++){
    result.push_back(w[i]-w2[i]);
}
reverse(result.begin(), result.end());
return result;
}
vector<double> multiply(vector<double> w, vector<double> w2){
    reverse(w.begin(),w.end());
reverse(w2.begin(),w2.end());
vector<double> result;
for(int i = 0; i<(w.size() + w2.size() - 1); i++)
{
result.push_back(0);
}
for(int i = 0; i<w.size(); i++){
    for(int j = 0; j<w2.size(); j++)
    {
        result[i+j]+=w[i]*w2[j];
    }
}
reverse(result.begin(), result.end());
return result;
}