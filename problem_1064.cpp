#include<bits/stdc++.h>
using namespace std;
int main(){
    
    float array[6],positive=0;
    float sum=0;
    for(int i=0;i<6;i++){
        cin>>array[i];
        if(array[i]>0){
            positive++;
            sum = sum+array[i];

        }

    }
    float avg = sum/positive;
    cout<<positive<<" valores positivos"<<endl;
printf("%.1f",avg);
    
}