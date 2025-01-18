TARGET = unittest_gold_price
CXX = g++

CXXFLAGS = -I../../thirdparty/googletest/googletest/include/
LDFLAGS = -L../../thirdparty/googletest/build/lib -lgmock_main -lgmock -lgtest -lgtest_main -lpthread

SOURCES = unittest_gold_price.cpp
HEADERS = unittest_gold_price.h

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CXX) -o $(TARGET) $(SOURCES) $(CXXFLAGS) $(LDFLAGS)

clean:
	rm -f $(TARGET)