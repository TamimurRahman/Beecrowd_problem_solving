#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int a,b;
 cin>>a>>b;
 if(b%a==0 || a%b==0){
     cout<<"Sao Multiplos"<<endl;
 }else{
     cout<<"Nao sao Multiplos"<<endl;
 }
    return 0;
}