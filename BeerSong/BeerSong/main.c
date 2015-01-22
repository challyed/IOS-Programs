//
//  main.c
//  BeerSong
//
//  Created by Edwin on 1/20/15.
//  Copyright (c) 2015 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>

void singSongFor(int numberofBottles){
    if (numberofBottles == 0){
        printf("There are no more bottles of beer on the wall.\n\n");
    } else {
        printf("%d bottles of beer on the wall. %d bottles of beer.\n", numberofBottles, numberofBottles);
        int oneFewer = numberofBottles-1;
        printf("Take one down pass it around, %d bottles of beer on the wall.\n\n", oneFewer);
        singSongFor(oneFewer);
        
        printf("Put a bottle in the recycling %d empty bottles in the bin.\n",numberofBottles);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    singSongFor(4);
}
