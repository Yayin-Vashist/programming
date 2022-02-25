#include <stdio.h>
#include <string.h>

int main()
{
    int counter = 0;

    char *str = "Hell o World!";

    int str_len = strlen(str);
    printf("%d\n", str_len);

    char str_rev[str_len];
    int STR_LEN=strlen(str_rev);
    printf("%d\n", STR_LEN);

    for (int i = 0; i < str_len; i++)
        str_rev[(str_len-1)-i] = str[i];

    printf("%s", str_rev);

    return 0;
}