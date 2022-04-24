#include <stdio.h>
struct ProductInfo
{
    int num;        // 4 bytes
    char name[100]; // 100 bytes
    int cost;       // 4 bytes
};                  // 108 bytes

// call by value -> call by reference 바꾸기
void productSale(struct ProductInfo *p, int percent)
{
    p->cost -= p->cost * percent / 100;
}
void productSwap(struct ProductInfo *a, struct ProductInfo *b)
{
    struct ProductInfo temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    struct ProductInfo myProduct = {4797283, "제주 한라봉", 20000};
    struct ProductInfo otherProduct = {4797284, "성주 꿀참외", 10000};

    productSwap(&myProduct, &otherProduct);

    // 구조체와 메모리
    printf("상품 번호: %d\n", &myProduct.num); // 632
    printf("상품 이름: %d\n", myProduct.name); // 636
    printf("가    격: %d\n", &myProduct.cost); // 736

    printf("%d\n", &myProduct); // 632

    productSale(&myProduct, 10);

    // 구조체 포인터
    struct ProductInfo *ptr_product = &myProduct;
    printf("상품 번호: %d\n", ptr_product->num);  // (*ptr_product).num
    printf("상품 이름: %d\n", ptr_product->name); // (*ptr_product).name
    printf("가    격: %d\n", ptr_product->cost);  // (*ptr_product).cost

    return 0;
}
