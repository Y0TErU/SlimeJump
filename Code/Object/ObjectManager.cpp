#include "ObjectManager.h"

ObjectManager::~ObjectManager()
{
	for (auto itr = objects.begin(); itr != objects.end(); itr++)
	{
		delete* itr;
	}
	ResetEntryObjects();
}

void ObjectManager::Entry(ObjectBase* obj_)
{
	if (obj_ != nullptr)
	{
		//objectsの最後尾に新しいオブジェクトを追加（登録）
		entryObjects.push_back(obj_);
	}
}

void ObjectManager::Register()
{
	for (auto itr = entryObjects.begin(); itr != entryObjects.end(); itr++)
	{
		objects.push_back(*itr);
	}
	entryObjects.clear();
}

void ObjectManager::Update()
{
	for (auto itr = objects.begin(); itr != objects.end(); itr++)
	{
		(*itr)->Update();
	}
}

void ObjectManager::Draw()
{
	for (auto itr = objects.begin(); itr != objects.end(); itr++)
	{
		(*itr)->Draw();
	}
}

void ObjectManager::Delete()
{
	for (auto itr = objects.begin(); itr != objects.end();)
	{
		if ((*itr)->IsActive() == false)
		{
			delete(*itr);
		}
	}
}

void ObjectManager::ResetEntryObjects()
{
	for (auto itr = entryObjects.begin(); itr != entryObjects.end(); itr++)
	{
		delete* itr;
	}
}

