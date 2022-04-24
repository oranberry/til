#include <stdio.h>

// structure tag 사용
struct Game
{
    char *name;
    int year;
    int price;
    char *company;
    // 구조체 안에 구조체를 넣을 수 있다
    struct Game *friendGame; // 연관 업체 게임
};

// typedef 사용
typedef struct
{
    char *name;
    int year;
    int price;
    char *company;

    struct Game *friendGame; // 연관 업체 게임
} GAME_INFO;

int main()
{
    // tag 사용해서 structure variable 선언
    struct Game gameInfo1;

    gameInfo1.name = "나도게임";
    gameInfo1.year = 2017;
    gameInfo1.price = 50;
    gameInfo1.company = "나도회사";

    // 구조체 출력
    printf("--- 게임 출시 정보 --- \n");
    printf("    게임명: %s\n", gameInfo1.name);
    printf("    발매년도: %d\n", gameInfo1.year);
    printf("    가격: %d\n", gameInfo1.price);
    printf("    제작사: %s\n", gameInfo1.company);

    // 구조체를 선언하면서 동시에 배열처럼 초기화 할 수도 있다.
    struct Game gameInfo2 = {"너도게임", 2017, 100, "너도회사"};

    // 구조체 출력
    printf("\n\n--- 또 다른 게임 출시 정보 --- \n");
    printf("    게임명: %s\n", gameInfo2.name);
    printf("    발매년도: %d\n", gameInfo2.year);
    printf("    가격: %d\n", gameInfo2.price);
    printf("    제작사: %s\n", gameInfo2.company);

    // 구조체 배열
    struct Game gameArray[2] = {
        {"나도게임", 2017, 50, "나도회사"},
        {"너도게임", 2017, 100, "너도회사"}};

    // 구조체 포인터
    struct Game *gamePtr;
    gamePtr = &gameInfo1;
    printf("\n\n--- 미션맨 게임 출시 정보 --- \n");
    printf("    게임명: %s\n", gamePtr->name);    // (*gamePtr).name
    printf("    발매년도: %d\n", gamePtr->year);  // (*gamePtr).year)
    printf("    가격: %d\n", gamePtr->price);     // (*gamePtr).price)
    printf("    제작사: %s\n", gamePtr->company); // (*gamePtr).company)

    // 연관 업체 게임 소개 (구조체 안의 구조체)
    gameInfo1.friendGame = &gameInfo2;
    printf("\n\n--- 연관 업체 게임 출시 정보 --- \n");
    printf("    게임명: %s\n", gameInfo1.friendGame->name);
    printf("    발매년도: %d\n", gameInfo1.friendGame->year);
    printf("    가격: %d\n", gameInfo1.friendGame->price);
    printf("    제작사: %s\n", gameInfo1.friendGame->company);

    typedef struct Game 게임정보; // struct Game -> 게임정보
    게임정보 game1;
    game1.name = "한글 게임";
    game1.year = "2015";

    GAME_INFO game2;
    game2.name = "한글 게임2";
    game2.year = "2014";

    return 0;
}
