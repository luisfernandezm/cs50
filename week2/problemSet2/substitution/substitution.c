#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) {

   // Validate if user provided a key
   if (argc != 2) {
        printf("./substitution key\n");
        return 1;
    }

   // Asign key to variable for better managment
   string key = argv [1];

   // Validate if key is 26 characters long
   if (strlen(key) != 26) {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

   // Create a counter for repeated characters
   int repeated = 0;

   for (int i = 0; i < strlen(key); i++) {

      for (int n = 0; n < strlen(key); n++) {

         // Validate if there is a character twice in variable key
         if (tolower(key [n]) == tolower(key[i])) {
            repeated ++;

            if (repeated > 26) {
               printf("Key must not contain repeated characters.\n");
               return (1);
            }
         }
      }

      // Validate that all characters from variable text are aphabetic characters
      if (!isalpha(key[i])) {
         printf("All characters must be alphabetic characters.\n");
         return(1);
      }

   }

   // Prompt user for word to encrypt
   string plaintext = get_string("plaintext: ");
   int ciphertext;

   // Validate which character is going to take as encrypted text depending on user text input and save it into same variable
   for (int i = 0; i < strlen(plaintext); i++) {
      ciphertext = 0;

      if (islower(plaintext[i])) {
         ciphertext = plaintext [i] - 97;
         plaintext [i] = tolower(key[ciphertext]);
      } else if (isupper(plaintext[i])) {
         ciphertext = plaintext [i] - 65;
         plaintext [i] = toupper(key[ciphertext]);
      }
   }
   printf("ciphertext: %s\n", plaintext);
}