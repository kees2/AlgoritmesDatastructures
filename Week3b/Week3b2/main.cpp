#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include "LinkedList.hpp"
#include "Link.hpp"

int main() {
	LinkedList list;
	srand((unsigned)time(0));
	cout << "hallo" << endl;
	for(int i = 0 ; i < 5 ; i++){
		list.insertFirst((rand()%2));
	}

	list.printAllLink();

	cout << "<============>" << endl;

	list.init();
	list.undo();



	for(int i = 0; i < 10; i++){
        list.insert(1);
	}

	list.printAllLink();


	return 0;
}


