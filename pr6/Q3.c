#include <stdio.h>
main()
{

    char password[30];
    int hasLetter = 0, hasDigit = 0, hasSpecial = 0;
    // user input
    printf("Create your password: ");
    scanf("%s", &password);

    // Loop through each character of the password
    int len = 0;
    for (int i = 0; password[i] != '\0'; i++, len++)

    {
        
        if (password[i] >= 'a' && password[i] <= 'z')
        {
            password[i] -= 32; // Convert lowercase to uppercase
        }
        else if (password[i] >= 'A' && password[i] <= 'Z')
        {
            password[i] += 32; // Convert uppercase to lowercase
        }

        // Check if the character is a digit
        if (password >= '0' && password <= '9')
        {
            hasDigit = 1;
        }
        // Check if the character is a special symbol
        else
        {
            hasSpecial = 1;
        }
    }

    //  condition for a weak password
    int strong;
    if (len < 6 || !hasLetter || !hasDigit || !hasSpecial)
    {
        strong = 0;
    }

    // Output the result
    if (strong)
    {
        printf("Your password is Strong.\n");
    }
    else
    {
        printf("Your password is not Strong.\n");
    }
}
