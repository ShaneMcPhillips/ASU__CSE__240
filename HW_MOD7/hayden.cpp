
// Q2a: Define displayRoom() for Hayden class (5 points)
// Define the function displayRoom() that you declared within the Hayden class in the header file
// See expected output in question file.

// (displayList() function in hw7.cpp should call this function.)
// Include necessary header files

#include "room.h"
#include "hayden.h"

#include <iostream>

Hayden::Hayden(string roomName, int noOfRooms, libraryType libType) : Room(roomName, noOfRooms, libType) {}

void Hayden::displayRoom() {
	// notice that no function call is needed becasue we know this is Hayden class function
	cout << "\n\nRoom name: " << this->getName() << endl;
	cout << "Number of rooms: " << this->getNo() << endl;
	cout << "Library Type: ";

	if (this->getLibraryType() == hayden) {
		cout << "Haden" << endl;
	}
	else {
		cout << "Noble" << endl;
	}
}

Hayden::~Hayden() {

}
