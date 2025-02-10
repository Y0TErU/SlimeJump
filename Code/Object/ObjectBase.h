#pragma once

class ObjectBase
{
public:
	ObjectBase()
	{
	}

	ObjectBase(float pos_x_,float pos_y_,float width_,float height_) : 
		posX{ pos_x_ },posY{pos_y_},
		width{width_},height{height_}
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

	float GetPosX()
	{
		return posX;
	}

	float GetPosY()
	{
		return posY;
	}

	void SetPosX(float pos_x_)
	{
		posX = pos_x_;
	}

	void SetPosY(float pos_y_)
	{
		posY = pos_y_;
	}

private:
	float posX{ 0 };
	float posY{ 0 };
	float width{};
	float height{};
	bool isActive{ true };
};