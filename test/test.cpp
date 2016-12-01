#include <gtest/gtest.h>
#include <cstdlib>
#include "add.h"
#include <string> 

using namespace std;

TEST(Addition, can_empty_str)
{
	string mass[3] = {"","",""};
	EXPECT_EQ(maxPrefix(mass,3),"");
}

TEST(Addition, test1)
{
	string mass[3] = {"1","1","1"};
	EXPECT_EQ(maxPrefix(mass,3),"1");
}

TEST(Addition, test2)
{
	string mass[3] = {"124","123","123"};
	EXPECT_EQ(maxPrefix(mass,3),"12");
}

TEST(Addition, test3)
{
	string mass[4] = {"12", "12468","12368","123"};
	EXPECT_EQ(maxPrefix(mass,4),"12");
}

TEST(Addition, test4)
{
	string mass[4] = {"f923fu934", "f923fu9348","f923fusdlkfkj","f923fuwpeoi"};
	EXPECT_EQ(maxPrefix(mass,4),"f923fu");
}

TEST(Addition, test5)
{
	string mass[3] = {"12345","12345","12345"};
	EXPECT_EQ(maxPrefix(mass,3),"12345");
}

TEST(Addition, can_null_str1)
{
	string mass[3] = {"1","1","1"};
	EXPECT_EQ(maxPrefix(mass,3),"1");
}

TEST(Addition, can_null_str2)
{
	string mass[3] = {"1","1","1"};
	EXPECT_EQ(maxPrefix(mass,3),"1");
}

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  int _return = RUN_ALL_TESTS();
  system("pause");
  return _return;
}