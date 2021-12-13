#include "MainScene.h"
#include "Actor.h"
#include "SpriteComponent.h"
#include "MoveComponent.h"
#include "Transform2D.h"

void MainScene::start()
{
	//Created a player using are components
	Actor* player = new Actor(50, 50, "Player");
	player->addComponent(new SpriteComponent("Images/player.png"));
	player->addComponent(new MoveComponent());
	player->getTransform()->setScale({ 50,50 });
	addActor(player);

}
