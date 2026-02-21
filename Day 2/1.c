#include<stdio.h>
int main(){
    int n;  
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int pos;
    scanf("%d",&pos); 
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[1+i];
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
return 0;
}