int asdas(int input1, int input2[])
{
    sort(input2, input1 + input2);
    int csum = 0, res = 0;
    for (int i = input1 - 1; i >= 0; i--)
    {
        csum += input2[i];
        if (csum < 0)
        {
            break;
        }
        res += csum;
    }

    return res;
}