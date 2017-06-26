cmake_minimum_required(VERSION 2.6)
project(pcap-test C)

add_executable(pcap-test main.c)

include(FindPCAP.cmake)
target_link_libraries(pcap-test ${PCAP_LIBRARY})
