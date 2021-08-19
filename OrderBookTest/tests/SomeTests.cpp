#include <gtest/gtest.h>

TEST(OrderBookTest, OrderBookEmptyByDefault)
{
    OrderBook book;
    EXPECT_TRUE(book.is_empty());
}