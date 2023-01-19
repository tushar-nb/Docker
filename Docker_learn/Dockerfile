# FROM ubuntu:latest
FROM alpine

# RUN apt-get  update 
RUN apk add build-base

# RUN apt-get install 

# RUN apt-get  install clang 

COPY . .

WORKDIR "/"

RUN g++ factorial.cpp

CMD ["./a.exe"]