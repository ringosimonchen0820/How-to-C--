const int SIZE = 10;
int nums[SIZE] = {5,4,2,7,6,8,5,2,8,14};

/* 
Write code to perform the following array operations (Note that the number of clues vary, just because a [____] is not explicitly written in does not mean there should not be brackets).
*/

// #1 Square each number ((i.e., multiply each by itself)

for (int i = 0; i < SIZE; i++) // Iterates from index 0 to 9
{
    nums[i] = nums[i] * nums[i];
}

// #2 Add a random number between zero and 10 to
//  each number.

for (int i = 0; i < SIZE; i++)
{
    nums[i] += (rand() % 10) + 0;
}

// #3 Add to each number the number that follows in the
//  array. Skip the last value in the array.

for (int i = 0; i < SIZE-1; i++) // Iterates from 0 to 8
{
    nums[i] += nums[i+1];
}

// #4 Calculate the sum of all the numbers.

int sums = 0;

for (int i = 0; i < SIZE; i++)
{
    sums += nums[i];
}

// #5 Display the largest number in the array

int largest = nums[0]; // Assumming largest in the 0 index

for (int i = 0; i < SIZE; i++)
{
    if (nums[i] > largest) // Check if any element is larger than the current largest
    largest = nums[i]; // If so replace the element to the largest
}

cout << largest; // Print the largest number



