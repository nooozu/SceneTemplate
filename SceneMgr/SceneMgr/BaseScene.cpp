#include "BaseScene.h"

BaseScene::BaseScene(ISceneChanger* changer)
{
	mSceneChanger = changer;
}

void BaseScene::Finalize()
{	
}

void BaseScene::Draw()
{
}