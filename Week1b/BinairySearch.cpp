/*
 * BinairySearch.cpp
 *
 *  Created on: 19 apr. 2018
 *      Author: arjon
 */

#include "BinairySearch.hpp"
#include <iostream>
using namespace std;


BinairySearch::BinairySearch(){
    numElements = 7;
}

void BinairySearch::print(){
    for(int i = 0 ; i < numElements ; i++){
        cout << "Index: " << i << ", waarde: " << numArr[i] << endl;
    }
}

int BinairySearch::findOpgave3(int searchkey){
    int lowerBound = 0;
    int upperBound = 7 - 1;

    int curIn = 0;
    while(true){
        curIn = (lowerBound + upperBound) / 2;
        if(numArr[curIn] == searchkey){
        	return curIn;
        }else if(lowerBound > upperBound){
        	cout << "Value: " << searchkey << ", lowerbound: " << lowerBound << ", upperbound: " << upperBound << endl;
        	return numElements;
        }else{
        	if(numArr[curIn] < searchkey){
        		lowerBound = curIn + 1;
        	}else{
        		upperBound = curIn - 1;
        	}
        }
    }
}

int BinairySearch::findOpgave4(int searchkey){
	int lowerBound = 0;
    int upperBound = 7 - 1;

    int curIn = 0;
    while(true){
    	curIn = (lowerBound + upperBound) / 2;
	    if(numArr[curIn] == searchkey){
	      	return curIn;
	    }else if(lowerBound > upperBound){
	      	//cout << "Value: " << searchkey << ", lowerbound: " << lowerBound << ", upperbound: " << upperBound << endl;
	    	if(searchkey > 0){
	    		searchkey = searchkey - 1;
	    		lowerBound = 0;
	    		upperBound = 7 - 1;
	    	}else{
	    		return numElements;
	    	}
	    }else{
	       	if(numArr[curIn] < searchkey){
	       		lowerBound = curIn + 1;
	       	}else{
	       		upperBound = curIn - 1;
	       	}
	    }
	}
    return 0;
}

void BinairySearch::moveElements(int index, int value){
	index = index + 1;
	for(int i = numElements-1 ; i >= index ; i--){
		cout << i << endl;
		numArr[i+1] = numArr[i];
	}

	numArr[index] = value;
	numElements++;
}

