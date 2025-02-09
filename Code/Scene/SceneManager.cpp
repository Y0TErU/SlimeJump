#include "SceneManager.h"

SceneManager::~SceneManager()
{
	for (auto itr = scene.begin(); itr != scene.end(); itr++)
	{
		delete* itr;
	}
}

void SceneManager::ChangeType(SceneManager::SceneType next_type_)
{
	switch (next_type_)
	{
	case TITLE:
		nextScene = &titleScene;
		break;
	case PLAY:
		nextScene = &playScene;
		break;
	case CLEAR:
		nextScene = &clearScene;
		break;
	case OVER:
		nextScene = &overScene;
		break;
	}
}

void SceneManager::ChengeStep()
{
	if (sceneStep == INIT)
	{
		sceneStep = UPDATE;
	}
	else if (sceneStep == UPDATE)
	{
		sceneStep = TERMINATE;
	}
	else if (sceneStep == TERMINATE)
	{
		sceneStep = INIT;
	}
}

void SceneManager::ExternScene()
{
	if (sceneStep == INIT)
	{
		currentScene->Init();
	}
	else if (sceneStep == UPDATE)
	{
		currentScene->Update();
	}
	else if (sceneStep == TERMINATE)
	{
		currentScene->Terminate();
	}
}