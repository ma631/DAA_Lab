#include <stdio.h>
int find_element(int a[],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key){
            break;
        }
    }
    if(i<n){
        printf("element found at %d index",i);
    }
    else {
        printf("element not found");
    }
}
int main() {
    int t,n,a[n],key;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        printf("enter the element to be found: ");
        scanf("%d",&key);
        find_element(a,n,key);
    }
}
