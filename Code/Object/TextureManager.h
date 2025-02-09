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
	bool Load(TextureManager::Type type_,std::string tex_name_);		//�`��̓Ǎ�
	bool DivLoad(TextureManager::Type type_, std::string tex_name_);	//�`��̕����ǂݍ���
	void Delete(TextureManager::Type type_);							//�ǂݍ��񂾕`��̍폜
	void AllDelete();													//�ǂݍ��񂾕`��̑S�폜

	int GetTextureID(TextureManager::Type type_);		//Texture��ID���擾
	int* GetAnimationID(TextureManager::Type state_);	//�A�j���[�V������TextureID���擾

private:
	std::map<Type, int>textures{};					//Texture�ۑ��pmap
	std::map<Type, std::vector<int>> animations;		//�A�j���[�V������Texture�ۑ��pmap

};