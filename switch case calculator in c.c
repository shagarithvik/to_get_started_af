#include<stdio.h>
void main()
{
    int n1,n2,res,ch,i;
    do{
        printf("enter n1,n2 values");
        scanf("%d %d",&n1,&n2);
        printf("1.addition\n2.sub\n3.mul\n4.div\n");
        printf("enter from 1 to 4");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : res=n1+n2;break;
            case 2 : res=n1-n2;break;
            case 3 : res=n1*n2;break;
            case 4 : res=n1/n2;break;
            default: printf("enter valid number");
        }
        printf("arop=%d",res);
        printf("enter 0 for contiinuation else 1 to stop");
        scanf("%d",&i);
    }
    while(i==0);
}

