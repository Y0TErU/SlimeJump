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
	void Entry(ObjectBase* obj_);	//オブジェクトの登録

	void Update();	//更新
	void Draw();	//描画
	void Delete();	//削除

	void Register();	//オブジェクトの追加
	void ResetEntryObjects();	//登録していたオブジェクトをリセット

private:
	ObjectManager()
	{
	}

	ObjectManager(ObjectManager& obj_)
	{
	}

private:
	std::vector<ObjectBase*> objects{};			//管理するオブジェクト
	std::vector<ObjectBase*> entryObjects{};	//登録用のリスト

private:
	//参照用のインスタンス
	
};