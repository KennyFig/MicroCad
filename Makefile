all: Microcad

Microcad: src/Circle.cpp src/Figure.cpp src/Microcad.cpp src/Rectangle.cpp src/Triangle.cpp headers/Circle.h headers/Figure.h headers/Rectangle.h headers/Triangle.h
	g++ src/Circle.cpp src/Figure.cpp src/Microcad.cpp src/Rectangle.cpp src/Triangle.cpp