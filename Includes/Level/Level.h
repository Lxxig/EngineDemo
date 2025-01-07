#pragma once

#include "Core.h"

// ���漱��
class Actor;
class ENGINE_API Level
{
public:
	Level();
	virtual ~Level();

	// ���� �߰� �Լ�.
	void AddActor(Actor* newActor);

	// ���� ó�� �Լ�.
	virtual void UpDate(float deltaTime);
	virtual void Draw();

protected:
	// ���� ������ ��ġ�Ǵ� ��ü(����) �迭
	Actor** actors;

	// ������ �� �մ� ������ ũ��
	int capacity;

	// ���� ������ �߰��� ������ ��
	int count;
};

