#include<stdio.h>
/*Name:Kaveh Masoudinia
Section 7 Exercise 1
Date:12/03/2021(1400/09/13)*/
int fact_calc(int n);
int main() {
    int n, i = 1, f = 1;
    printf("\nEnter an integer between 0 and 9 or -1 to quit => \n");
    printf("***************************************************\n");
    scanf("%d", &n);
    while (n < 0 || n > 9) {

        if(n==-1){
            return 0;
        }
        if(n < 0 || n > 9 ){
            printf("\ninvalid entry");
            printf("\n***************************************************\n");
            return main();
        }
    }
    printf("\n***************************************************\n");
    printf("*Factorial of %d = %d*", n, fact_calc(n));
    printf("\n***************************************************\n");
    return main();
    }



int fact_calc(int n){
    if (n>=1)
        return n*fact_calc(n-1);
    else
        return 1;
}