/** tylermsa
 * EFGANG
 * v 2022.12.3
 */
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MIN 1
#define MAX 1001
#define SIZE 100

#define FOREVER for(;;)


int main(int argc, char **argv)
{
    /* define all vars */
    int num1, num2, seed, attempts;
    char kbIn[SIZE]; 
    
    if(argc != 2)
    {
        printf("Preferred Usages:\n./efgang <int seed>\n./efgang <int seed> <int mode>\n\n");
        exit(-1);
        
    } /* init error */
    
    seed = atoi(argv[1]);
    srand(seed);
    
    num1 = rand()%(MAX - MIN), num2 = -1, attempts = 0;
    
    /* FOREVER */
    FOREVER
    {
        num2 = -1;
        attempts++;
        
        /* Ask for guess */
        printf("\n\nEnter a number from 1 to 1000 >> ");
        fgets(kbIn, SIZE, stdin);
        sscanf(kbIn, "%i", &num2);
        
        /* Check for the correct number */
        if(num2 == num1)
        {
            break;
        }
        else if(num2 == -1)
        {
            printf("Please enter a valid integer.");
        }
        else if(num2 > num1)
        {
            printf("That number is too high!");
        }
        else if(num2 < num1)
        {
            printf("That number is two low!");
        }
        
        
    } /* forever loop */
    
    printf("\aYou found the number in %i attempts!\n\n", attempts);
    
    return 0;
    
} /* main */
