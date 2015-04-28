#include <QFile>
#include <QImage>
#include <QDebug>

int main(int argc, char *argv[])
{
    QFile file("86e231db24c2fd370992d91a9e889636.jpg");

    if (!file.open(QIODevice::ReadOnly))
    {
        qFatal("Could not load sample image. Please copy image file manually from source dir to build dir.");
        return 1;
    }

    QByteArray blob = file.readAll();

    QImage image;
    image.fromData(blob);

    return 0;
}
