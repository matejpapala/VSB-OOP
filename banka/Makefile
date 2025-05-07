# Compiler a jeho přepínače
CXX       := g++
CXXFLAGS  := -std=c++17 -Wall -Wextra -pedantic

# Jméno výsledného spustitelného souboru
TARGET    := main

# Všechna zdrojová .cpp
SRC       := account.cpp        \
             bank.cpp           \
             creditAccount.cpp  \
             partnerAccount.cpp \
             main.cpp

# Objektové soubory
OBJ       := $(SRC:.cpp=.o)

# Hlavičky, na které závisí všechny .o
DEPS      := abstractAccount.h \
             account.h         \
             bank.h            \
             client.h          \
             creditAccount.h   \
             partnerAccount.h

.PHONY: all clean

all: $(TARGET)

# Link fáze
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Překlad jednotlivých .cpp
# Každý .o závisí na svém .cpp a na všech hlavičkách
%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
