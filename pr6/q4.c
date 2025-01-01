#include <stdio.h>
#include <string.h>

main()
{
    char email[50], password[50];

    //  user for email and password input
    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter your password: ");
    scanf("%s", password);

    // Predefined email and password for comparison
    char correctEmail[] = "admin@gmail.com";
    char correctPassword[] = "123456";

    // Compare email and password
    if (strcmp(email, correctEmail) == 0 && strcmp(password, correctPassword) == 0)
    {
        printf("Login Successful...\n");
    }
    else
    {
        printf("Login Failed. Incorrect email or password.\n");
    }
}
