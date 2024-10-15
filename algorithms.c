// highest value in the array

int max_highest()
{
    int i, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, max = arr[0];

    for (i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The Largest value in the array is: %d", max);

    return 0;
}

// Reverse n integer input: 12345; output: 54321

int reversed_5_integer(int n){
    int reversed_n = 0;

    while (n != 0){
        int temp = n % 10;
        reversed_n = reversed_n * 10 + temp;
        n /= 10;
    }

// Greatest common Divisor GCD

int find_gcd(int a, int b){
    if (b == 0){
        return a;
    } else{
        return find_gcd(b, a % b);
    }
}