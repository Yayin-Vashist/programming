#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    for (int i = 0; i < 100; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }

    for (int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }
    return 0;
}