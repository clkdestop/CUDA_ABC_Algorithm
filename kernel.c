#include "kernel.h"

void kernel1(Bees bees)
{
	int i;
	for (i=0; i<NUMBER_OF_EMPLOYED; i++)
		employedPlacement(bees, i);
}

void assignEmployed(Bees bees)
{
	int i;
	for (i=NUMBER_OF_ONLOOKER; i<SN; i++)
		onlookerPlacement(bees, i);
}

void kernel3(Bees bees)
{
	int i;
	for (i=0; i<SN; i++)
		foodExploitation(bees, i);
}
