/*
Average grade

An easy way to understand how well the students performed at this year’s course is to compute the average of their final grades. If it is higher that the average for last year, that means the course was easier than last year.

Given an array with all final grades for a course

Your task is to

    write a function that computes the average of all the grades in the array and prints this number to standard output (stdout)
    the result must be rounded downwards to the nearest integer (e.g. both 7.1 and 7.9 are rounded to 7)

Note that your function will receive the following arguments:

    grades
        which is the list of grades, represented as integer numbers

Data constraints

    the length of the array given as input will not exceed 1000 elements
*/


#include <iostream>
#include <vector>

using namespace std;

void compute_average_grade(const vector<int> &grades) {
    int total = 0;
    int avg;
    std::vector<int> copy = grades;
    
    for(int i = 0; i < copy.size(); i++){
         total += copy[i];
    }
    avg = total/copy.size();    
    cout << avg;    
}
