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
	void LoadMapLayout();		//�}�b�v�`�b�v�̓Ǎ��i�O���t�@�C�����j
	
	bool ToRectObjectX(int min_x_, int max_x_);	//�I�u�W�F�N�g�Ɠ����������ǂ����iX���W�j

	bool ToRectObjectY(int min_y_,int max_y_);	//�I�u�W�F�N�g�Ɠ����������ǂ����iY���W�j

private:
	std::vector<int> mapLayout{};

	int textureHandle{ -1 };

	
};