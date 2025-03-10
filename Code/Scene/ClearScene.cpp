#include <Dxlib.h>

#include "SceneManager.h"
#include "ClearScene.h"

void ClearScene::Init()
{

	SceneManager::Instance()->ChengeStep();
}

void ClearScene::Update()
{


	//SPACEが押されたらTitleシーンへ(仮)
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