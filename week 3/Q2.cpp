#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

 void swap(int *x,int *y){
    
    int temp=*x;
     *x=*y;
     *y=temp;
 }
int selection_sort(int a[],int n){
    int min,i,j,temp;
    for(i=0;i<n;i++){
        
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
            
        }
         
        swap(&a[min],&a[i]);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    selection_sort(a,n);
    print(a,n);
}
