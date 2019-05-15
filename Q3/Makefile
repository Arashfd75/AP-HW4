CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = main.o shape.o TwoDemensionalShape.o ThreeDemensionalShape.o circle.o square.o cube.o sphere.o point.o
TARGET = main

$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
shape.o: shape.cpp shape.h
	$(CXX) $(CXXFLAGS) shape.cpp
TwoDemensionalShape.o: TwoDemensionalShape.cpp TwoDemensionalShape.h shape.h
	$(CXX) $(CXXFLAGS) TwoDemensionalShape.cpp
ThreeDemensionalShape.o: ThreeDemensionalShape.cpp ThreeDemensionalShape.h shape.h
	$(CXX) $(CXXFLAGS) ThreeDemensionalShape.cpp
circle.o: circle.h circle.cpp TwoDemensionalShape.h shape.h
	$(CXX) $(CXXFLAGS) circle.cpp
square.o: square.h square.cpp TwoDemensionalShape.h shape.h
	$(CXX) $(CXXFLAGS) square.cpp
cube.o: cube.cpp cube.h ThreeDemensionalShape.h shape.h
	$(CXX) $(CXXFLAGS) cube.cpp
sphere.o: sphere.cpp sphere.h ThreeDemensionalShape.h shape.h
	$(CXX) $(CXXFLAGS) sphere.cpp
point.o: point.h point.cpp
	$(CXX) $(CXXFLAGS) point.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
