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
    Rectangle shape(Vector2f(50,80));
    window.setFramerateLimit(60);

    while (window.isOpen()) 
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
            if (event.type == Event::MouseButtonPressed)
            {
                if(event.mouseButton.button == Mouse::Left)
                {
                    int w = rand()%50;
                    int h = rand()%50;
                    int x = event.mouseButton.x;
                    int y = event.mouseButton.y;

                    Rectangle rec(Vector2f(w,h), x, y);
                    rectangulos.push_back(rec);
                }
                if(event.mouseButton.button == Mouse::Right)
                {
                    int x = event.mouseButton.x;
                    int y = event.mouseButton.y;
                    for(auto &r : rectangulos)
                    {
                        r.click(x,y);
                    }
                }
            }
        }

        window.clear();
        shape.update();
        shape.drawTo(window);
        for(auto &r : rectangulos)
        {
            r.update();
            r.drawTo(window);
        }
        window.display();
    }

    return 0;
}