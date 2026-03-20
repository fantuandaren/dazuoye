#include <QApplication>
#include "GameWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // 创建主窗口
    GameWindow window;
    window.setWindowTitle("森林冰火人");
    window.resize(800, 600); // 你可以根据需要调整窗口大小
    window.show();

    return app.exec();
}
