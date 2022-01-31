// Copyright (c) 2022 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 27, 2022
// This program uses a for loop to
// generate 10 random numbers in a list
// and then calculate the average and
// display it.

#include <iostream>
#include <random>

int main() {
    // declare constants
    const float MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // initialize sum and counter
    int loopCounter = 0;
    int sum = 0;

    // declare variables
    float average;
    int listOfInts[10];

    // display opening message
    std::cout << "This program generates a list of 10 random ";
    std::cout << "numbers between 0 and 100 and then "\
             " it calculates the average.";
    std::cout << std::endl;
    std::cout << std::endl;

    // display random numbers and calculate average
    for (loopCounter = 0; loopCounter < MAX_ARRAY_SIZE; loopCounter++) {
        // declare random number
        int randomNumber;

        std::random_device rseed;


        // mersenne_twister
        std::mt19937 rgen(rseed());

        // [0, 100]
        std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);

        randomNumber = idist(rgen);

        // declare array variable
        listOfInts[loopCounter] = randomNumber;
        sum = sum + listOfInts[loopCounter];
        std::cout << listOfInts[loopCounter]
                 << " added to the list at position ";
        std::cout << loopCounter;
        std::cout << std::endl;
    }

    for (loopCounter = 0; loopCounter < 1; loopCounter++) {
        average = sum / MAX_ARRAY_SIZE;
        std::cout << std::endl;
        std::cout << "The average is: " << average;
    }
}
