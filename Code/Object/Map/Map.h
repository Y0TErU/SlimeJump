#pragma once

#include <vector>

#include "../ObjectBase.h"

class Map : public ObjectBase
{
public:
	Map(int texture_handle_)
	{
		textureHandle = texture_handle_;
	}

public:
	void Update() override;
	void Draw() override;

public:
	void LoadMapLayout();		//マップチップの読込（外部ファイルより）
	
	bool ToRectObjectX(int min_x_, int max_x_);	//オブジェクトと当たったかどうか（X座標）

	bool ToRectObjectY(int min_y_,int max_y_);	//オブジェクトと当たったかどうか（Y座標）

private:
	std::vector<int> mapLayout{};

	int textureHandle{ -1 };

	
};