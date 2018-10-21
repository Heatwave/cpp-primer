int main27()
{
    int i = -1;
    //int &r = 0;   // invalid

    return 0;
}

void test0()
{
    int i2 = -2;
    int *const p2 = &i2;
}

void test1()
{
    const int i = -1, &r = 0;
}

void test2()
{
    int i2 = -2;
    const int *const p2 = &i2;
}

void test3()
{
    int i2 = -2;
    const int *p1 = &i2;
}

void test4()
{
    //const int *&const r2; // invalid
}

void test5()
{
    int i = -1;
    const int i2 = i, &r = i;
}

