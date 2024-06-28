/* Write a program in C to count the total number of vowels or consonants in a
string. */

#include <stdio.h> 
main()
{ 
    // Declare the variable vowels and consonant 
    int vowels = 0, consonants = 0; 
 
    int i; 
    char ch; 
 
    // Take each character from this string to check 
    for (i = 0; ch[i] != '\0'; i++) { 
 
        ch = str[i]; 
 
        // If this character is a vowel, 
        // increment the count of vowels 
        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U') 
            vowels++; 
 
        // If this character is a space 
        // skip it 
        else if (ch == ' ') 
            continue; 
 
        else
            consonants++; 
    } 
 
    printf("\nVowels: %c", vowels); 
    printf("\nConsonants: %c", consonants); 
} 
