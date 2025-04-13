#include <iostream>
using namespace std;
class Window
{
    private:
        int width;
        int height;
        int locationX;
        int locationY;
        int status;
        static int barColor;
    public:
        static int getBarColor();
        static void setBarColor(int color);
};

int Window::barColor = 0;
int Window::getBarColor()
{
    return barColor;
}

void Window::setBarColor(int color)
{
    barColor = color;
}

int main(void)
{
    Window w;

    cout << Window::getBarColor() << endl;

    return 0;
}