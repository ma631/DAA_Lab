#include<iostream>
using namespace std;
int find_element(int a[],int n,int key){
    int i;
    for(i=1;i<=n;i++){
        if(a[i]==key){
            break;
        }
    }
    if(i<n){
        cout<<"present "<<i<<endl;
    }
    else {
        cout<<"not present "<<endl;
    }
}
int main() {
    int t,n,key;
   cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        cout<<"enter the element to be found: "<<endl;
        cin>>key;
        find_element(a,n,key);
    }
}
