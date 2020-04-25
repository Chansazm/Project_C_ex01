//#include <stdio.h>


int my_isalnum(char a)
{
 
    //printf("Enter any Character: ");
   // scanf("%c", &a);


//if character entered is in alphabet return 1
  
   
    {
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
            return 1;
        else 
            return 0;
    }
}


