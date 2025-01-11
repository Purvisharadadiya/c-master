#include <stdio.h>
void main()
{
    char name[10] = "hello";
    char *ptr[10];

    printf("Entr any sring:");
    scanf("%s",name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        ptr[i] = &name[i];
    }

    printf("%s", name);
}