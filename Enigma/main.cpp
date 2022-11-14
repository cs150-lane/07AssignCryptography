//**********************************************************************
// File:					main.cpp
// Author:				
// Date:					
// Class:					CS150-XX
// Assignment:		
// Purpose:				
// Hours Worked:	
//**********************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int LETTERS_IN_ALPHABET = 26;

// Default functions

void displayHeading (const char heading[]);
void getMappingData (int &numberOfMappings, char keys[]);
void openFileForRead (ifstream &inputFile, const char message[]);
void openFileForWrite (ofstream &outputFile, const char message[]);
void closeFileForRead (ifstream &inputFile);
void closeFileForWrite (ofstream &outputFile);
void constructMappingArray (char mappingArray[][LETTERS_IN_ALPHABET],
	const char keys[], int numberOfMappings);
void printMappingArray (const char mappingArray[][LETTERS_IN_ALPHABET],
	int numberOfMappings);
char decodeCharacter (char ciphertextCharacter,
	const char mappingArray[][LETTERS_IN_ALPHABET],
	int numberOfMappings);
char encodeCharacter (char plaintextCharacter,
	const char mappingArray[][LETTERS_IN_ALPHABET],
	int numberOfMappings);

int main () {

	return EXIT_SUCCESS;
}