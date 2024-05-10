// Jared Hubbard; jaredhub@pdx.edu
// Superhero Gift Tracker for BoxLunch
// Will allow user to enter in items, display all items, query for x item, and save the information in an external data file.
// main.cpp
#include <iostream>
#include <cstring>
#include <limits>
#include "product.h"
using namespace std;

extern void addNewItem(Product*& inventory, int& itemCount, int& capacity);

int main()
{
	int capacity = 20;
	int itemCount = 0;
	Product* inventory = new Product[capacity];

	addNewItem(inventory, itemCount, capacity);

	delete[] inventory;

	return 0;
}

