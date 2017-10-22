# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: resembla.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "resembla.server.ResemblaRequest" do
    optional :query, :string, 1
  end
  add_message "resembla.server.ResemblaOnDemandRequest" do
    optional :query, :string, 1
    repeated :candidates, :string, 2
  end
  add_message "resembla.server.ResemblaResponse" do
    repeated :results, :message, 1, "resembla.server.ResemblaResponse.Result"
  end
  add_message "resembla.server.ResemblaResponse.Result" do
    optional :id, :int32, 1
    optional :text, :string, 2
    optional :score, :float, 3
  end
end

module Resembla
  module Server
    ResemblaRequest = Google::Protobuf::DescriptorPool.generated_pool.lookup("resembla.server.ResemblaRequest").msgclass
    ResemblaOnDemandRequest = Google::Protobuf::DescriptorPool.generated_pool.lookup("resembla.server.ResemblaOnDemandRequest").msgclass
    ResemblaResponse = Google::Protobuf::DescriptorPool.generated_pool.lookup("resembla.server.ResemblaResponse").msgclass
    ResemblaResponse::Result = Google::Protobuf::DescriptorPool.generated_pool.lookup("resembla.server.ResemblaResponse.Result").msgclass
  end
end
