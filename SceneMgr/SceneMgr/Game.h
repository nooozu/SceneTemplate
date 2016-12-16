#pragma once
#include "BaseScene.h"

class Game : public BaseScene
{
public:
	Game(ISceneChanger* changer);
	void Initialize() override;
	void Finalize() override;
	void Update() override;
	void Draw() override;
};

