#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        for(int i=0;i<n;i++){//0 1 2 3 5 4
            for(int j=i;j<n;j++){
                if(array[i]>array[j]){
                    int temp = array[i];
                    array[i] = array[j];
                    array[j]=temp;
                }
            }
        }
        int sum = 0;
        for(int i=1;i<n;i++){
           sum = sum + (array[i]-array[i-1]);
        }
        cout<<sum<<endl;
    }
}