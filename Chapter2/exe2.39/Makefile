CROSS_COMPILE ?=

CC	:= $(CROSS_COMPILE)gcc
CXX	:= $(CROSS_COMPILE)g++
CFLAGS	 ?= -O2 -W -Wall -Iinclude
CXXFLAGS ?= -O2 -W -Wall -std=c++11 -Iinclude

LDFLAGS	?=
#LIBS	:= -lrt
LIBS	:= 

APP  = exe2.39

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

all: $(APP)

$(APP): $(APP).o
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS)

clean:
	-rm -f *.o
	-rm -f $(APP)
