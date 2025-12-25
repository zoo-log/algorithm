#include <iostream>

int main(void)
{

    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    float W, H;
    std::cin >> W >> H;

    float A = W * H / 2;
    printf("%.1f",A);

    return 0;
}
