 int i = 0, j = 0;
        int sum1 = 0, sum2 = 0, result = 0;
        int n = arr1.size(), m = arr2.size();

        // Traverse both arrays
        while (i < n && j < m)
        {
            if (arr1[i] < arr2[j])
            {
                sum1 += arr1[i];
                i++;
            }
            else if (arr1[i] > arr2[j])
            {
                sum2 += arr2[j];
                j++;
            }
            else
            { // arr1[i] == arr2[j]
                result += max(sum1, sum2) + arr1[i];
                sum1 = sum2 = 0; // Reset sums after considering the common element
                i++;
                j++;
            }
        }

        // Add remaining elements of arr1
        while (i < n)
        {
            sum1 += arr1[i];
            i++;
        }

        // Add remaining elements of arr2
        while (j < m)
        {
            sum2 += arr2[j];
            j++;
        }

        // Add the maximum of the remaining sums
        result += max(sum1, sum2);

        return result;