//Lab Exercise 3.1.2021 Problem 3
//Author: 

//This program is a driver program to test the Car and DragRace classes
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "car.h"
#include "dragrace.h"

int main()
{
	//Initialize random number generator
	srand(time(0));

	//Create 2 car objects
	Car joe(2018, "Ferrari", rand()%20 + 60); 
	Car jack(2017, "Toyota", rand()%20 + 60);

	//Create a DragRace object
	DragRace myRace(joe, jack);

	//Race
	myRace.race();
	return 0;
}

//Sample Output
//7     7
//15     16
//24     26
//35     38
//47     51
//60     64
//76     80
//92     98
//109     117
//126     138
//147     159
//170     180
//193     204
//219     226
//249     250
//275     281
//306     307
//333     338
//366     368
//402     400
//438     436
//470     477
//508     519
//547     564
//585     607
//631     652
//669     691
//716     730
//768     774
//810     828
//864     877
//908     934
//953     980
//1013     1026
//1067     1085
//1119     1134
//1184     1187
//1246     1246
//1298     1298
//1368     1364
//Car 1 wins