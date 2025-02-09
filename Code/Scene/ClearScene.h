#pragma once

#include "Scene.h"

class ClearScene : public Scene
{
public:
	void Init() override;
	void Update() override;
	void Terminate() override;
};