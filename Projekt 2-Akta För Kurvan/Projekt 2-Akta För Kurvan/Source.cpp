#include<SFML\Graphics.hpp>
#include"GameManger.h"
#include<ctime>
#include<cstdlib>
using namespace sf;

//////////////////////////////////////////////////////////////////////////
//						Made By Zoran Ostojic Zoos13					//
//								2013-11-26								//
//////////////////////////////////////////////////////////////////////////


int main ()
{
	srand((unsigned int)time(0));
	_CrtSetDbgFlag( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	sf::RenderWindow window(sf::VideoMode(800,600),"Akta F�r Kurvan");
	//window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(60);
	
	GameManger manager;
	
	manager.start(window);
}