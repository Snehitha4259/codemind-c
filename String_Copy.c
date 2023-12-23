#include<stdio.h>
int main()
{
    char str[100],str1[100],i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++){
        str1[i]=str[i];
    }
    printf("%s",str);
}