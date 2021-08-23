#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    
    cin>>t;
    while(t--){
    int n;
    
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
       
        cin>>a[i];
    }
    int key;
        cout<<"enter key: ";
        cin>>key;
    
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(a[i]-a[j]==key) || abs(a[j]-a[i]==key)){
                    c++;
                }
                else{
                	continue;
				}
            }
        }
        cout<<c<<endl;
    }
}
