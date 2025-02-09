#pragma once

class ObjectBase
{
public:
	ObjectBase()
	{
	}

	ObjectBase(int pos_x_,int pos_y_) : 
		posX{ pos_x_ },posY{pos_y_}
	{
	}

public:	
	virtual void Update() = 0;	//更新
	virtual void Draw() = 0;	//描画

public:
	//ゲッター、セッター
	void SetIsAvtive(bool isActive_)
	{
		isActive = isActive_;
	}
	bool IsActive()
	{
		return isActive;
	}

	int GetPosX()
	{
		return posX;
	}

	int GetPosY()
	{
		return posY;
	}


private:
	int posX{ 0 };
	int posY{ 0 };
	float vecX{ 0.0f };
	float vecY{ 0.0f };
	bool isActive{true};

	const float gravity{ 9.8f };	//重力
};