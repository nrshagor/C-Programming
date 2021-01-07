#include<stdio.h>
int main()
{
    char s[100];
    printf(" This program change your Sentence in uppercase letters. Enter your Sentence\n");
    gets(s);
    int i,j;
    j=100;
    for(i=0;i<j;i++){
        if(s[i]>=97 && s[i]<= 122){
            s[i]='A'+(s[i]-'a');
        }
    }
    printf("%s\n",s);
}
