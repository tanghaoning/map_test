LIB = /home/thn/Wordfreq/thrift-examples/boost-install/lib
Include = /home/thn/Wordfreq/thrift-examples/boost-install/include

cc = g++ -O3 -std=c++11
server_objects = main.o CConHash.o CHashFun.o CMd5.o CMD5HashFun.o CNode_s.o CRBTree.o CVirtualNode_s.o 

all: boost_unorderedmap_int boost_unorderedmap_string c++11unorderedmap_int c++11unorderedmap_string stlmap_int stlmap_string

boost_unorderedmap_int:
	$(cc) -L$(LIB) -I$(Include) test_boostunorderedmap.cpp -o boost_unorderedmap_int

boost_unorderedmap_string:
	$(cc) -L$(LIB) -I$(Include) test_boostunorderedmap_string.cpp -o boost_unorderedmap_string
	
c++11unorderedmap_int:
	$(cc) test_c++11unorderedmap.cpp -o c++11unorderedmap_int
	
c++11unorderedmap_string:
	$(cc) test_c++11unorderedmap_string.cpp -o c++11unorderedmap_string
	
stlmap_int:
	$(cc) test_map.cpp -o stlmap_int
	
stlmap_string:
	$(cc) test_stlmap_string.cpp -o stlmap_string
	


clean:
	rm boost_unorderedmap_int boost_unorderedmap_string c++11unorderedmap_int c++11unorderedmap_string stlmap_int stlmap_string
