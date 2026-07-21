#include <stdio.h>
int main()
{
    char str[100];
    int j,i,len=0;
    char temp;
    printf("enter the string:");
    scanf("%s",str);
    while(str[len]!='\0') {
        len++;
    }
    for(i=0,j=len-1;i<j;i++,j--) {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("reverse string=%s\n",str);
    return 0;
}