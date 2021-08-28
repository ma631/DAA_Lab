#include<iostream>
using namespace std;

int duplicate(int a[],int n){
    int flag;
    for(int i=0;i<n-1;i++){
        
        if(a[i]==a[i+1]){
            flag=1;
            break;
        }
        
    }
    if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}

void sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=a[j];
            }
            
        }
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a,n);
    duplicate(a,n);
}
