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

	//ステージ01
	fopen_s(&fp, "StageLayout/Stage01.csv","r");

	if (fp == nullptr)
	{
		return;
	}

	int result = 0;
	int value = 0;
	int row = 0;
	int collum = 0;
	char numBuffer[32];
	char separatorBuffer[32];

	while (true)
	{
		result = fscanf_s(fp, "%[^,^'\n'^'\r']%[,'\n''\r']", &numBuffer, 32, &separatorBuffer, 4);
		
		if (result == 2)
		{
			value = atoi(numBuffer);

			mapLayout[w][h]
		}

	}


}

bool Map::ToRectObjectX(int min_x_, int max_x_)
{

}

bool Map::ToRectObjectY(int min_y_, int max_y_)
{

}