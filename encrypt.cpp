#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main( int argc , char *argv[] )
{
	ifstream inputFile;
	ofstream keyFile ("key");
	ofstream outputFile ("output");
	char ch;
	int count = 0;
	int shiftAmt = 128;
	int shift;
	
	inputFile.open(argv[1]);
	srand( time( NULL ) );


	while( inputFile >> noskipws >> ch )
	{
		shift = (rand() % (int)(shiftAmt - ch) );
		keyFile << shift << ' ';
		outputFile << (char)(ch + shift);
		cout << (int)(ch + shift) << endl;
	}

	outputFile.close();
	keyFile.close();
	inputFile.close();
}
