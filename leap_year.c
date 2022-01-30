#include<stdio.h>
#include<math.h>

int main()

{
    int year;
    
    printf("Please enter a year:");
    scanf("%d", &year);
    
    if(year%4==0) {
    printf("This year is a leap year:%d\n", year);
    }
    
    else {
    printf("This year is not a leap year:%d\n", year);
    }
    
    return(0);
}
