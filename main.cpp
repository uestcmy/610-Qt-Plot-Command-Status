

#include <QApplication>
#include <throughput.h>
#include <GL/glut.h>
#include <qfile.h>

#include <QDebug>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#include <sys/types.h>
#include <GL/glut.h>
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
/*
    QPSK w3;
    w3.resize(600,200);
    w3.show();
    w3.setWindowTitle("Ber");

    BER w24;
    w24.resize(600,450);
    w24.show();
    w24.setWindowTitle("BER");
*/
    ThroughPut w5;
    w5.resize(600,400);
    w5.show();
    w5.setWindowTitle(" Command Type(Port:7021 7024)");

/*
    BER_BAR w4;
    w4.resize(600,450);
    w4.show();
    w4.setWindowTitle("BER (Port:7024)");

*/
 return app.exec();

    //edit in fedora on 20140111
}




