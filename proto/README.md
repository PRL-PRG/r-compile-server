# Protocol  

The communication between the client and the server is done through gRPC. 

## Files

- messages.proto: messages exchanged between the client and the server
- routes.proto: services exposed by the server with the remote functions.

## Services

- `CompileService` runs on the server side to compile the code and return the result. It also has 
 an `Init` route to initialize the server (version of R on the client...)
- `FactService` runs on the client side and is interrogated by the server to get information to compile functions, 
  for instance, a value in an environment.


## Generating the code

Make sure you have `protoc` installed.

## Java

Run `make` to synchronize the proto to the java project. 

Then just compile the project through maven. The code will be generated in the `target/generated-sources/protobuf/grpc-java` and 
 `target/generated-sources/protobuf/java`  folders. They are both part of the `server` package.


## C++ 

Run the `Makefile` at the root of the project as `make proto`. The code will be generated in the `client/rsh/src` folder.