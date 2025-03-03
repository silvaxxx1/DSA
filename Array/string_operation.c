// Some string operations in C
// 1- Length of a string 
// 2- Convert to uppercase 
// 3- Convert to lowercase
// 4- Concatenate two strings
// 5- Compare two strings 
// 6- string reverse 
// 7- string copy

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], upper_str[100], lower_str[100];
    int i = 0, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // 1- Find length
    while (str[i] != '\0' && str[i] != '\n') { // Ignore newline from fgets
        i++;
    }
    length = i;
    printf("\nLength of the string is: %d", length);

    // 2- Convert to uppercase
    i = 0; // Reset i
    while (str[i] != '\0' && str[i] != '\n') { // Ignore newline from fgets
        if (str[i] >= 'a' && str[i] <= 'z') {
            upper_str[i] = str[i] - 32;
        } else {
            upper_str[i] = str[i];
        }
        i++;
    }
    upper_str[i] = '\0'; // Null terminate the string

    printf("\nThe string in upper case is: %s", upper_str);

// 3-convert to lowercase
    i = 0; // Reset i
    while (str[i] != '\0' && str[i] != '\n') { // Ignore newline from fgets
        if (str[i] >= 'A' && str[i] <= 'Z') {
            lower_str[i] = str[i] + 32;
        } else {
            lower_str[i] = str[i];
        }
        i++;
    }
    lower_str[i] = '\0'; // Null terminate the string

    printf("\nThe string in upper case is: %s\n", lower_str);

// 4- Concatenate two strings
int j = 0 ;
i = 0;

while (upper_str[i] != '\0') 
    i ++;
while (lower_str[j] != '\0')
{
    upper_str[i] = lower_str[j];
    i++;
    j++;

}

upper_str[i] = '\0';
printf("\nThe concatenated string is: %s\n", upper_str);

// 5- Compare two strings (USING <srting.h> library)
i = 0 , j = 0;
char str1[100] , str2[100];

printf("Enter the first string: ");
gets(str1);

printf("Enter the second string: ");
gets(str2);

strcmp(str1 , str2) == 0 ? printf("The strings are equal") : printf("The strings are not equal");

// 6- reverse a string

i = 0 , j = 0;

j = strlen(upper_str) - 1;

while (i < j)
{
    char temp = upper_str[i];
    upper_str[i] = upper_str[j];
    upper_str[j] = temp;
    i++;
    j--;
}
printf("\nThe reversed string is: %s\n", upper_str);

// 7- Copy one string to another
i = 0 , j = 0;
char new_str[100];

while (upper_str[i] != '\0')
{
    new_str[j] = upper_str[i];
    i++;
    j++;
}
new_str[j] = '\0';
printf("\nThe copied string is: %s\n", new_str);

// same as strcpy

char new_str2[100];
strcpy(new_str2 , str);
printf("\nThe copied string is: %s\n", new_str);

    return 0;
}
