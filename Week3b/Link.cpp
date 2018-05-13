/*
 * Link.cpp
 *
 *  Created on: 7 mei 2018
 *      Author: arjon
 */

#include "Link.hpp"
#include <iostream>
using namespace std;


Link::Link(){
	volgende = nullptr;
	vorige = nullptr;
	waarde = 0;
}

Link::Link(int w){
	waarde = w;
	volgende = nullptr;
	vorige = nullptr;
}

void Link::print(){
	cout << "Waarde: " << waarde << "\n";
}

int Link::getWaarde(){
    return waarde;
}

void Link::setWaarde(int w){
	waarde = w;
}

