#include <stdio.h>

int main()
{
    int num[10];
    
    for(int i = 0; i<10;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]<0 || num[i]==0)
        {
            num[i]=1;
        }
    }
    
    for(int i = 0; i<10;i++){
        printf("X[%d] = %d\n",i,num[i]);
    }
    

    return 0;
}
