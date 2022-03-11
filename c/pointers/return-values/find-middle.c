int *find_middle(int a[], int n);
int main(){
    int N, i;
    int *mid;
    printf("Enter the size of an array: ");
    scanf("%d", &N);

    int b[N];
    printf("Enter the element of the array: ");
    for(i = 0; i < N; i++)
        scanf("%d", &b[i]);
    
    mid = find_middle(b, N);

    printf("The middle value is %d\n", *mid);
    return 0;
}

int *find_middle(int a[], int n){
    return &a[n/2];
}