#include <iostream>
using namespace std;
void main(){
    int p;
    int r;
    int t;
    float si;
    cin>>p;
    cin>>r;
    cin>>t;
    si=p*r*t/100.0;  //Integer/Integer -->Integer && Integer/Float or float/Integer-->float
    cout<<si;
    cout<<'\n';
    return ;
}