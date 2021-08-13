#include <gtest/gtest.h>
#include "blah.h"

TEST(TestBlah, OutputTest)
{
	EXPECT_EQ(3,Sum(1,2));
}