#include<stdio.h>
int main()
{
    char name[10];
    printf("enter the user name");
    scanf("%s",&name);
    if (name== "PBM")
    {
        printf("welcome user");
    }
    else
    {
        printf("access denied");
    }
}