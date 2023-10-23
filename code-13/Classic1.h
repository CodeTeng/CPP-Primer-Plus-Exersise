#ifndef CLASSIC1_H_
#define CLASSIC1_H_

#include "Cd1.h"

class Classic : public Cd
{
private:
    char cdstr[50];

public:
    Classic() : Cd() { cdstr[0] = '\0'; }
    Classic(const char *s, const char *s1, const char *s2, int n, double x);
    Classic(const char *s, const Cd &d);
    ~Classic() = default;
    void Report() const;
    Classic &operator=(const Classic &cs);
};

#endif