#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   int array[3];
   cin>>a>>b>>c;
   array[0]=a;
   array[1]=b;
   array[2]=c;
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(array[i]<array[j]){
            int temp = array[j];
            array[j] = array[i];
            array[i]=temp;
        }
    }
    
   }

   printf("%d\n%d\n%d\n",array[0],array[1],array[2]);
   printf("\n%d\n%d\n%d\n",a,b,c); 
}