all:test_server.cpp server.cpp server.h test_client.cpp client.cpp
	g++ -o test_client test_client.cpp client.cpp -lpthread
	g++ -o test_server test_server.cpp server.cpp -lpthread -lmysqlclient
test_server: test_server.cpp server.cpp server.h
	g++ -o test_server test_server.cpp server.cpp -lpthread -lmysqlclient
test_client: test_client.cpp client.cpp client.h
	g++ -o test_client test_client.cpp client.cpp -lpthread
clean:
	rm test_server
	rm test_client