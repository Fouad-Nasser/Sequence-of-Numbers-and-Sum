#include<iostream>
using namespace std;

int main(){
    int n,m,min,max,sum;
        cin>>n>>m;

    while(n>0 && m > 0){
        sum=0;
        min = n<m?n:m;
        max = n>m?n:m;

        for (int i = min; i <= max; i++)
        {
            sum += i;
            cout<<i<<' ';
        }

        cout<<"sum ="<<sum<<endl;
        cin>>n>>m;
    }
    

    return 0;
}
