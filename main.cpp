#include <QApplication>
#include "MainWindow.h"

#include "headers.h"

int main(int argc, char **argv)
{	
	QApplication app(argc, argv);
	MainWindow mainWindow;
	
	if(mainWindow.abort==true) return -1;
	
	mainWindow.show();
	
	return app.exec();
}
