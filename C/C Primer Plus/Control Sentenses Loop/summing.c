// #include <stdio.h>

// int main(void)
// {
//     long num;
//     long sum = 0L;
//     int status;

//     printf("Please enter an integer to be summed ");
//     printf("(q to quit: )");
//     status = scanf("%ld", &num);
//     while (status == 1)             //Determine whether two values are equa
//     {
//         sum = sum + num;
//         printf("Please enter next integer (q to quit): ");
//         status = scanf("%ld", &num);
//     }
//     printf("Those integers sum to %ld.\n", sum);

//     return 0;
// }


//Now I will slowly modify the codes
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;

    printf("Please enter an integer to be summed(q to quit): ");
    while (1 == scanf("%ld", &num))     //I can put the constant on the left.
        sum += num;
    printf("%ld\n", sum);
    
    return 0;
}