# Compilateur et options
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -I$(INCLUDE_DIR) -g
LDFLAGS =

# Répertoires
SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build

# Nom de l'exécutable
TARGET = main

# Fichiers source et objets
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Règle principale
all: $(TARGET)

# Édition des liens
$(TARGET): $(OBJS) | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Compilation des fichiers source
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Création du répertoire build si inexistant
$(BUILD_DIR):
	@mkdir -p $@

exe:
	./main

# Nettoyage des fichiers objets et de l'exécutable
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# Nettoyage complet
distclean: clean

# Assure que les règles spéciales ne soient pas confondues avec des fichiers
.PHONY: all clean distclean