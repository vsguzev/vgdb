#include "myproject.h"
#include <gtest/gtest.h>

TEST(SampleTest, AssertionTrue) {
  EXPECT_TRUE(true);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
