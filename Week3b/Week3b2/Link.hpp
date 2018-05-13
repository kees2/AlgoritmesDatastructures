/*
 * Link.hpp
 *
 *  Created on: 7 mei 2018
 *      Author: arjon
 */

#ifndef LINK_HPP_
#define LINK_HPP_

#include <string>

class Link {
	public:
		Link();
		Link(int w);

		void print();
		int getWaarde();
		void setWaarde(int w);


		Link *volgende;
		Link *vorige;

	private:
		int waarde;

};



#endif /* LINK_HPP_ */
