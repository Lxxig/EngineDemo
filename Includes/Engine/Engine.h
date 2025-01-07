#pragma once

#include "Core.h"

// �Է� ó���� ���� ����ü
struct KeyState
{
	// ���� �����ӿ� Ű�� ���ȴ��� Ȯ��.
	bool isKeyDown = false;
	
	// ���� �����ӿ� Ű�� ���Ⱦ����� Ȯ��.
	bool wasKeyDown = false;
};

//Engine Class
class Level;
class ENGINE_API Engine
{
public:
	Engine();
	virtual ~Engine();

	// ���� ���� �Լ�.
	void Run();

	// ���� �߰� �Լ�
	void LoadLevel(Level* newLevel);

	// �Է� ���� �Լ�.
	bool GetKey(int key);
	bool GetKeyDown(int key);
	bool GetKeyUp(int key);

	// ���� ���� �Լ�
	void QuitGame();

	// �̱��� ���� �Լ�.
	static Engine& Get();

protected:
	void ProcessInput();				// �Է�ó��
	void Update(float deltaTime);		// Tick()
	void Draw();						// Render();

	// ���� �������� Ű ���¸� �����ϴ� �Լ�.
	void SavePreviousKeySates();

protected:

	// ������ �� ������ ����
	bool quit;
	
	// Ű ���� �����ϴ� �迭 (Ű �Է� ����)
	KeyState keyState[255];

	// �̱��� ������ ���� ���� ���� ����.
	static Engine* instance;

	// ���� ���� ����.
	Level* mainLevel;
};

