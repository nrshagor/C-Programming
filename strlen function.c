#include<stdio.h>
unsigned int my_strlen(char *p); // function declaration

int main()
{
    int len;


    char destination[30];

    printf("Enter your dream destination: ");
    gets(destination);


    len = my_strlen(destination);

    printf("Your dream destination %s has %d characters in it", destination, len);


    return 0;
}

// definition of my_strlen() function

unsigned int my_strlen(char *p)
{
    unsigned int count = 0;

    while(*p!='\0')
    {
        count++;
        p++;
    }
    return count;
}
