#include "gtest/gtest.h"

TEST(IO_operations, Input) {
    ASSERT_EQ(2, 2);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}