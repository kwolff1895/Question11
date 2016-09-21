/*
 * smoothArray.cpp
 *
 *  Created on: Sep 14, 2016
 *      Author: Kimberly
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <array>
using namespace std;

#ifndef NULL
#define NULL   ((void *) 0)
#endif

void fillArray(int arrayList, int arraySize);
int filter(int arrayList, int windowSize);

int main(){
	srand(time(NULL));
	int arraySize = rand() % 30 + 20; //create a random number for the array size
	int arrayList[arraySize]; //create an array list using array size
	int windowSize = rand() %3+4;


	void fillArray(int arrayList,int arraySize);
	return arrayList, windowSize;
}

void fillArray(int arrayList, int arraySize){ //fill array with numbers in between -50 and 50
	int i;
	for (i = 0; i < arraySize; i++) {
		int randNum = rand()%100 -50;
	    arrayList[i] = randNum;
	}

}
int filter(int arrayList, int windowSize){
	int i;
	int j;
	int sum = 0;
	int arraySize = sizeof(arrayList);
	for (i=0; i<arraySize; i++){ //for every value in array
		for (j = 0; j < windowSize/2; ++j){//add each element in window of arrayList[i]
			for (j=0; j<windowSize/2; j--){
				sum = sum+arrayList[i]; //find sum
				int average = sum/(windowSize);//find average
				arrayList[i] = average;//replace value in arrayList with average value

				}
		}
	}
	return arrayList;//return new arrayList
}

