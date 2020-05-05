#include <gtest/gtest.h>

class ClarifaiTestsSuite: public ::testing::Test
{
protected:
    virtual void SetUp() {
    }

    virtual void TearDown() {
    }
};

TEST_F (ClarifaiTestsSuite, TestPlaceholder) {
    ASSERT_EQ(2+2, 4);
}
