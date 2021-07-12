CXX = g++
CXXFLAGS = -Wall

all: build build/output

build:
	mkdir build

build/output: build/main.o build/util.o build/person.o build/society.o build/societymanager.o
	$(CXX) $(CXXFLAGS) $^ -o $@

build/main.o: src/main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

build/util.o: src/Util.cpp src/include/Util.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

build/person.o: src/Person.cpp src/include/Person.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

build/society.o: src/Society.cpp src/include/Society.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

build/societymanager.o: src/SocietyManager.cpp src/include/SocietyManager.h
	$(CXX) $(CXXFLAGS) -c $< -o $@