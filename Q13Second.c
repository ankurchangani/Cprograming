#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];

    printf("Enter the name") ;
    fgets(name, sizeof(name), stdin);

    int length;

     name[strcspn(name, "\n")] = '\0';
     
    length = strlen(name);

    printf("Length of %s = %d\n",name,length);

    return 0;
}