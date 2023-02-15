#include<stdio.h>

int main()
{
    // float i=-10,j=11,k=1;
    // while(i<=10)
    // {
    //     printf("g++ -Dx_pos=%.1f main.cpp -o main -Ofast\n",i);

    //     // windows
    //     // printf("a.exe > \"images\\image%.0f.ppm\"\n\n",j);
    
    //     // Linux
    //     printf("./main > \"./images/image%.0f.ppm\"\n\n",j);
    //     i=i+0.2;
    //     j++;k++;
    // }

    //For converting
    int i;
    for(i=11;i<=111;i++)
        printf("magick \"images/image%d.ppm\" \"images/converted/image%d.png\"\n",i,i);
}