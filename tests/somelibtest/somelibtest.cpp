#include "gtest/gtest.h"

#include "../../somelib/somelib.hpp"

TEST(someTest, concretetest)
{
    Somelib obj{2, 3};
    EXPECT_EQ(5, obj.GetSum());
}
