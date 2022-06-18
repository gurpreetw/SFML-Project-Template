#include <SFML/Graphics.hpp>


#define W_WIDTH  800
#define W_HEIGHT 500

int main(int argc, char const *argv[])
{
	sf::RenderWindow window(
		sf::VideoMode(W_WIDTH, W_HEIGHT),
		"SF-GAME");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}
