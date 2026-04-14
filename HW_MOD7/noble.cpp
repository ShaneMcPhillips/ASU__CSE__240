
// Q2b: Define displayRoom() for Noble class (5 points)
// Define the function displayRoom() that you declared within the Noble class in the header file
// See expected output in question file.

// (displayList() function in the hw7.cpp should call this function.)
// Include necessary header files


#include "room.h"
#include "noble.h"

#include <iostream>

Noble::Noble(string roomName, int noOfRooms, libraryType libType) : Room(roomName, noOfRooms, libType) {}

void Noble::displayRoom() {
	// notice that no function call is needed becasue we know this is Noble class function
	cout << "\n\nRoom name: " << this->getName() << endl;
	cout << "Number of rooms: "  << this->getNo() << endl;
	cout << "Library Type: ";

	if (this->getLibraryType() == hayden) {
		cout << "Haden" << endl;
	}
	else {
		cout << "Noble" << endl;
	}
}

Noble::~Noble() {
}
