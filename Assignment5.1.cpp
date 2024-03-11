#ifndef FIND_CALCULATION_H
#define FIND_CALCULATION_H

// Function to compute the square root of a number
double find_Sqrt(double number) {
    double error = 0.000001; //define the precision of your result
    double s = number;
    
    // Babylonian method for square root
    while ((s - number / s) > error) { // to ensure the precision of the result
        s = (s + number / s) / 2;
    }
    return s;
}

// Function to compute the cube of a number
double find_Cube(double number) {
    return  number * number * number;
}

// Function to compute a number raised to a power (naive implementation)
double find_Pow(double base, double exponent) {
    double result = 1;
    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }
    return result;
}

#endif // FIND_CALCULATION_H
