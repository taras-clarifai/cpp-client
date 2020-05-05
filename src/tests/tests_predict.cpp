#include <grpcpp/grpcpp.h>
#include <gtest/gtest.h>

#include "proto/clarifai/api/resources.pb.h"
#include "proto/clarifai/api/service.pb.h"
#include "proto/clarifai/api/service.grpc.pb.h"

class ClarifaiTestsSuite: public ::testing::Test
{
protected:
    virtual void SetUp() {
    }

    virtual void TearDown() {
    }
};

TEST_F (ClarifaiTestsSuite, TestPlaceholder) {
    std::string address("api-grpc.clarifai.com:18080");

    auto stub = clarifai::api::V2::NewStub(
                grpc::CreateChannel(
                    address,
                    grpc::InsecureChannelCredentials()));
    grpc::ClientContext context;
    context.AddMetadata("authorization", "Key 3d050aada06d4b16ba1da82afe67c468");
    clarifai::api::PostModelOutputsRequest request;
    request.set_model_id("aaa03c23b3724a16a56b629203edc62c");
    auto *image = new clarifai::api::Image();
    image->set_url("https://samples.clarifai.com/metro-north.jpg");
    auto *data = new clarifai::api::Data();
    data->set_allocated_image(image);
    request.add_inputs()->set_allocated_data(data);
    clarifai::api::MultiOutputResponse response;
    auto status = stub->PostModelOutputs(&context, request, &response);
    ASSERT_TRUE(status.ok());
    ASSERT_EQ(response.outputs(0).data().concepts(0).name(), "train");
}
