#include <SFML/Graphics.hpp>
// Library needed for playing music and sound effects
#include <SFML/Audio.hpp>
#include <string>



int main()
{
	//**************************
	//********game setup********
	//**************************	

	// declare variable for display window
	sf::RenderWindow gamewindow;
	gamewindow.create(sf::VideoMode::getDesktopMode(), "Quick Draw",
		sf::Style::Titlebar | sf::Style::Close);




	//*************************
	//******* game loop *******
	//*************************
	while (gamewindow.isOpen())
	{
	
		// *** Input ***
		// TODO: Check for input
		sf::Event gameEvent;
		while (gamewindow.pollEvent(gameEvent))
		{
			// Process events

			if (gameEvent.type == sf::Event::MouseButtonPressed)
			{
			
			}


			//check if event is closed
			if (gameEvent.type == sf::Event::Closed)
			{
				//close game window
				gamewindow.close();
			}
		}

		// *** Draw Graphics ***
		gamewindow.clear(sf::Color::Transparent);
		
		// *** draw everything ***


		//display window content
		gamewindow.display();

	}// end of game loop


	return 0;
}
