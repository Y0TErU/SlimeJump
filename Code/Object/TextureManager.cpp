#include <Dxlib.h>
#include <vector>

#include "TextureManager.h"

bool TextureManager::Load(TextureManager::Type type_, std::string tex_name_)
{
	if (textures.count(type_) > 0 && textures[type_] != -1)
	{
		return true;
	}

	int id = LoadGraph(tex_name_.c_str());
	if (id != -1)
	{
		textures[type_] = id;
		return true;
	}

	return false;
}

bool TextureManager::DivLoad(TextureManager::Type type_, std::string tex_name_)
{
	if (animations.find(type_) != animations.end())
	{
		return true;
	}

	/*
	std::vector<int> handles(all_num_);

	int result = LoadDivGraph(tex_name_.c_str(), all_num_, x_num_, y_num_, x_size_, y_size_, handles.data());
	if (result < 0)
	{
		return false;
	}

	animations[state_] = handles;
	*/
	
	return true;
}

void TextureManager::Delete(TextureManager::Type type_)
{
	if (textures.count(type_) > 0 && textures[type_] != -1)
	{
		DeleteGraph(textures[type_]);
		textures.erase(type_);
	}
}

void TextureManager::AllDelete()
{
	for (auto itr = textures.begin(); itr != textures.end(); itr++)
	{
		DeleteGraph((*itr).second);
	}
	textures.clear();
}

int TextureManager::GetTextureID(TextureManager::Type type_)
{
	if (textures.count(type_) > 0)
	{
		return textures[type_];
	}
	return -1;
}

int* TextureManager::GetAnimationID(TextureManager::Type state_)
{
	if (animations.count(state_) > 0)
	{
		return animations[state_].data();
	}

	return nullptr;
}