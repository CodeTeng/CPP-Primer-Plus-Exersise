#ifndef CLASSIC2_H_
#define CLASSIC2_H_

#include "Cd2.h"

class Classic : public Cd
{
private:
    char *cdstr;

public:
    Classic();
    Classic(const char *s, const char *s1, const char *s2, int n, double x);
    Classic(const char *s, const Cd &d);
    virtual ~Classic();
    virtual void Report() const;
    Classic &operator=(const Classic &cs);
};

#endif