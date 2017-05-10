#!/usr/bin/python
import sys

tokens = ["short int","int","double"]
outFile = open("output", 'w')
template = """{
    std::vector<###> vec1;
    vec1.push_back(shortInt);
    vec1.emplace_back(uShortInt);
    vec1.push_back(Int);
    vec1.emplace_back(uInt);
    vec1.push_back(longInt);
    vec1.push_back(uLongInt);
    vec1.push_back(longLongInt);
    vec1.emplace_back(uLongLongInt);
  }"""
for token in tokens:
    outFile.write(template.replace("###", token) + "\n")

outFile.close()
