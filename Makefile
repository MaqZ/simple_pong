CC=g++
CFLAGS=-c -Wall
LDFLAGS=-std=c++0x
LIBS=-lsfml-graphics -lsfml-window -lsfml-system
EXECUTABLE=a.out
SOURCES=main.cpp\
				entity.cpp\
				pad.cpp\
				padplayer.cpp\
				padai.cpp\
				gamespace.cpp\
				ball.cpp\
				gamescreen.cpp\
				matchscreen.cpp\
				screenmanager.cpp
OBJECTS=$(SOURCES:.cpp=.o)

all: $(SOURCES) $(LIBS) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ $(LIBS)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm *.o $(EXECUTABLE)
