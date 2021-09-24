#include<bits/stdc++.h>
using namespace std;

int sum(int n,int a[],int key){
	sort(a,a+n);
	int l=0;
	int r=n-1;
	while(l<r){
		if(a[l]+a[r]>key){
			r--;
		}
		else if(a[l]+a[r]<key){
			l++;
		}
		else if(a[l]+a[r]==key){
			cout<<a[l]<<" "<<a[r]<<",";
			l++;
			r--;
		}
		else{
			cout<<"No such pair exist";
		}
	}
}

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
		cin>>key;
		
		sum(n,a,key);
	}
}
