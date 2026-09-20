#include <iostream>
#include <vector>
#include <cstdlib>   // rand, srand
#include <ctime>     // time

using namespace std;

int main() {
    // List of questions (numbers)
    vector<int> questions = {1732, 3248, 3142, 3033, 3028, 1652, 2951, 561, 977,    //Chapter 3 Array and Matrix
                            905, 1752,                                              //Chapter 4 Basic Algorithm
                            83, 21, 203, 206,                                       //Chapter 5 Linear List
                            20, 1047, 2000, 682, 1475, 225, 2073, 232, 950,         //Chapter 6 Stack and Queue
                            1684, 459,                                              //Chapter 7 String
                            700, 938, 897, 108, 701, 1008,                          //Chapter 8 Tree I
                            617, 897, 1845, 1046, 110, 1382,                        //Chapter 9 Tree II
                            1791, 1971, 547, 841, 3286,                             //Chapter 10 Graph 
                            1512, 1832, 2965, 2744, 1, 690,                         //Chapter 11 Efficient Searching
                            451                                                     //Chapter 12 Sorting Algorithm
                        };                         

    // Random seed
    srand(time(0));

    // Random index
    int randomIndex = rand() % questions.size();

    // Display chosen question
    cout << "Your LeetCode Question is: "
         << questions[randomIndex] << endl;

    return 0;
}