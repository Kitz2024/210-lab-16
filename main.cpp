// Kit Pollinger
//  210 - Lab - 16 | Color Class w/Constructors
// This is my 210 - Lab - 14 | Color Class code and I'll be modifying it

#include <iostream>
using namespace std;

class Color
{
public:
    // Modification
    Color() : red(0), green(0), blue(0) {}
    // Parameter Construct
    Color(int r, int g, int b) : red(r), green(g), blue(b) {}
    // Partial Contruct 1
    Color(int r) : red(r), green(0), blue(0) {}
    // Partial Construct 2 (setting red and green)
    Color(int r, int g) : red(r), green(g), blue(0) {}

    // Default Construtor
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
    // Defaults Lab 14
    Color colorr(255, 0, 0);
    Color colorg(0, 255, 0);
    Color colorb(0, 0, 255);

    // Modifcation
    Color color1;
    Color color2(255, 0, 0);
    Color color3(128);
    Color color4(128, 128);
    Color color5(0, 128, 255);

    // Default Colors Lab 14
    cout << "Default colors" << endl;
    cout << "Color 1: " << endl;
    colorr.print();
    cout << "Color 2: " << endl;
    colorg.print();
    cout << "Color 3" << endl;
    colorb.print();
    cout << endl;

    // Modification
    cout << "Modifcation Colors" << endl;
    cout << "Color 1: " << endl;
    color1.print();
    cout << "Color 2: " << endl;
    color2.print();
    cout << "Color 3: " << endl;
    color3.print();
    cout << "Color 4: " << endl;
    color4.print();
    cout << "Color 5: " << endl;
    color5.print();

    return 0;
}