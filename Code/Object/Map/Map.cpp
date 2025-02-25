#include <Dxlib.h>

#include "Map.h"

void Map::Update()
{


}

void Map::Draw()
{


}

void Map::LoadMapLayout()
{
	FILE* fp = nullptr;

	//�X�e�[�W01
	fopen_s(&fp, "StageLayout/Stage01.csv","r");

	if (fp == nullptr)
	{
		//�t�@�C���ǂݍ��ݎ��s
		return;
	}

	int result = 0;
	int row = 0;
	int collum = 0;
	char numBuffer[32];
	char separatorBuffer[32];

	while (!feof(fp))
	{
		result = fscanf_s(fp, "%[^,^'\n'^'\r']%[,'\n''\r']", numBuffer, (unsigned int)sizeof(numBuffer), separatorBuffer, (unsigned int)sizeof(separatorBuffer));
		
		if (result != 2)
		{
			break;
		}

		char* endPtr;
		int value = strtol(numBuffer, &endPtr, 10);

		if (*endPtr == '\0') // �ϊ��������̂ݒǉ�
		{
			mapLayout.push_back(value);
		}

		if (separatorBuffer[0] == '\n' || separatorBuffer[0] == '\r')
		{
			// ���̍s�Ɉړ��������Ƃ��L�^�ł���
		}

	}

	fclose(fp);

}

bool Map::ToRectObjectX(int min_x_, int max_x_)
{

}

bool Map::ToRectObjectY(int min_y_, int max_y_)
{

}