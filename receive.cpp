#include <stdio.h>
#include <string.h>
#include <errno.h>

#include <wiringPi.h>
#include <wiringSerial.h>

int main() {
int fd;
if ((fd = serialOpen('/dev/ttyAMA0', 9600))<0) {
fprintf(stderr, "unable to open serial device");
return 1;
}
if (wiringPiSetup () == -1)
{
fprintf (stdout, "Unable to start wiringPi: %s\n", strerror (errno)) ;
return 1 ;
}

serialPutchar(fd, 'k');
fprintf(stdout, "%d\n", serialGetchar(fd));
serialClose(fd);
}
