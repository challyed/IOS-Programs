//
//  main.c
//  Triangle
//
//  Created by Edwin on 1/20/15.
//  Copyright (c) 2015 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>

float remainingAngle(angleA,angleB){
    float mathing = angleA+angleB;
    return mathing;
}


int main(int argc, const char * argv[]) {
    float angleA = 30.0;
    float angleB = 60.0;
   float angleC = remainingAngle(angleA,angleB);
    printf("The 3rd angle is %.2f\n", angleC);
    return 0;
}
