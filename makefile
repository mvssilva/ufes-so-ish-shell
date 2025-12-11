CC = gcc
CFLAGS = -Wall -g
# Lista de todos os arquivos objeto necessários
OBJS = main.o io.o

# Nome do executável final
TARGET = ish

# Regra principal
all: $(TARGET)

# Como ligar os objetos para criar o executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Regra genérica para compilar .c em .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza
clean:
	rm -f *.o $(TARGET)