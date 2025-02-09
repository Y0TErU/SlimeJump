#include <Dxlib.h>

#include "SceneManager.h"
#include "PlayScene.h"

void PlayScene::Init()
{

	SceneManager::Instance()->ChengeStep();
}

void PlayScene::Update()
{


	//Enter‚ª‰Ÿ‚³‚ê‚½‚çCLEARƒV[ƒ“‚Ö
	if (CheckHitKey(KEY_INPUT_RETURN) != 0)
	{
		SceneManager::Instance()->ChengeStep();
		SceneManager::Instance()->ChangeType(SceneManager::SceneType::CLEAR);
	}
}


void PlayScene::Terminate()
{

	SceneManager::Instance()->SetNextScene();
	SceneManager::Instance()->ChengeStep();
}