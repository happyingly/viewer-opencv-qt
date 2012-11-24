#include "viewer.h"
#include <QtGui/QApplication>
#include <QSplashScreen>
#include <QTextCodec>


int main(int argc, char *argv[])
{
	Q_INIT_RESOURCE(viewer);
    QApplication app(argc,argv);
	
	
	//set codec
	//QTextCodec *codec = QTextCodec::codecForName("GB2312");
	QTextCodec *codec = QTextCodec::codecForName("GBK");
    QTextCodec::setCodecForLocale(codec);  
    QTextCodec::setCodecForCStrings(codec);  
    QTextCodec::setCodecForTr(codec);  

    // start to show splash
	QSplashScreen *splash = new QSplashScreen;
	splash->setPixmap(QPixmap(":/Viewer/Resources/screen.jpg"));
	splash->show();

	MainWindow imageviewer;
	imageviewer.show();

	splash->finish(&imageviewer);//when software begin£¬splash end
	delete splash;

    return app.exec();
}
