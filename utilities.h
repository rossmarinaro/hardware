#pragma once
#include <fstream>

static void write_log(const char* msg)
{
    std::ofstream logs;
    logs.open("logs.txt", std::ofstream::app | std::ofstream::out);
    logs << msg;
    logs.close();
}