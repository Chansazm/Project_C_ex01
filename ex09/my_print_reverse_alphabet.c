#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{ 
     write(1, &c, 1); 
}

void my_print_reverse_alphabet() 
  
{
    
  //for (int i = 'z'; i >= 'a'; i++)
  for (char x = 'z'; x >= 'a'; x--)
    //printf("%c" ,x);
    my_putchar(x);
    
}
/*
int main()
{
    my_print_reverse_alphabet(); 
    
}
*/