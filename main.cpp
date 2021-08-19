#include <iostream>
#include<OrderBookConfig.h>

int main(int argc, char* argv[]) {
    std::cout << "Hello, World!" << std::endl;

    std::cout << argv[0] << " Version " << ORDERBOOK_VERSION_MAJOR << "." << ORDERBOOK_VERSION_MINOR;

    return 0;
}

