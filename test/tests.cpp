// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(TrainTest, test1) {
Train train(10);
EXPECT_EQ(10, train.solve());
}

TEST(TrainTest, test2) {
Train train(1000);
EXPECT_EQ(1000, train.solve());
}

TEST(TrainTest, test3) {
Train train(100000);
EXPECT_EQ(100000, train.solve());
}


