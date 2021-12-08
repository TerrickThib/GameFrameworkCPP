#include "Component.h"

Component::Component()
{
}

Component::Component(Actor*, const char*)
{
}

Component::~Component()
{
}

const char* Component::getName()
{
	return nullptr;
}

Actor* Component::getOwner()
{
	return nullptr;
}

void Component::start()
{
}

void Component::update(float)
{
}

void Component::draw()
{
}

void Component::end()
{
}

void Component::onCollision(Actor*)
{
}
