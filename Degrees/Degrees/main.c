//
//  main.c
//  Degrees
//
//  Created by Edwin on 1/20/15.
//  Copyright (c) 2015 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//float lasttemperture;
static float lasttemperture = 50.0;

float farhrenheitFromCelsius(float cel)
{
    lasttemperture = cel;
    float fahr = cel*1.8+32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel,fahr);
    return fahr;
}

int main(int argc, const char * argv[]) {
    float freezeInC = 0;
    float freezeInF =farhrenheitFromCelsius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInF);
    printf("The last temperature converted was %f.\n", lasttemperture);
    return EXIT_SUCCESS;
}
