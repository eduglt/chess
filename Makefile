CXX=g++

all: Main

Main: Main.o Chess.o Position.o Frame.o olcPixelGameEngine.o
	${CXX} -o chess Main.o Chess.o Position.o Frame.o olcPixelGameEngine.o -lstdc++ -lstdc++fs -lX11 -lGL -pthread -lpng

Main.o: Main.cpp
	${CXX} -c Main.cpp

Frame.o: Frame.cpp
	${CXX} -c Frame.cpp

Chess.o: Chess.cpp
	${CXX} -c Chess.cpp

Position.o: Position.cpp
	${CXX} -c Position.cpp

olcPixelGameEngine.o: olcPixelGameEngine.cpp
	${CXX} -c olcPixelGameEngine.cpp

clean:
	rm -f chess Main.o Frame.o Chess.o Position.o olcPixelGameEngine.o