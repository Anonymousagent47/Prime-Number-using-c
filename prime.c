#include<stdio.h>
int main()
{
    int num,flag=0;
    printf("Enter Number: ");
    scanf("%d",&num);

    if (num == 0 || num == 1)
    {
        flag =1;
    }

        for(int i=2;i<=num/2;++i){
            if(num%i==0)
            {
                flag =1;
                break;
            }
        }
    if (flag == 0)
    {
        printf("%d is Prime Number",num);
    }else{
        printf("%d is Not prime Number",num);
    }
    return 0;
    
}