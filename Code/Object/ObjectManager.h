#pragma once

#include <vector>

#include "ObjectBase.h"

class ObjectManager
{
public:
	static ObjectManager* Instance()
	{
		static ObjectManager instance;
		return &instance;
	}

public:
	~ObjectManager();

public:
	void Entry(ObjectBase* obj_);	//�I�u�W�F�N�g�̓o�^

	void Update();	//�X�V
	void Draw();	//�`��
	void Delete();	//�폜

	void Register();	//�I�u�W�F�N�g�̒ǉ�
	void ResetEntryObjects();	//�o�^���Ă����I�u�W�F�N�g�����Z�b�g

private:
	ObjectManager()
	{
	}

	ObjectManager(ObjectManager& obj_)
	{
	}

private:
	std::vector<ObjectBase*> objects{};			//�Ǘ�����I�u�W�F�N�g
	std::vector<ObjectBase*> entryObjects{};	//�o�^�p�̃��X�g

private:
	//�Q�Ɨp�̃C���X�^���X
	
};