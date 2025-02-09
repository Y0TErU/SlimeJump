#include <Dxlib.h>

#include "SceneManager.h"
#include "ClearScene.h"

void ClearScene::Init()
{

	SceneManager::Instance()->ChengeStep();
}

void ClearScene::Update()
{


	//SPACE‚ª‰Ÿ‚³‚ê‚½‚çTitleƒV[ƒ“‚Ö(‰¼)
	if (CheckHitKey(KEY_INPUT_SPACE) != 0)
	{
		SceneManager::Instance()->ChengeStep();
		SceneManager::Instance()->ChangeType(SceneManager::SceneType::TITLE);
	}
}


void ClearScene::Terminate()
{

	SceneManager::Instance()->SetNextScene();
	SceneManager::Instance()->ChengeStep();
}