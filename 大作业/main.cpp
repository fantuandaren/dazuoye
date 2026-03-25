#include <graphics.h>

struct Character {
    int x, y;
    COLORREF color;
    Character(int _x, int _y, COLORREF c): x(_x), y(_y), color(c) {}
    void draw() {
        setfillcolor(color);
        fillcircle(x, y, 20);
    }
};

int main() {
    initgraph(800, 600, SHOWCONSOLE);
    Character fireboy(200, 500, RED);
    Character watergirl(600, 500, BLUE);

    cleardevice();
    fireboy.draw();
    watergirl.draw();

    // 保留窗口，按任意键退出
    getch();
    closegraph();
    return 0;
}
