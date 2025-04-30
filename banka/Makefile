# název překladače a přepínače
CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra -pedantic -g

# seznam zdrojáků, objektových souborů a hlaviček
SRCS := account.cpp bank.cpp creditAccount.cpp partnerAccount.cpp main.cpp
OBJS := $(SRCS:.cpp=.o)
DEPS := account.h bank.h client.h creditAccount.h partnerAccount.h

# jméno výsledného spustitelného souboru
TARGET := main

# výchozí cíl
all: $(TARGET)

# linkování
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# pravidlo pro překládání každého .cpp do .o
%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# vyčištění pracovního adresáře
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
