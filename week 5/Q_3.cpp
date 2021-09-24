#include<iostream>
using namespace std;

int find(int n,int a[],int m,int b[]){
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i]>b[j]){
			j++;
		}
		else if(a[i]<b[j]){
			i++;
		}
		else{
			cout<<a[i]<<" ";
			i++;
			j++;
		}
	}
}

int main(){
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	int b[m];
	for(int j=0;j<m;j++){
		cin>>b[j];
	}
	
	find(n,a,m,b);
}


