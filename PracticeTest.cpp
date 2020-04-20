/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_a_palindrome_odd)
{
    Practice obj;
    bool actual = obj.isPalindrome("tacocat");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_a_palindrome_odd)
{
    Practice obj;
    bool actual = obj.isPalindrome("tacokat");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, is_a_palindrome_with_spaces)
{
    Practice obj;
    bool actual = obj.isPalindrome("A nut for a jar of tuna");
    ASSERT_TRUE(actual);
}
