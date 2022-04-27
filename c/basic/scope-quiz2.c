// What is the output ?
int b = 0, c = 2;
int main(void)
{
    int b = 2;
    c++;
    f();
    printf(“% d % d\n”, b, c);
}
void f(void)
{
    int b = 5;
    b++;
    printf(“% d % d ”, b, c);
}