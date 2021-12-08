/*Name:Kaveh Masoudinia
Section 7 Exercise 5
Date:12/07/2021(1400/09/16)*/
#include <stdio.h>
#define STRING_LEN 80
#define STRING_S 18
#define STRING_F 10
int main(void)
 {
 char surname[STRING_LEN][STRING_S];
 char firstn[STRING_LEN][STRING_F];
 char Midname[STRING_LEN];
         printf("Enter surname,firstname and middle name:\n ");
         scanf(" %s %s %s", surname, firstn, Midname);

         printf("%.15s \t%s\t %s", surname, firstn, Midname);


 return (0);
 }