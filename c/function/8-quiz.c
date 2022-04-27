int f(int num)
{
    if (num == 1 || num == 2)
    {
        return 1;
    }
    else
        return f(num - 1) + f(num - 2);
}
// What is f(5)?