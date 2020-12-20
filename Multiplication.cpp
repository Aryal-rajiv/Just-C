#include<stdio.h>
#include<conio.h>
int mult (int a, int b);

void main()
    {
        int x,y;
        printf("Enter two numbers\n");
        scanf("%d%d",&x,&y);
        printf("%d*%d=%d,x,y,mult(x,y));
        getch();

    }
    int mult(int a,int b)
    {
        if(b==1)
        return a;
        else
        return (a+mult(a,b-1);
    }