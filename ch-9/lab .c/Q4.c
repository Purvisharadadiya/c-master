#include <stdio.h>

main()
{
    char str[20];

    printf("Enter your name: ");
   
    scanf("%[^\n]", &str);

    
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (i == 0 || str[i - 1] == ' ')
        {

            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
        else
        {

            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
        }

    }
    printf("\nTitle case: %s\n", str);
}