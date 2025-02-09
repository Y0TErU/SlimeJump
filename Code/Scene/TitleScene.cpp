#include <Dxlib.h>

#include "SceneManager.h"
#include "TitleScene.h"

void TitleScene::Init()
{

	SceneManager::Instance()->ChengeStep();
}

void TitleScene::Update()
{


	//SPACE‚ª‰Ÿ‚³‚ê‚½‚çPlayƒV[ƒ“‚Ö(‰¼)
	if (CheckHitKey(KEY_INPUT_SPACE) != 0)
	{
		SceneManager::Instance()->ChengeStep();
		SceneManager::Instance()->ChangeType(SceneManager::SceneType::PLAY);
	}
}
	

void TitleScene::Terminate()
{

	SceneManager::Instance()->SetNextScene();
	SceneManager::Instance()->ChengeStep();
}