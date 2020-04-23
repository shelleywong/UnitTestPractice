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

// check if capital letters make a difference
TEST(PracticeTest, is_a_palindrome_with_capitals)
{
    Practice obj;
    bool actual = obj.isPalindrome("MadAm");
    ASSERT_TRUE(actual);
}

// check 1 char palindrome
TEST(PracticeTest, is_a_palindrome_one_char)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

// check palindrome of numbers (true)
TEST(PracticeTest, is_a_palindrome_numbers)
{
    Practice obj;
    bool actual = obj.isPalindrome("0202020");
    ASSERT_TRUE(actual);
}

// check palindrome of numbers (false)
TEST(PracticeTest, is_not_a_palindrome_numbers)
{
    Practice obj;
    bool actual = obj.isPalindrome("202020");
    ASSERT_FALSE(actual);
}

// check palindrome with special chars mixed in
TEST(PracticeTest, is_a_palindrome_special_chars)
{
    Practice obj;
    bool actual = obj.isPalindrome("20/2/02");
    ASSERT_TRUE(actual);
}

// check palindrome with all special chars
TEST(PracticeTest, is_a_palindrome_special_chars)
{
    Practice obj;
    bool actual = obj.isPalindrome("!@#$$#@!");
    ASSERT_TRUE(actual);
}

// check if string is a palindrome (ignoring spaces)
TEST(PracticeTest, is_a_palindrome_with_spaces)
{
    Practice obj;
		string str = "A nut for a jar of tuna";
    bool actual = obj.isPalindrome(str);
    ASSERT_TRUE(actual);
}

// check if method to remove spaces actually removes spaces
TEST(PracticeTest, spaces_removed)
{
    Practice obj;
		string str = "never odd or even";
    string result = obj.removeSpaces(str);
    ASSERT_EQ(result,"neveroddoreven");
}

// check if method removed spaces (same string should be false)
TEST(PracticeTest, remove_spaces_not_same)
{
    Practice obj;
		string str = "never odd or even";
    string result = obj.removeSpaces(str);
    ASSERT_NE(result,"never odd or even");
}

// check if already sorted values remain sorted in descending order
TEST(PracticeTest, already_sorted)
{
    Practice obj;
		int first = 3;
		int second = 2;
		int third = 1;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first,second);
		ASSERT_GE(second,third);
}

// check if first and second values get changed to correct order
TEST(PracticeTest, sort_first_second)
{
    Practice obj;
		int first = 2;
		int second = 3;
		int third = 1;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first,second);
		ASSERT_GE(second,third);
}

// check if second and third values get changed to correct order
TEST(PracticeTest, sort_second_third)
{
    Practice obj;
		int first = 3;
		int second = 1;
		int third = 2;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first,second);
		ASSERT_GE(second,third);
}

// check if sorted correctly with repeat values
TEST(PracticeTest, sort_with_equal_values)
{
    Practice obj;
		int first = 1;
		int second = 3;
		int third = 1;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first,second);
		ASSERT_GE(second,third);
}

// check if values originally in opposite order get sorted correctly
TEST(PracticeTest, sort_backwards)
{
    Practice obj;
		int first = 1;
		int second = 2;
		int third = 3;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first,second);
		ASSERT_GE(second,third);
}

// check if negative values get sorted correctly
TEST(PracticeTest, sort_negative)
{
    Practice obj;
		int first = -3;
		int second = -2;
		int third = -1;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first,second);
		ASSERT_GE(second,third);
}

// check if negative, positive, zero gets sorted correctly
TEST(PracticeTest, sort_pos_zero_neg)
{
    Practice obj;
		int first = 3;
		int second = 0;
		int third = -2;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first,second);
		ASSERT_GE(second,third);
}
