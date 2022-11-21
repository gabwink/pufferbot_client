#include <easy_tcp.h>
#include <thread>
#include <chrono>
#include <iostream>

using namespace easy_tcp;
using namespace std::chrono_literals;
using namespace std;

char message[3];
char left;
char right;





int main ( ){
    Client c;
//    std::cout << "CONNNECT: " << c.connect("192.168.1.1", 4500) << std::endl;

//    std::cout << c.connect("127.0.0.1", 4500) << std::endl;
//    std::cout << c.connect("192.168.137.154", 4501) << std::endl;
    std::cout << c.connect("192.168.137.155", 4500) << std::endl;

//    message[0] = (char) 120;
//    message[1] = (char) 120;
//    message[2] |= 1UL << 4;
//
//    cout << c.easy_tcp::Connection::send_data(message, 3) << endl;

//    message[2] &=~(1UL << 4);
//    cout << c.easy_tcp::Connection::send_data(message, 3) << endl;

//    message[0] = (char) 0;
//    message[1] = (char) 0;
//
//    cout << c.easy_tcp::Connection::send_data(message, 3) << endl;
//
//    while (true);

//    int p;
    while (true);
//    std::cout << "received :" << p << std::endl;
    std::this_thread::sleep_for(30s);



    c.disconnect();
}

////    int p;
////    while (!c.get_data(p));
////    std::cout << "received :" << p << std::endl;
//std::this_thread::sleep_for(30s);
// 256
// 450


