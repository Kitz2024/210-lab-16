//Kit Pollinger
// 210 - Lab - 16 | Color Class w/Constructors
//This is my 210 - Lab - 14 | Color Class code and I'll be modifying it

#include <iostream>
using namespace std;

class Color
{
public:
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    int getRed() const { return red; }
    void setRed(int r) { red = r; }
    int getGreen() const { return green; }
    void setGreen(int g) { green = g; }
    int getBlue() const { return blue; }
    void setBlue(int b) { blue = b; }

    void print() const
    {
        cout << "Red: " << red << ", Green: " << green << ", Blue: " << blue << endl;
    }

private:
    int red;
    int green;
    int blue;
};

int main()
{
    Color colorr(255, 0, 0);
    Color colorg(0, 255, 0);
    Color colorb(0, 0, 255);

    cout << "Color 1: " << endl;
    colorr.print();
    cout << "Color 2: " << endl;
    colorg.print();
    cout << "Color 3: " << endl;
    colorb.print();

    return 0;
}