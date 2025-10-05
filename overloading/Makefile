# Simple Makefile for the Point demo
CXX      := g++
CXXFLAGS := -std=c++17 -Wall -O2
TARGET   := point_demo
OBJS     := main.o point.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

main.o: main.cpp point.h
	$(CXX) $(CXXFLAGS) -c main.cpp

point.o: point.cpp point.h
	$(CXX) $(CXXFLAGS) -c point.cpp

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
