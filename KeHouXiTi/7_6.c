//在有序序列中，插入若干数，使数列再插入的过程中，始终保持有序
#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,i,j,x;
    printf("请输入原始数组中得数据规模：\n");
    scanf("%d",&n);
    getchar();
    printf("请输入插入数据规模：\n");
    scanf("%d",&m);
    int *a=(int *)malloc((n+m)*sizeof(int));
    printf("请输入原始数组中的数据:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //循环插入数据
    for(i=0;i<m;i++){
        printf("请输入你要插入的数据：\n");
        scanf("%d",&x);
        //找到插入位置
        j=n-1;
        while(j>=0&&a[j]>x){
            a[j+1]=a[j];    //元素后移
            j--;
        }
        a[j+1]=x;
        n++;
    }

    //输出数据
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    //释放内存
    free(a);
    return 0;
}