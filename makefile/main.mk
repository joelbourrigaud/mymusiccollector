MKDIR = mkdir
RM = rm
CC = gcc


LIBS =
CFLAGS = -Wall

BASE_DIR = .
MAKEFILE_DIR = makefile
SRC_DIR = . \
					piste/com \
					artiste/com \
					album/com \
					database/com

MAKEFILE_PATH = $(BASE_DIR)/$(MAKEFILE_DIR)
BIN_PATH = $(BASE_DIR)/bin
LIB_PATH = $(BASE_DIR)/lib
OBJ_PATH = $(BASE_DIR)/obj
SRC_PATH = $(addprefix $(BASE_DIR)/src/, $(SRC_DIR))
INCLUDE_PATH = $(addprefix "-I", $(SRC_PATH))

# les dossiers seront référencés dans vpath ;-)
SOURCES = main.c
SOURCES += piste.c
SOURCES += artiste.c
SOURCES += album.c

OBJS = $(addprefix $(OBJ_PATH)/, $(SOURCES:.c=.o))

MYBINARY = musiccollector


# default target definition for make
.DEFAULT_GOAL := mymusiccollector
# Internal makefile variable used to defined user sources directory for target "%.o : %.c"
VPATH := $(SRC_PATH)


# Include other makefile
include $(MAKEFILE_PATH)/process.prepare.mk	
include $(MAKEFILE_PATH)/process.compile.mk	

display-var:
	@echo "$(BIN_PATH)"
	@echo "$(LIB_PATH)"	
	@echo "$(OBJ_PATH)"	
	@echo "$(SRC_PATH)"	
	@echo "$(SRC_DIR)"	
	@echo "$(INCLUDE_PATH)"
	@echo "$(SOURCES)"
	@echo "$(OBJS)"


mymusiccollector: clean prepare debug
	@echo "Creation du binaire terminee"
	
clean: clean-files
	@echo "Cleaning done.";

