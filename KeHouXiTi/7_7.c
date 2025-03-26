//将两个升序序列合并仍然保持有序
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1,n2,i1,i2;
    printf("请输入序列一中的数据规模：\n");
    scanf("%d",&n1);
    printf("请输入序列二中的数据规模：\n");
    scanf("%d",&n2);
    int *a=(int *)malloc((n1+n2)*sizeof(int));
    int *b=(int *)malloc((n2)*sizeof(int));
    printf("请输入序列一中的数据：\n");
    for(i1=0;i1<n1;i1++){
        scanf("%d",&a[i1]);
    }
    printf("请输入序列二中的数据：\n");
    for(i2=0;i2<n2;i2++){
        scanf("%d",&b[i2]);
    }
    //插入排序
    for(i2=0;i2<n2;i2++){
        int index=n1-1;
        while(index>=0&&a[index]>b[i2]){
            a[index+1]=a[index];
            index--;
        }
        a[index+1]=b[i2];
        n1++;
    }
    //排序之后输出结果
    for(i1=0;i1<n1;i1++){
        printf("%d ",a[i1]);
    }
    //释放内存
    free(a);
    free(b);
    return 0;
}