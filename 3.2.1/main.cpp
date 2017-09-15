/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bvance
 *
 * Created on September 15, 2017, 12:30 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(void) {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 }; 
    int n = sizeof(vector) / sizeof(vector[0]);
    int lowest;
    int i;
    int *ptr = vector;
    lowest = *ptr;
    while(i < n)
    {
        i++;
        if(*ptr < lowest)
        {
            lowest = *ptr;
        }
        ptr++;
    }
    cout << lowest << endl;
    return 0;
}

