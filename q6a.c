#include <stdio.h>
 
int main()
{
    int a=50, b=53, largestofTwo;
     
    
    largestofTwo= (a>b)?a:b;
     
  
    printf("Largest number between %d and %d is %d. ",a, b, largestofTwo);
 
    return 0;
}