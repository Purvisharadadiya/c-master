#include <stdio.h>
main()
{
    char str[20];
    // user input

    printf("Enter any number ");
    scanf("%[^\n]", &str);

    // Frequency logic
    int count;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count = 1;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = '0';
            }
        }
       // output  if fequency
        if (str[i] != '0')
        {
            printf("%c<==%d\n\n", str[i], count);
        }
    }
}