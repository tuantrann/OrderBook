#ifndef ORDERBOOK_ORDERBOOK_H
#define ORDERBOOK_ORDERBOOK_H

#include <map>

class OrderBook {
    std::map<int, int> bids, asks;
public:
    inline bool is_empty() const {
        return bids.empty() && asks.empty();
    }
};


#endif //ORDERBOOK_ORDERBOOK_H
