FROM ubuntu:latest

RUN apt -get -y update && apt -get install -y

RUN apt -get -y install clang 

COPY ./CAPSTONE-24/Docker learn

WORKDIR ./CAPSTONE-24/Docker learn

RUN clang++ factorial.cpp

CMD ["./a"]