/**************************************************************************************************
*       My is Negative                                                                            *
*       by Chansa Chishimba                                                                       *
*       The program returns 1 or 0 depending on the integer's sign entered as a parameter         *
**************************************************************************************************/

//#include <stdio.h>

int my_is_negative(int nbr)
{
    if (nbr < 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

/* Tests
int main()
{
    
    //  4 --> 1
    // -4 --> 0
    printf("My is negative : %d  \n", my_is_negative(4));
    printf("My is negative : %d  \n", my_is_negative(0));
    printf("My is negative : %d  \n", my_is_negative(-4));

}

*/