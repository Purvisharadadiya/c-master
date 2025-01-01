#include <stdio.h>
main()
{
    char str[20];
    char rev[20];
    // user input

    printf("Enter any string:");
    scanf("%[^\n]", &str);
    // Loop through each character of the len
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++, len++)
    {

        // Convert uppercase to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    // string revers

    int n = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        rev[n++] = str[i];
    }

    // check condition
    int cmp = 0;

    for (int i = 0; str[i] != '\0'; i++, len++)

    {
        if (str[i] == rev[i])
        {
            cmp = 0;
        }
        else
        {
            cmp = 1;
            break;
        }
    }
    // output of the pelindorime number
    if (cmp == 0)
    {
        printf("it's a pelindorime number:");
    }
    else
    {
        printf("it's a  not pelindorime number:");
    }
    printf("%s", str);
}
