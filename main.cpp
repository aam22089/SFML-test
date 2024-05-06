#include <SFML/Graphics.hpp>
#include "Rectangle.hpp"
#include "Rectangle.cpp"
#include <cmath>
#include <vector>
#include <time.h>
using namespace std;
using namespace sf;



Vector2 speed = {5.f,5.f};  
vector <Rectangle> rectangulos;
int main()
{
    RenderWindow window(VideoMode(1920, 1080), "SFML works!");
    Rectangle shape(Vector2f(5,5));

    while (window.isOpen()) 
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        shape.drawTo(window);
        window.display();
    }

    return 0;
}