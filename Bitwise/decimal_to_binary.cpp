#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    long long n;
    std::cin >> n;
    std::string ans;

    // Handle positive numbers
    if (n >= 0)
    {
        while (n != 0)
        {
            int cool = n & 1;
            ans += std::to_string(cool);
            n = n >> 1;
        }
        if (ans.empty())
        {
            ans = "0";
        }
        std::reverse(ans.begin(), ans.end());
    }
    else
    { // Handle negative numbers
        n = std::abs(n);
        while (n != 0)
        {
            int cool = n & 1;
            ans += std::to_string(cool);
            n = n >> 1;
        }
        std::reverse(ans.begin(), ans.end());

        // Pad with leading zeros to make it 32 bits
        while (ans.size() < 32)
        {
            ans = '0' + ans;
        }

        std::cout<< ans << " ";

       

        for (int i = 0; i < ans.size();i++){
            if (ans[i] == '0'){
                ans[i] = '1';
            }
            else ans[i] = '0';
        }

        std::cout << ans << " " << std::endl;

        // Add 1 to get two's complement
        int carry = 1;
        for (int i = 31; i >= 0; --i)
        {
            int bit = ans[i] - '0' + carry;
            ans[i] = (bit % 2) + '0';
            carry = bit / 2;
        }






    }

    std::cout << ans << std::endl;

    return 0;
}
