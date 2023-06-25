#include <gtest/gtest.h>

int add(int a, int b) {
    return a + b;
}

TEST(AddTest, Positive) {
    EXPECT_EQ(add(1, 1), 2);
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(1, 3), 4);
}

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}