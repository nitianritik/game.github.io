#include <stdio.h>
#include <string.h>

void reverse(char *rev){
    if(*rev)
        reverse(rev+1);
      if(*rev=='\0')
      printf("\nReverded String is now : ");
      printf("%c",*rev);
}

int main()
{
    char s[100];

    printf("Enter a string to reverse\n");
    gets(s);

    // strrev(s);
    reverse(s);

    // printf("Reversed string is : ");
    // puts(s);

    int a, b;
    printf("\n\nEnter two numbers a and b to swap : \n");
    printf("a = ");
    scanf("%d", &a);
    printf("a = ");

    scanf("%d", &b);
    printf("\n\n a=%d\n b=%d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n\n a=%d\n b=%d", a, b);

    return 0;
}