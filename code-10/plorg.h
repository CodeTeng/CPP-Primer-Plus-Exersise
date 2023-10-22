#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
    char name_[20];
    int ci_;
public:
    Plorg();
    Plorg(int ci, const char *name = "Plorg");
    void setCi(int ci);
    void show() const;
};

#endif