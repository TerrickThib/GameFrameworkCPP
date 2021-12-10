#pragma once
#include "Actor.h"
class Component
{
public:
	Component();
	Component(Actor*, const char*);
	virtual ~Component();
	const char* getName();
	Actor* getOwner();

	virtual void start();
	virtual void update(float);
	virtual void draw();
	virtual void end();

	virtual void onCollision(Actor*);

private:
	Actor* m_owner;
	const char* m_name;

};

