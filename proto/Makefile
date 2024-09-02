CPP_DEST := ../client//rsh/src

all:
	protoc --cpp_out=$(CPP_DEST)  messages.proto routes.proto
	protoc --grpc_out=$(CPP_DEST) --plugin=protoc-gen-grpc=`which grpc_cpp_plugin`  routes.proto