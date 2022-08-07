#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the arrays size\n";
    cin>>n;
    int a[n];
    cout<<"enter the array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && temp<=a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
