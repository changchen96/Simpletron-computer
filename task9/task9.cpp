#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int loadProgram[100] = { 1007, 1008, 2007, 3008, 2109, 1109, 4300 };
class Simpletron
{
private:
	int programMemory[100];
	int *program;
	int remainingValue;
public:
	void loadProgramToMemory(int *program)
	{
		for (int counter = 0; counter < 100; counter++)
		{
			programMemory[counter] = program[counter];
		}
	}

	void disassembleProgram()
	{
		for (int counter2 = 0; counter2 < 100; counter2++)
		{
			switch (programMemory[counter2] / 100)
			{
			case 10: 
				remainingValue = programMemory[counter2] % 100;
				cout << "READ INTO " << remainingValue <<endl;
				break;
			case 11: 
				remainingValue = programMemory[counter2] % 100;
				cout << "WRITE " << remainingValue << " TO CONSOLE" << endl;
				break;
			case 20:
				remainingValue = programMemory[counter2] % 100;
				cout << "LOAD " << remainingValue << " INTO ACC" << endl;
				break;
			case 21: 
				remainingValue = programMemory[counter2] % 100;
				cout << "STORE ACC INTO " << remainingValue << endl;
				break;
			case 30: 
				remainingValue = programMemory[counter2] % 100;
				cout << "ADD " << remainingValue << endl;
				break;
			case 31: 
				remainingValue = programMemory[counter2] % 100;
				cout << "SUB " << remainingValue << endl;
				break;
			case 32:
				remainingValue = programMemory[counter2] % 100;
				cout << "MUL by " << remainingValue << endl;
				break;
			case 33: 
				remainingValue = programMemory[counter2] % 100;
				cout << "DIV by " << remainingValue << endl;
				break;
			case 40: 
				remainingValue = programMemory[counter2] % 100;
				cout << "BRANCH TO " << remainingValue << endl;
				break;
			case 41:
				remainingValue = programMemory[counter2] % 100;
				cout << "BRANCH IFNEG TO " << remainingValue << endl;
				break;
			case 42: 
				remainingValue = programMemory[counter2] % 100;
				cout << "BRANCH IFZERO TO " << remainingValue << endl;
				break;
			case 43:
				cout << "HALT" << endl;
				break;
			}

			//*program = programMemory[counter2];

		}
	}
};

int main()
{
	Simpletron simpletron;
	simpletron.loadProgramToMemory(loadProgram);
	simpletron.disassembleProgram();
	system("pause");
}