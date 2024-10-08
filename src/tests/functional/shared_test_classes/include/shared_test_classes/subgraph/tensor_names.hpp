// Copyright (C) 2018-2023 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <tuple>
#include <string>
#include <vector>
#include <memory>

#include "shared_test_classes/base/layer_test_utils.hpp"
#include "ov_models/builders.hpp"

namespace SubgraphTestsDefinitions {

typedef std::tuple<
            std::string                        // Device name
> constResultParams;

class TensorNamesTest : public testing::WithParamInterface<constResultParams>,
                            virtual public LayerTestsUtils::LayerTestsCommon {
public:
    static std::string getTestCaseName(const testing::TestParamInfo<constResultParams>& obj);
protected:
    void SetUp() override;
};
}  // namespace SubgraphTestsDefinitions
