// functions.cpp
#include <iostream>
#include <cstring>
#include <limits>
#include "product.h"
using namespace std;

// For dynamic array management
void resizeInventory(Product*& inventory, int& capacity);

// Function to add a new item to the inventory
void addNewItem(Product*& inventory, int& itemCount, int& capacity) 
{
	if (itemCount == capacity) 
	{
		resizeInventory(inventory, capacity);
	}
	
	// Prompts user for input
	cout << "Enter the name of the item: ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.getline(inventory[itemCount].itemName, 50);
	
	cout << "Enter the type (DC, Marvel, others): ";
	cin.getline(inventory[itemCount].itemType, 20);
	
	cout << "Enter a description of the item: ";
	cin.getline(inventory[itemCount].itemDescription, 100);
	
	cout << "Enter the price of the item: ";
	cin >> inventory[itemCount].itemPrice;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Enter the colors of the item: ";
	cin >> inventory[itemCount].itemColors;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Enter additional info: ";
	cin.getline(inventory[itemCount].extraInfo1, 50);

	cout << "Enter additional info: ";
	cin.getline(inventory[itemCount].extraInfo2, 50);

	itemCount++;
	cout << "Item added successfully!\n";
}

void resizeInventory(Product*& inventory, int& capacity) 
{
	int newCapacity = capacity * 2; // Double to decide new size
	Product* newInventory = new Product[newCapacity];
	
	// Copy data to new array
	for (int i = 0; i < capacity; i++)
	{
		newInventory[i] = inventory[i];
	}  
	
	delete[] inventory; // Free old array
	inventory = newInventory;
	capacity = newCapacity;
	cout << "Inventory resized to " << newCapacity << ".\n";
}
