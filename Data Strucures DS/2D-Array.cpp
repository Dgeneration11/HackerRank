/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int hourglassSum(vector<vector<int>> arr)
{
    int sum, max = -99999, c = 0;             
    for (int i = 0; i <= arr.size() - 3; i++)
    {
        for (int j = 0; j <= arr.size() - 3; j++) 
        {                                         
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            sum = sum + arr[i+1][j+1] + arr[i+2][j]+arr[i+2][j+1] + arr[i+2][j+2];

            if (sum > max)
                max = sum; 
        }
    }
    return max;
}


