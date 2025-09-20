#include <gtest/gtest.h>
#include "../include/palindrome.h"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(palindrome(""));
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(palindrome("abba"));
}

TEST(test_03, basic_test_set)
{
    ASSERT_FALSE(palindrome("abbaa"));
}

TEST(test_04, basic_test_set)
{
    ASSERT_TRUE(palindrome("Abba"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}