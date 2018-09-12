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

	//create button sprite
	sf::Texture buttonTexture;
	buttonTexture.loadFromFile("graphics/button.png");

	sf::Sprite buttonSprite;
	buttonSprite.setTexture(buttonTexture);

	//set sprite coords
	buttonSprite.setPosition(
		gamewindow.getSize().x / 2 - buttonTexture.getSize().x / 2,
		gamewindow.getSize().y / 2 - buttonTexture.getSize().y / 2
	);

	// create font
	sf::Font gameFont;
	gameFont.loadFromFile("fonts/mainFont.ttf");

	//create title
	sf::Text titleText;
	titleText.setFont(gameFont);
	titleText.setString("Button Masher!");
	titleText.setPosition(gamewindow.getSize().x / 2 - titleText.getLocalBounds().width / 2, 30);

	//create timer
	sf::Text timerText;
	timerText.setFont(gameFont);
	timerText.setString("Time Remaining: 0");
	timerText.setCharacterSize(16);
	timerText.setFillColor(sf::Color::White);
	timerText.setPosition(gamewindow.getSize().x - timerText.getLocalBounds().width - 30, 30);
	
	float signalTimeLowerLimit = 5.0f;
	float signalTimeUpperLimit = 10.0f;

	sf::Time timetilSignal = sf::seconds(0.0f);
	sf::Time timeSinceSignal= sf::seconds(0.0f);
	sf::Clock gameClock;


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

		// *** UPDATE ***
		//setup timer
		sf::Time frameTime = gameClock.restart();


		// *** Draw Graphics ***
		gamewindow.clear(sf::Color::Transparent);
		
		// *** draw everything ***
		gamewindow.draw(buttonSprite);


		//display window content
		gamewindow.display();

	}// end of game loop


	return 0;
}
