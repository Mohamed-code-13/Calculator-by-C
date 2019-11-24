// This is a calculator by C PROGRAMMING


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// important variables we will use them
int choice, first, second;
const double PI = 3.141592654;

// display the menu and what option we have
void menue()
{
    printf("Welcome to the calculator application\n");
    printf("This is the operators to use ...\n");

    printf("1. for sum (+)\n"
           "2. for sub (-)\n"
           "3. for multiply (*)\n"
           "4. for division (/)\n"
           "5. for power\n"
           "6. for reminder of division (%)\n"
           "7. for SIN\n"
           "8. for COSINE\n"
           "9. for TAN\n"
           "10. for SQRT\n"
           "11. to EXIT\n");
}

void sum()
{
    userNumbers();

    int result = first + second;

    printf("The result is: %d + %d = %d\n", first, second, result);
}


void sub()
{
    userNumbers();

    int result = first - second;

    printf("The result is: %d - %d = %d\n", first, second, result);
}


void mul()
{
    userNumbers();

    int result = first * second;

    printf("The result is: %d * %d = %d\n", first, second, result);
}


void DIV()
{
    userNumbers();

    int result = first / second;

    printf("The result is: %d / %d = %d\n", first, second, result);
}


void POW()
{
    userNumbers();

    int result = pow(first, second);

    printf("The result is: %d ^ %d = %d\n", first, second, result);
}


void reminder()
{
    userNumbers();

    int result = first % second;

    printf("The result is: %d % %d = %d\n", first, second, result);
}


void SIN()
{
    int x;
    printf("Enter degree you want to calculate SIN ...");
    scanf("%d", &x);


    printf("SIN(%d) = %.2f\n", x, sin(x * PI / 180));

}


void COS()
{
    int x;
    printf("Enter degree you want to calculate COS ...");
    scanf("%d", &x);

    printf("COS(%d) = %.2f\n", x, cos(x * PI / 180));
}


void TAN()
{
    int x;
    printf("Enter degree you want to calculate TAN ...");
    scanf("%d", &x);


    printf("TAN(%d) = %.2f\n", x, tan(x * PI / 180));
}


void SQRT()
{
    int x;
    printf("Enter number to calculate sqrt ...");
    scanf("%d", &x);


    printf("SQRT(%d) = %.2f\n", x, sqrt(x));
}


// to make user able to enter the numbers he want to make the operation
void userNumbers()
{
    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);
}


// to make user able to enter the number of operation
int userChoice()
{
    printf("Enter the number for the operator you want...");
    scanf("%d", &choice);

    return choice;
}


// check what user choose
void checkChoice()
{
    // to make the application use than once
    while (choice != 11)
    {

        int choose = userChoice();

        // the cases that the user will use
        switch (choose)
        {
        case 1:
            sum();
            break;

        case 2:
            sub();
            break;

        case 3:
            mul();
            break;

        case 4:
            DIV();
            break;

        case 5:
            POW();
            break;

        case 6:
            reminder();
            break;

        case 7:
            SIN();
            break;

        case 8:
            COS();
            break;

        case 9:
            TAN();
            break;

        case 10:
            SQRT();
            break;

        // press 11 to exit
        case 11:
            break;

        default:
            printf("INVALID INPUT !!!!!");
        }
    }


}

// the main function
int main()
{
    menue();

    checkChoice();

}
