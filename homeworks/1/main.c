int main(int argc, char const *argv[])
{
    int Sum1, k, n = 100, j;

    Sum1 = 0;
    k = 1;
    while (k <= n){
        for (j = 1; j <= n; j++)
            Sum1 = Sum1 + 1;
        k = k * 2;
    }
}
