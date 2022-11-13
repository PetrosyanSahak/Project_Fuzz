#include "gcd.cpp"
#include "gtest.h"

TEST(gcd, gcd2Prime) // should return 1 for prime numbers
{
  EXPECT_EQ(1, gcd(7, 9));
  EXPECT_EQ(1, gcd(113, 117));
  EXPECT_EQ(1, gcd(53, 37));
}

TEST(gcd, gcd1Prime)
{
  EXPECT_EQ(1, gcd(13, 27));
  EXPECT_EQ(11, gcd(11, 121));
  EXPECT_EQ(1, gcd(11, 46));
}

TEST(gcd, gcdComposite)
{
  EXPECT_EQ(6, gcd(36, 66));
  EXPECT_EQ(10, gcd(20, 50));
  EXPECT_EQ(7, gcd(63, 70));
}

int main(int argc, char *argv[])
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
