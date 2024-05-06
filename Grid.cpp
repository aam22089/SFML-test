#include "Grid.hpp"

Grid::Grid(int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        tablero.push_back({});
        for (int j = 0; j < n; j++)
        {
            tablero[i].push_back(0);
        }
    }
}

void Grid::drawTo(RenderWindow &window)
{
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->cols; j++)
        {
            RectangleShape rect(Vector2f(40,40));
            rect.setPosition(Vector2f(j*40,i*40));
            rect.setOutlineThickness(1);
            rect.setOutlineColor(Color::Black);
            window.draw(rect);
        }
    }
}
