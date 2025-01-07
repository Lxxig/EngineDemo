#include "TestLevel.h"
#include "Engine/Engine.h"
#include "Core.h"
#include <iostream>


TestLevel::TestLevel()
{
}

TestLevel::~TestLevel()
{
}

void TestLevel::UpDate(float deltaTime)
{
	Level::UpDate(deltaTime);

	// ESC Ű�� ����
	if (Engine::Get().GetKeyDown(VK_ESCAPE))
	{
		Engine::Get().QuitGame();
	}
}
