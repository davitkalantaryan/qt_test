//
// file:            	main_qt_test.cpp
// path:		main_qt_test.cpp
// created on:		2023 May 05
// created by:		Davit Kalantaryan (davit@focust.ai)
//

#include <QApplication>
#include <QWidget>

int main(int a_argc, char* a_argv[])
{
    QApplication aApp(a_argc, a_argv);
    QWidget aWidgetsContainer;

    aWidgetsContainer.resize(100,100);
    aWidgetsContainer.show();

    QApplication::exec();

    return 0;
}

