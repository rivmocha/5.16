#pragma once
#include "Vector2D.h"

class AActor
{
public:
	AActor();	//생성자. constructor.  생성시 초기화
	~AActor();	//소멸자. Destructor.	지울때 사라짐.

	char Shape;
	Vector2D Location;
	bool bCollide;

	void Draw();
};
