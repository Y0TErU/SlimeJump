#pragma once

#include "../ObjectBase.h"
#include "../Map/Map.h"

class Enemy : public ObjectBase
{
public:


private:

	float width{};
	float height{};

	const float gravity{ 9.8f };	//�d��

	//���̃n���h��
	int handle{};

	static Map* toMap;

};

