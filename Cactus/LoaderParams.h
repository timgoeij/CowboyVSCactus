#pragma once
#include <string>
class LoaderParams
{
public:
	LoaderParams(int x, int y, int width, int height, std::string textureId) :
		xPos(x), yPos(y), width(width), height(height), textureId(textureId)
	{

	}

	~LoaderParams();

	int getX() const { return xPos; }
	int getY() const { return yPos; }

	int getWidth() const { return width; }
	int getHeight() const { return height; }

	std::string getTextureId() const { return textureId; }

private:

	int xPos;
	int yPos;

	int width;
	int height;

	std::string textureId;

};

