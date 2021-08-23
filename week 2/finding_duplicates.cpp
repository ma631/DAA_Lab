#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,key;
        cin>>n;
        int a[n];
        cout<<"elements in array"<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"enter key"<<endl;
        int c=0;
        cin>>key;
        for(int i=0;i<n;i++){
            if(a[i]==key){
                c++;
            }
            else{
                continue;
            }
        }
        if(c==0){
            cout<<"element not found"<<endl;
        }
        else{
        cout<<key <<" "<<c<<endl;
        }
    }
}
