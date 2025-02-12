int main(){
int a[10];
int n=5;
printf("enter the elements");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
 printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    int j;
for(j=0;j<n-1;j++){
        int i;
    for(i=0;i<n-1-j;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}
 printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
return 0;
}