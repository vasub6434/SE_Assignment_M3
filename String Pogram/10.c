// Write a program in C to extract a substring from a given string

#include <stdio.h>

main() 
{
    char str[100], sstr[100]; 
    int pos, l, c = 0; 

    printf("\n\nExtract a substring from a given string:\n"); 
    printf("--------------------------------------------\n");

    printf("Input the string : ");
    gets(str);

    printf("Input the position to start extraction :");
    scanf("%d", &pos); 

    printf("Input the length of substring :");
    scanf("%d", &l); 
   
    while (c < l) {
        sstr[c] = str[pos + c - 1]; 
        c++;
    }
    sstr[c] = '\0'; 

    printf("The substring retrieved from the string is : \" %s\" \n\n", sstr); 
	
}

