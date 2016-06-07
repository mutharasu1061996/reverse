#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,count=0;
    char ch[20];
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    } 
    for(i=count-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
    return 0;
}
