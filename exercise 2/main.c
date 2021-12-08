#include <stdio.h>
#include <string.h>
/*Name:Kaveh Masoudinia
Section 7 Exercise 2
Date:12/03/2021(1400/09/13)*/
int main(void)
{
    char mystr[50];
    char E='e',D='d',S[]={'s','s','\0'},G[]={'g','h','\0'},E2[]={'e','d','\0'};

    printf("Enter a string: ");
    scanf("%s",&mystr);
    if(mystr[strlen(mystr)-1]==E){
        strncat(mystr, &D, 1);
        printf("%s",mystr);
    }
    else if(mystr[strlen(mystr)-2]==S['s','s','\0']  ){
        strncat(mystr, &E2, 2);
        printf("%s",mystr);
    } else if(mystr[strlen(mystr)-2]==G['g','h','\0'] ) {
        strncat(mystr, &E2, 2);
        printf("%s",mystr);
    }
    else
        printf("The verb may have an irregular past tense");

    return 0;
}