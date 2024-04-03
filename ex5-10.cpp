#include <stdio.h>

int main()
{
    int a;
    int n1=-1;
    int n2=-1;
    int arr[30]= {0};
    
    for(int i=0;i<28;i++){
        scanf("%d",&a);
        arr[a-1]=1;
    }
    
    for(int i=0;i<30;i++){
        if(arr[i]==0){
            if(n1==-1){
                n1=i+1;
            }else{
                n2=i+1;
            }
        }
    }
    
    printf("%d\n",n1);
    printf("%d\n",n2);
    
    return 0;
}