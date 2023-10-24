#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_
#include <iostream>
#include <string>
#include <stdexcept>

class bad_hmean : public std::logic_error
{
public:
    explicit bad_hmean(const std::string &s = "Error in bad_hmean object\nhmean() arguments should be a != -b\n") : std::logic_error(s) {}
};

class bad_gmean : public std::logic_error
{
public:
    explicit bad_gmean(const std::string &s = "Error in bad_hmean object\ngmean() arguments should be >= 0\n") : std::logic_error(s) {}
};

#endif