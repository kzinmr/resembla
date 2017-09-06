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
    optional :text, :string, 1
    optional :score, :float, 2
  end
end

module Resembla
  module Server
    ResemblaRequest = Google::Protobuf::DescriptorPool.generated_pool.lookup("resembla.server.ResemblaRequest").msgclass
    ResemblaOnDemandRequest = Google::Protobuf::DescriptorPool.generated_pool.lookup("resembla.server.ResemblaOnDemandRequest").msgclass
    ResemblaResponse = Google::Protobuf::DescriptorPool.generated_pool.lookup("resembla.server.ResemblaResponse").msgclass
  end
end
