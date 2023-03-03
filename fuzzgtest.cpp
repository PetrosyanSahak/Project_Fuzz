#include "symbolic.h"
#include "gcd.cpp"
#include <gtest/gtest.h>

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

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size)
{
        static int x;
        //if (x != 0)
         // exit(x);
        if(Size < 1000) return 1;
        //fuzzindex = 0;
        //static int fuzzcount = 0;
        //fuzzcount++;
        //if(fuzzcount > 1000)
        //  exit(0);
        std::cout << "Return code is " << x << std::endl;
  symbolic_int a;
  int b = 1/a;
        for(int i = 0; i < 1000; ++i)
                globalbyteread[i] = Data[i];
        int argc = 1;
        char t = 'a';
        char* q = &t;
        char** argv = &q;
          
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  
  testing::InitGoogleTest(&argc, argv);
  x = RUN_ALL_TESTS();
  
  return 0; 
}
