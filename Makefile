CFLAGS  += -std=gnu99
LDFLAGS +=

TARGET  = au_array_test
OBJECTS = au_array.o      \
          au_array_test.o \

$(TARGET) : $(OBJECTS)

$(OBJECTS) : %.o : %.c

.PHONY : clean
clean :
	rm -rf $(TARGET) $(OBJECTS)

