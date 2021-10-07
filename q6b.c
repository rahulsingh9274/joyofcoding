#include <stdio.h>
 
int main()
{
    
    int a=17,b=1,c=15,largestofThree;

    largestofThree = (a > b) ? (a > c ? a : c) : (b> c ? b : c);
  
    printf("Largest number among %d, %d and %d is %d.",  a, b, c, largestofThree);
 
    return 0;
}
//(17 > 1)? true (17) : false (15)
// 17