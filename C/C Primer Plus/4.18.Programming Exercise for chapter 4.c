//4.81.Programming Exercise chapter 4.c:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <float.h>
#define LITRE 3.785
#define KM 1.609

// //Program 4.8.1:
// //Print firstname and lastname:
// int main(void)
// {
//     char first_name[20] = {0};
//     char last_name[20] = {0};
//     puts("Please enter your firstname and lastname:\n");
//     scanf("%s %s", first_name, last_name);
//     printf("%s, %s", first_name, last_name);

//     return 0;
// }

// //Program 4.8.2:
// //operate username:
// int main(void)
// {
//     char user_name[20] = {0};

//     puts("Please enter your username:\n");
//     scanf("%s", user_name);
//     printf("a. \"%s\"\n", user_name);
//     printf("b. \"%20s\"\n", user_name);
//     printf("c. \"%-20s\"\n", user_name);
//     printf("d. %*s\n", (int)strlen(user_name) + 3, user_name);


//     return 0;
// }


// //Program 3.8.4:
// //format %f, %e:
// int main(void)
// {
//     float num = 0;
//     puts("Enter a float number");
//     scanf("%f", &num);
//     printf("The input is %.1f or %.1e\n", num, num);
//     printf("The input is %+.3f or %.3E\n", num, num);

//     return 0;
// }


// //Program 4.8.4:
// //height and name:
// int main(void)
// {
//     double height = 0;
//     char name[20] = {0};

//     puts("Please enter your name");
//     scanf("%s", name);
//     puts("Please enter your height");
//     scanf("%lf", &height);
//     printf("%s, you are %.3f feet tall\n", name, height);

//     return 0;
// }



// //Program 4.8.5:
// //Speed:
// int main(void)
// {
//     float speed = 0.0;
//     puts("Please input your network speed:");
//     scanf("%f", &speed);
//     float file_size = 0.0;
//     puts("Please input your file size:");
//     scanf("%f", &file_size);
//     printf("At %.2f megabits per second, a file of %.2f megabytes\n", 
//         file_size / speed, file_size);
//     printf("downloads in %.2f seconds.\n", speed);

//     return 0;
// }



// //Program 4.8.6:
// //format name:
// int main(void)
// {
//     puts("Please enter your firstname:");
//     char first_name[20] = {0};
//     scanf("%s", first_name);
//     puts("Please enter your last_name:");
//     char last_name[20] = {0};
//     scanf("%s", last_name);
//     printf("%s %s\n", first_name, last_name);
//     printf("%*d %*d\n", (int)strlen(first_name), (int)strlen(first_name), 
//         (int)strlen(last_name), (int)strlen(last_name));
//     printf("%s %s\n", first_name, last_name);
//         printf("%-*d %-*d\n", (int)strlen(first_name), (int)strlen(first_name), 
//         (int)strlen(last_name), (int)strlen(last_name));

//     return 0;
// }



// //Program 4.8.7:
// //double float
// int main(void)
// {
//     double var1 = 1.0 / 3.0;
//     float var2 = 1.0 / 3.0;
//     printf("var1 = %.6f\n", var1);
//     printf("var1 = %.12f\n", var1);
//     printf("var1 = %.16f", var1);
//     printf("var2 = %.6lf\n", var2);
//     printf("var2 = %.12lf\n", var2);
//     printf("var2 = %.16lf\n", var2);
//     printf("%d\n", FLT_DIG);
//     printf("%d\n", DBL_DIG);

//     return 0;
// }


//Program 4.8.8:
//operate:
int main(void)
{
    float mileage;
    float consume;
    puts("Please enter mileage in mile: ");
    scanf("%f", &mileage);
    puts("Please enter consume in gallon: ");
    scanf("%f", &consume);
    printf("mileage / consume = %.1f\n", mileage / consume);
    printf("l/100km = %1.f\n", consume * LITRE / 100 * mileage);


    return 0;
}