// Include important libraries here
#include <SFML/Graphics.hpp>

// Make code easier to type with "using namespace"
using namespace sf;

// This is where our game starts from int main()
int main()
{
	Vector2u modeSize( 800, 600 );
	// Create a video mode object
	VideoMode vm( modeSize );

	// Create and open a window for the game
	RenderWindow window( vm, "Timber!!!", Style::Default, State::Windowed );


	// Create a texture to hold a graphic on the GPU
	Texture textureBackground;

	// Load a graphic into the texture
	textureBackground.loadFromFile("graphics/background.png");

	// // Create a sprite
	// Sprite spriteBackground;
	// // Attach the texture to the sprite
	// spriteBackground.setTexture(textureBackground);

	Sprite spriteBackground( textureBackground );

	// Set the spriteBackground to cover the screen spriteBackground.setPosition(0,0);

	while (window.isOpen())
	{

		/*
		****************************************
		Handle the players input
		****************************************
		*/

		if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
		{
			window.close();
		}

		/*
		****************************************
		Update the scene
		****************************************
		*/

		/*
		****************************************
		Draw the scene
		****************************************
		*/

		// Clear everything from the last frame
		window.clear();

		// Draw our game scene here
		window.draw(spriteBackground);

		// Show everything we just drew
		window.display();
	}

	return 0;
}
