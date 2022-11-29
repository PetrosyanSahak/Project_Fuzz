#include "gcd.cpp"
#include "fuzzme"

TEST(gcd, fuzz_first_input) // should return 1 for prime numbers
{
  symbolic_int x;  // (int)Data[0];
  EXPECT_EQ(1, gcd(x, 9));
  EXPECT_EQ(1, gcd(x, 117));
  EXPECT_EQ(1, gcd(x, 37));
}

TEST(gcd, fuzz_two_inputs)
{
  symbolic<int> x, y;
  EXPECT_EQ(1, gcd(x, y));
  EXPECT_EQ(11, gcd(x, y));
  EXPECT_EQ(1, gcd(x, y));
}

TEST(gcd, fuzz_second_input)
{
  symbolic<int> x;
  EXPECT_EQ(6, gcd(36, x));
  EXPECT_EQ(10, gcd(20, x));
  EXPECT_EQ(7, gcd(63, x));
}

int main(int argc, char *argv[])
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS(); // tanel LLVM-i mej
}
