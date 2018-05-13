/*
 * LinkedList.cpp
 *
 *  Created on: 7 mei 2018
 *      Author: arjon
 */

#include "LinkedList.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

LinkedList::LinkedList()
{
	length = 0;
	start = nullptr;
	eind = nullptr;
	huidige = nullptr;
}

void LinkedList::addLink(int w){
	Link *temp = start;

	start = new Link(w);
	start->volgende = temp;
	length++;
}

void LinkedList::printAllLink(){
	Link *temp = start;

	while(temp != nullptr){
		temp->print();
		temp = temp->volgende;
	}
}

void LinkedList::insertFirst(int value){
	Link *temp = new Link(value);

	if(start == nullptr){
		eind = temp;
	}else{
		start->vorige = temp;
	}
	temp->volgende = start;
	start = temp;
	length++;
}
void LinkedList::insertLast(int value){
	Link *temp = new Link(value);

	if(start == nullptr){
		start = temp;
	}else{
		eind->volgende = temp;
		temp->vorige = eind;
	}
	eind = temp;
	length++;
}

void LinkedList::init(){
    huidige = eind;
}

void LinkedList::insert(int value){
    Link *temp = new Link(value);
    eind = huidige->volgende;
	if(start == nullptr){
		start = temp;
	}else{
	    temp->volgende = eind;
		huidige->volgende = temp;

	}
	eind = temp;

	length++;
}

void LinkedList::undo(){
    if(start != huidige){
        huidige = huidige->vorige;
    }
}

void LinkedList::redo(){
    if(eind != huidige){
        huidige = huidige->volgende;
    }

}




void LinkedList::bubbleSort()
{
	 int outer, inner;
	 int temp, size;
	 size = length;
	 Link *link = eind;

	 for ( outer=0; outer<=size-1; outer++ )
	 {
		 for ( inner=size-1; inner>outer; inner-- )
		 {
			 if ( link->getWaarde() < link->vorige->getWaarde() )
			 {
				 temp = link->getWaarde();
				 link->setWaarde(link->vorige->getWaarde());
				 link->vorige->setWaarde(temp);
			 }
			 link = link->vorige;
		 }
		 link = eind;
	  }
}
