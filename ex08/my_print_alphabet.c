#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{ 
     write(1, &c, 1); 
}

void my_print_alphabet() 
{
    
for (char x = 'a'; x <= 'z'; x++)
    my_putchar(x);
my_putchar('\n');
}
/*
int main()
{
    my_print_alphabet();
    
}
*/