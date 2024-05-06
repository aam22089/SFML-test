#ifndef Grid_h
#define Grid_h
#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;
using namespace std;

class Grid
{
    private:
    vector<vector<int>> tablero;
    int rows,cols;

    public:
    Grid(int m, int n);
    void drawTo(RenderWindow &window);
  
};


#endif