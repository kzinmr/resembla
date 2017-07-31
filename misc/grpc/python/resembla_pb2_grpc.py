# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc
from grpc.framework.common import cardinality
from grpc.framework.interfaces.face import utilities as face_utilities

import resembla_pb2 as resembla__pb2


class ResemblaServiceStub(object):

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.find = channel.unary_stream(
        '/resembla.server.ResemblaService/find',
        request_serializer=resembla__pb2.ResemblaRequest.SerializeToString,
        response_deserializer=resembla__pb2.ResemblaResponse.FromString,
        )


class ResemblaServiceServicer(object):

  def find(self, request, context):
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_ResemblaServiceServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'find': grpc.unary_stream_rpc_method_handler(
          servicer.find,
          request_deserializer=resembla__pb2.ResemblaRequest.FromString,
          response_serializer=resembla__pb2.ResemblaResponse.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'resembla.server.ResemblaService', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))
