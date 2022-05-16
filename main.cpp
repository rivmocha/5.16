#include <iostream>
#include "Wall.h"
#include "Player.h"

using namespace std;

int main()
{
	AActor* MyActor = new AActor;

	delete MyActor;
	MyActor = nullptr;

	return 0;
}