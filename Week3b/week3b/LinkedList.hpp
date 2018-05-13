/*
 * LinkedList.hpp
 *
 *  Created on: 7 mei 2018
 *      Author: arjon
 */

#ifndef LINKEDLIST_HPP_
#define LINKEDLIST_HPP_

#include <string>
#include "link.hpp"

class LinkedList {
	public:
		LinkedList();
		void addLink(int w);
		void printAllLink();

		void bubbleSort();

		void insertFirst(int value);
		void insertLast(int value);

		Link *start;
		Link *eind;
		Link *huidige;
	private:
		int length;
};



#endif /* LINKEDLIST_HPP_ */
