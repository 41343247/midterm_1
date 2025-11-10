#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    // Create two widget windows with optimized settings
    Widget w, w2;
    
    // Set window titles to distinguish between windows
    w.setWindowTitle("Widget 1");
    w2.setWindowTitle("Widget 2");
    
    // Set more compact and appropriate window sizes
    w.resize(600, 400);
    w2.resize(600, 400);
    
    // Position windows side by side with proper spacing
    // Window 1: positioned at (100, 100)
    // Window 2: positioned at (720, 100) - giving 20px spacing between windows
    w.move(100, 100);
    w2.move(720, 100);
    
    // Show both windows
    w.show();
    w2.show();
    
    return a.exec();
}
