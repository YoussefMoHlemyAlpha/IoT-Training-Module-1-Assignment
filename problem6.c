#include<stdio.h>

const double LITERS_PER_GALLON = 0.264179;
double calculate_mpg(double, double);

int main(){
    
    double liters, miles;
    char repeat;

    do{
        printf("Enter the number of liters of gasoline consumed: ");
        scanf("%lf", &liters);

        printf("Enter the number of miles traveled: ");
        scanf("%lf", &miles);

        double mpg = calculate_mpg(liters, miles);

        printf("The car delivered %.2f miles per gallon.\n", mpg);

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

double calculate_mpg(double liters, double miles){
    double gallons;
    gallons = liters * LITERS_PER_GALLON;
    double mpg;
    mpg = miles / gallons;
    return mpg;
}