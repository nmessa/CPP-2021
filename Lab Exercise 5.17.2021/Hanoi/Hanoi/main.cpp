//Lab Exercise 5.17.2021 Problem 1
//Author: 

#include <iostream>
using namespace std;

void hanoi(int, int, int, int);

int main()
{
    hanoi(4, 1, 2, 3);
    return 0;
}

//Recursive function that solves Tower of Hanoi problem in 2^depth - 1 moves
void hanoi(int depth, int from, int to, int alternate)
{
    //Add code here


}

//Output
//Move ring 1 from pole 1 to pole 3
//Move ring 2 from pole 1 to pole 2
//Move ring 1 from pole 3 to pole 2
//Move ring 3 from pole 1 to pole 3
//Move ring 1 from pole 2 to pole 1
//Move ring 2 from pole 2 to pole 3
//Move ring 1 from pole 1 to pole 3
//Move ring 4 from pole 1 to pole 2
//Move ring 1 from pole 3 to pole 2
//Move ring 2 from pole 3 to pole 1
//Move ring 1 from pole 2 to pole 1
//Move ring 3 from pole 3 to pole 2
//Move ring 1 from pole 1 to pole 3
//Move ring 2 from pole 1 to pole 2
//Move ring 1 from pole 3 to pole 2