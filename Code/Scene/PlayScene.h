#pragma once

#include "Scene.h"

class PlayScene : public Scene
{
public:
	void Init() override;
	void Update() override;
	void Terminate() override;
};