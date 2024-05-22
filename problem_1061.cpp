#include<bits/stdc++.h>
using namespace std;
int main(){
    string dia1,temp,dia2;
    int dayStart,dayEnd;
    cin>>dia1>>dayStart;
    int xs,ys,zs;
    cin>>xs>>temp>>ys>>temp>>zs;
    cin>>dia2>>dayEnd;
    int xe,ye,ze;
    cin>>xe>>temp>>ye>>temp>>ze;
    int d,h,m,s;
    d=dayEnd-dayStart;
    h=xe-xs;
    m=ye-ys;
    s=ze-zs;
    if(s<0){
        s=s+60;
        m--;
    }
    if(m<0){
        m=m+60;
        h--;
    }
    if(h<0){
        h=h+24;
        d--;
    }
    cout<<d<<" dia(s)"<<endl;
    cout<<h<<" hora(s)"<<endl;
    cout<<m<<" minuto(s)"<<endl;
    cout<<s<<" segundo(s)"<<endl;

}