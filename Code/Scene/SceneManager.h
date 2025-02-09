#pragma once

#include <vector>

#include "TitleScene.h"
#include "PlayScene.h"
#include "ClearScene.h"
#include "OverScene.h"

class SceneManager
{
public:
	static SceneManager* Instance()
	{
		static SceneManager instance;
		return &instance;
	}

public:
	~SceneManager();

public:
	enum SceneType
	{
		TITLE,		//タイトルシーン
		PLAY,		//ゲームプレイシーン
		CLEAR,		//クリアーシーン
		OVER		//ゲームオーバーシーン
	};

	enum SceneStep
	{
		INIT,		//シーン開始
		UPDATE,		//シーンの更新
		TERMINATE	//シーンの終了
	};

public:
	void ChangeType(SceneType next_type_);//シーンタイプの変更
	void ChengeStep();			//シーンステップの変更
	void ExternScene();			//シーンの遷移処理

public:
	//次のシーンを現在のシーンにする
	void SetNextScene()
	{
		currentScene = nextScene;
	}

private:
	SceneManager()
	{}
	SceneManager(SceneManager& scene_)
	{}

private:
	TitleScene titleScene;
	PlayScene playScene;
	ClearScene clearScene;
	OverScene overScene;

private:
	std::vector<Scene*>scene{};
	Scene* currentScene{};
	Scene* nextScene{};
	int sceneStep{};

};