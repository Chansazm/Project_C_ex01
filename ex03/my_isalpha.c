#include <stdio.h>
#include <ctype.h>

int my_isalpha(char a) 

{
    
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
        return 1;
    else 
        return 0;
    

  
}

/* Tests
int main()
{
    
    //  4 --> 1
    
    printf(" is a letter/digit : %d  \n", my_isalpha(0));
 

}

*/