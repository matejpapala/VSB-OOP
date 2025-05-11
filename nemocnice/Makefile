# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -g

# Target executable name
TARGET = main

# Source files
SRCS = \
	main.cpp \
	hospitalChain.cpp \
	hospital.cpp

# Automatically generate list of object files
OBJS = $(SRCS:.cpp=.o)

# Header dependencies (for reference)
DEPS = \
	hospitalChain.h \
	hospital.h \
	doctor.h \
	patient.h \
	specialHospital.h

# Default rule
all: $(TARGET)

# Link step
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Compile step
%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)
