//(Body Mass Index Calculator) Create a BMI calculator application that reads the user’s weight in pounds and height in inches (or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays the user’s body mass index. Also, the application should display the following information from the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float w,h,bmi;
    printf("enter a value of w\n");
    scanf("%f",&w);
    printf("enter a value of h\n");
    scanf("%f",&h);
    bmi=w/(h*h);
    printf("bmi=%f\n",bmi);

    return 0;
}
