#include <stdio.h>

// User-defined function to calculate the length of the string
int stringlength(char str[])
 {
    int length = 0;
    
    for ( int i=0 ;str[length] != '\0';)
    {
        length++;
    }
    
    return length;
}

int main() {
    char str[100];  

    // Input a string from the user
    printf("Enter any string: ");
    scanf("%^\n",str);
    
    
    
    str[strcspn(str, "\n")] = '\0';

    
    int len = stringLength(str);

    printf("Length is: %d\n", len);

    return 0;
}
