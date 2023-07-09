.PHONY: all
all: ZadMainExample.exe ZadPrzekazywanieTablicZPodaniemRozmiaru.exe ZadZwracanie.exe ZadArytmetykaWskaznikow.exe LStringStream.exe LManipulacjaStrumieniemCout.exe ZadIq.exe ZadCinCoutFile.exe ZadAdresowaniePamieci.exe clean

ZadMainExample.exe:
	g++ -c ZadMainExample.cc -o ZadMainExample.o
	g++ -o ZadMainExample.exe ZadMainExample.o

ZadPrzekazywanieTablicZPodaniemRozmiaru.exe:
	g++ -o ZadPrzekazywanieTablicZPodaniemRozmiaru.exe ZadPrzekazywanieTablicZpodaniemRozmiaru.cc

ZadZwracanie.exe:
	g++ -c ZadZwracanie.cc -o ZadZwracanie.o
	g++ -o ZadZwracanie.exe ZadZwracanie.o

LStringStream.exe:
	g++ -c LStringStream.cc -o LStringStream.o
	g++ -o LStringStream.exe LStringStream.o

LManipulacjaStrumieniemCout.exe:
	g++ -c LManipulacjaStrumieniemCout.cc -o LManipulacjaStrumieniemCout.o
	g++ -o LManipulacjaStrumieniemCout.exe LManipulacjaStrumieniemCout.o

ZadCinCoutFile.exe:
	g++ -c ZadCinCoutFile.cc -o ZadCinCoutFile.o
	g++ -o ZadCinCoutFile.exe ZadCinCoutFile.o

ZadAdresowaniePamieci.exe:
	g++ -c ZadAdresowaniePamieci.cc -o ZadAdresowaniePamieci.o
	g++ -o ZadAdresowaniePamieci.exe ZadAdresowaniePamieci.o
	
ZadIq.exe:
	g++ -c ZadIq.cc -o ZadIq.o
	g++ -o ZadIq.exe ZadIq.o
	
ZadArytmetykaWskaznikow.exe:
	g++ -c ZadArytmetykaWskaznikow.cc -o ZadArytmetykaWskaznikow.o
	g++ -o ZadArytmetykaWskaznikow.exe ZadArytmetykaWskaznikow.o

clean:
	del *.o
	del *~
	
