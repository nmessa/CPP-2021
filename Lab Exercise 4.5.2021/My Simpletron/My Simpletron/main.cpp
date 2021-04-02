//Lab Exercise 4/5/2021
//Author: nmessa
#include "Simpletron.h"

int main()
{
	Simpletron cpu;
	cpu.Execute();
	cpu.DumpRegisters();
	cpu.DumpMemory();
	return 0;
}