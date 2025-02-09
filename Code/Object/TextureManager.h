#pragma once

#include <vector>
#include <map>
#include <string>

class TextureManager
{
public:
	static TextureManager* Instance()
	{
		static TextureManager instance;
		return &instance;
	}

public:
	enum class Type
	{
		MapChip,
		Slime
	};

public:
	~TextureManager()
	{
		AllDelete();
	}

	TextureManager()
	{
	}

	TextureManager(TextureManager& obj_)
	{
	}

public:
	bool Load(TextureManager::Type type_,std::string tex_name_);		//描画の読込
	bool DivLoad(TextureManager::Type type_, std::string tex_name_);	//描画の分割読み込み
	void Delete(TextureManager::Type type_);							//読み込んだ描画の削除
	void AllDelete();													//読み込んだ描画の全削除

	int GetTextureID(TextureManager::Type type_);		//TextureのIDを取得
	int* GetAnimationID(TextureManager::Type state_);	//アニメーションのTextureIDを取得

private:
	std::map<Type, int>textures{};					//Texture保存用map
	std::map<Type, std::vector<int>> animations;		//アニメーションのTexture保存用map

};