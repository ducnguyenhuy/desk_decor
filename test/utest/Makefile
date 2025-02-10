CXX       := g++
CXXFLAGS  := -I../../src                                		\
			 -I.                                        		\
			 -I../../thirdparty/googletest/googletest/include 	\
			 -I../../thirdparty/cpp-httplib             		\
			 -I../../thirdparty/spdlog/include					\
			 -I/usr/local/include

LDFLAGS   := -L../../thirdparty/spdlog/build -lspdlog   		\
			 -L../../thirdparty/googletest/build/lib -lgmock -lgtest -lpthread  \
			 -L/usr/local/bin/openssl -lssl -lcrypto

SRCS      := unittest_gold_price.cpp                    		\
			 ../../src/gold_price.cpp

TARGET    := unittest_gold_price
CFLAGS += -DCPPHTTPLIB_OPENSSL_SUPPORT

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS) $(CFLAGS)

clean:
	rm -f $(TARGET)