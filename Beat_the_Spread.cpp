/* **************************************************************************

    * File Name : Beat_the_Spread.cpp

    * Creation Date : 2018-09-12 13:51:50

    * Last Modified : 2018-09-24 15:24:50

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2; //第一隊分數、第二隊分數
    int numOfInput; //資料組數
    int firstInput, secondInput; //兩數和、兩數差

    cin >> numOfInput; //輸入組數
    for(int i = 0; i < numOfInput; i++)
    {
        num_1 = num_2 = -1; //初始化兩隊分數
        cin >> firstInput >> secondInput; //輸入兩數和與兩數差
        if(firstInput < secondInput || firstInput < 0 || secondInput < 0)
            cout << "impossible" << endl; //若分數小於0或後者分數大於前者
        else
        {
            //一個一個數去測試
            for(int j = 0; j < firstInput; j++)
                for(int k = 0; k < firstInput; k++)
                    if((k + j == firstInput) && (k - j == secondInput))
                    {
                        num_1 = k;
                        num_2 = j;
                    }
            if(num_1 >= 0 && num_2 >= 0)
                cout << num_1 << " " << num_2 << endl; //若皆大於0則輸出
            else
                cout << "impossible" << endl;
        }
    }
    return 0;
}
