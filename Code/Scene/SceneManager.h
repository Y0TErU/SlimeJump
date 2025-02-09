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
		TITLE,		//�^�C�g���V�[��
		PLAY,		//�Q�[���v���C�V�[��
		CLEAR,		//�N���A�[�V�[��
		OVER		//�Q�[���I�[�o�[�V�[��
	};

	enum SceneStep
	{
		INIT,		//�V�[���J�n
		UPDATE,		//�V�[���̍X�V
		TERMINATE	//�V�[���̏I��
	};

public:
	void ChangeType(SceneType next_type_);//�V�[���^�C�v�̕ύX
	void ChengeStep();			//�V�[���X�e�b�v�̕ύX
	void ExternScene();			//�V�[���̑J�ڏ���

public:
	//���̃V�[�������݂̃V�[���ɂ���
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