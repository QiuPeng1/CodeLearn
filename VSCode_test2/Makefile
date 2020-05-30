MainExt     =.exe
SourceExt   =.c
TargetExt   =.o

OBJ_DIR := obj
BIN_DIR := bin
MAIN_SRC_DIR := main/src
MAIN_INC_DIR := main/inc
HELLO1_SRC_DIR := hello1/src
HELLO1_INC_DIR := hello1/inc
HELLO2_SRC_DIR := hello2/src
HELLO2_INC_DIR := hello2/inc

cc := gcc
CFLAGS := -g -Wall -I./$(MAIN_INC_DIR) -I./$(HELLO1_INC_DIR) -I./$(HELLO2_INC_DIR) -DDEBUG

MAIN_SRCS := $(wildcard $(MAIN_SRC_DIR)/*.c)
MAIN_HDRS := $(wildcard $(MAIN_INC_DIR)/*.h)
HELLO1_SRCS := $(wildcard $(HELLO1_SRC_DIR)/*.c)
HELLO1_HDRS := $(wildcard $(HELLO1_INC_DIR)/*.h)
HELLO2_SRCS := $(wildcard $(HELLO2_SRC_DIR)/*.c)
HELLO2_HDRS := $(wildcard $(HELLO2_INC_DIR)/*.h)
OBJS := $(patsubst $(MAIN_SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(MAIN_SRCS))
OBJS += $(patsubst $(HELLO1_SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(HELLO1_SRCS))
OBJS += $(patsubst $(HELLO2_SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(HELLO2_SRCS))

TARGET := $(BIN_DIR)/main$(MainExt)

.DEFAULT_GOAL := $(TARGET)

$(TARGET): $(OBJS)
	$(cc) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(MAIN_SRC_DIR)/%.c
	$(cc) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/%.o: $(HELLO1_SRC_DIR)/%.c
	$(cc) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/%.o: $(HELLO2_SRC_DIR)/%.c
	$(cc) $(CFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	del .\$(BIN_DIR)\*.exe
	del .\$(OBJ_DIR)\*.o
