// product.h
#ifndef PRODUCT_H
#define PRODUCT_H

struct Product {
	char itemName[50]; // Name of item
	char itemType[20]; //  DC, Marvel, ETC.
	char itemDescription[100]; // Description of item
	float itemPrice; // Price of item
	char itemColors[50]; // Colors of item
	char extraInfo1[50]; // First additional field for info
	char extraInfo2[50]; // Second field
};

#endif
