

#ifndef _NOBLE_H_
#define _NOBLE_H_
// Q1b: Create Noble class (5 points)
// Part 1: Create a child class of the Room class named 'Noble'



// Part2: Declare constructor which accepts the same 3 parameters as the parent class Room's constructor.
// Pass the 3 parameters to the super constructor of the Room class.


// Part 3: Re-declare the method displayRoom (virtual method found inside of parent class Room)

class Noble : public Room {
public:

	Noble(string roomName, int noOfRooms, libraryType libType);

	void displayRoom();

	~Noble();
};

#endif // _NOBLE_H_
