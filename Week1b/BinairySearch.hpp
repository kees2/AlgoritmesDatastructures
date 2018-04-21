/*
 * BinairySearch.hpp
 *
 *  Created on: 19 apr. 2018
 *      Author: arjon
 */

#ifndef BINAIRYSEARCH_HPP_
#define BINAIRYSEARCH_HPP_

#include <iostream>
using namespace std;

class BinairySearch {
    public:
        BinairySearch();
        int findOpgave3(int searchkey);
        int findOpgave4(int searchkey);
        void moveElements(int index, int value);
        void print();
    private:
        int numElements;
        int numArr[9] = {0,3,6,10,15,21,28};
    protected:
};



#endif /* BINAIRYSEARCH_HPP_ */
