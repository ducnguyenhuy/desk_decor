CXX       := g++
CXXFLAGS  := -I../../src                                		\
			 -I.                                        		\
			 -I../../thirdparty/googletest/googletest/include 	\
			 -I../../thirdparty/cpp-httplib             		\
			 -I../../thirdparty/spdlog/include

LDFLAGS   := -L../../thirdparty/spdlog/build -lspdlog   		\
			 -L../../thirdparty/googletest/build/lib -lgmock -lgtest -lpthread

SRCS      := unittest_gold_price.cpp                    		\
			 ../../src/gold_price.cpp

TARGET    := unittest_gold_price

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS)

clean:
	rm -f $(TARGET)