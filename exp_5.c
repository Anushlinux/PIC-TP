#include <stdio.h>
#include <ctype.h>

void toggle_case(char *str) {
 for (int i = 0; str[i] != '\0'; i++) {
   if (isupper(str[i])) {
     str[i] = tolower(str[i]);
   } else if (islower(str[i])) {
     str[i] = toupper(str[i]);
   }
 }
}

int main() {
 char str[100];
 printf("Enter a string: ");
 fgets(str, 100, stdin);

 toggle_case(str);

 printf("String with toggled case: %s", str);

 return 0;
}