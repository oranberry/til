// 💫 C++ Fundamental Types

// 👉🏻 Enumerations (enum)
// An enumeration is a user-defined type that can hold any of a set of discrete values.
// Once defined, enumerations behave much like an integer type.
// A common use of enumerations is to provide meaningful names to a set of related values.
// Each element of an enumeration is associated with an integer value.
// By default, these values count up from 0, but it is also possible to define explicit constant values
enum Day
{
    SUN, // associated with 0
    MON, // associated with 1
    TUE, // ...
    WED, // ...
    THU,
    FRI,
    SAT
};
enum Mood
{
    HAPPY = 3,
    SAD = 1,
    ANXIOUS = 4,
    SLEEPY = 2
};

Day today = THU;      // today may be any of MON, ... , SAT
Mood myMood = SLEEPY; // myMood may be HAPPY, ... , SLEEPY

// We write enumeration names and other constants with all capital letters
