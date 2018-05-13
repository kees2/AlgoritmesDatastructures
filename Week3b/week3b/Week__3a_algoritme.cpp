//============================================================================
// Name        : Week__3a_algoritme.cpp
// Author      : Arjon Arts
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include "LinkedList.hpp"
#include "Link.hpp"

int main() {
	LinkedList list;
	srand((unsigned)time(0));
	for(int i = 0 ; i < 50000 ; i++){
		list.insertFirst((rand()%250)+1);
	}
	list.bubbleSort();
	list.printAllLink();

	return 0;
}


