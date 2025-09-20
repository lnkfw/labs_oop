#include <gtest/gtest.h>
#include "../include/palyndrome.h"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(palyndrome(""));
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(palyndrome("abba"));
}

TEST(test_03, basic_test_set)
{
    ASSERT_FALSE(palyndrome("abbaa"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}