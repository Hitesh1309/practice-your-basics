#include <stdio.h>
#include <string.h>
#include <ctype.h>

int passwordValidity(char *string)
{
    int passTest[4] = {0, 0, 0, 0};
    int validity = 0;

    if (strlen(string) >= 6 && strlen(string) <= 12)
    {
        for (size_t i = 0; i < strlen(string) && validity != 1; i++)
        {
            if (islower(string[i]) != 0)
                passTest[0] = 1;
            else if (isupper(string[i]) != 0)
                passTest[1] = 1;
            else if (isdigit(string[i]) != 0)
                passTest[2] = 1;
            else if (string[i] == '$' || string[i] == '#' || string[i] == '@')
                passTest[3] = 1;

            validity = passTest[0] * passTest[1] * passTest[2] * passTest[3];
        }
    }

    return validity;
}

int main()
{
    char string[30];
    printf("\nEnter the password: ");
    scanf("%[^\n]s", string);

    if (passwordValidity(string) == 1)
        printf("The pasword is valid");
    else
        printf("The password is invalid");
}