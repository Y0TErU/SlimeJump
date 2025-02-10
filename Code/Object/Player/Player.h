#pragma once

#include <Dxlib.h>

#include "../ObjectBase.h"
#include "../Map/Map.h"

class Player : public ObjectBase
{
public:
	Player(float pos_x_,float pos_y_,int handle_,float width_,float height_) : 
		ObjectBase{pos_x_,pos_y_,width_ ,height_ },
		handle{handle_}
	{
	}

	~Player()
	{
	}

private:
	struct Vec2
	{
		Vec2()
		{
		}

		Vec2(float x_, float y_) : 
			x{ x_ },
			y{ y_ }
		{
		}

		float x{ 0.0f };
		float y{ 0.0f };

	};

	float vecX{ 0.0f };
	float vecY{ 0.0f };

	const float gravity{ 9.8f };	//d—Í

	//‰¼‚Ìƒnƒ“ƒhƒ‹
	int handle{};
};