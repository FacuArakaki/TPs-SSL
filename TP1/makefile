#MAKEFILE TP 1
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
# -wall me activa los "warnings" o advertencias

# -Wextra, me activa un conjunto adicional de "warnings" que no me detecta el -Wall
# por ejemplo, el tener variables no utilizadas, usar funciones sin declarar, etc.

TARGET_MAIN = tablasDeConversion
TARGET_TEST = conversionTest
# esto basicamente funcionan como #define (o eso interpreto yo)

all: $(TARGET_MAIN) $(TARGET_TEST)

$(TARGET_MAIN): tablasDeConversion.c conversion.c conversion.h
    gcc $(CFLAGS) -o $(TARGET_MAIN) tablasDeConversion.c conversion.c
# esto significa correr el programa principal que vendria a ser tablasDeConversion.c y que me
# lance los "warnings" en caso de haber alguno.


$(TARGET_TEST): conversionTest.c conversion.c conversion.h
    gcc $(CFLAGS) -o $(TARGET_TEST) conversionTest.c conversion.c
# esto corre los test, que entiendo yo q es ese archivo conversionTest que nos propone el enunciado y
# nos lanza los "warnings", nuevamente, en caso de haber alguno.

#tanto para correr el main como para correr el test, voy a necesitar conversion.c
#y tambien la biblioteca creada especificamente, conversion.h, para usar ese codigo fuente

clean:
    rm -f $(TARGET_MAIN) $(TARGET_TEST)
#como se menciono en clase, el clean me elimina todos los archivos generados durante el proceso de
#compilacion.
