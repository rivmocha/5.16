#pragma once
#include "Vector2D.h"

class AActor
{
public:
	AActor();	//������. constructor.  ������ �ʱ�ȭ
	~AActor();	//�Ҹ���. Destructor.	���ﶧ �����.

	char Shape;
	Vector2D Location;
	bool bCollide;

	void Draw();
};
