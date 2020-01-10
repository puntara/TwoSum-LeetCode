#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nums []= {2,7,11,15,50};
    int target =61;
    int lengthOfNums= sizeof(nums)/sizeof(nums[0]);// calculate length of nums//

    int i, j;
        for (i=0;i<=lengthOfNums; i++)
        {
            for (j=i+1; j<=lengthOfNums;j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    printf("%d, %d", i, j);
                }
            }
        }
    return 0;
}
