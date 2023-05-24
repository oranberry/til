// 접근자 프로퍼티 (Accessor Property)
// Accessor properties are methods that get or set the value of an object. 
// For that, we use these two keywords:
// get: to define a getter method to get the property value 
// set: to define a setter method to set the property value

class Student {
  constructor(firstName, lastName) {
    this.firstName = firstName;
    this.lastName = lastName;
  }
  // accessor property(getter)
  // A getter method is created to access the property of an object.
  get fullName() {
    return `${this.lastName} ${this.firstName}`;
  }
  // accessor property(setter)
  // A setter method is used to change the value of an object. 
  set fullName(value) {
    console.log('set', value);
  }
}


const student = new Student('지수', '신');

// accessing data property
console.log(student.firstName);     // 지수

// accessing getter methods
// When accessing the value, we access the value as a property.
console.log(student.fullName);      // 신 지수

// try to access as a method ❌
// When trying to access the value as a method, an error occurs. 
// console.log(student.fullName());  // error


student.firstName = '사라';
console.log(student.firstName);     // 사라
console.log(student.fullName);      // 신 사라


// setter methods
student.fullName = '김 수지';       // set 김 수지

console.log(student.firstName);   // 사라
console.log(student.fullName);    // 신 사라

student.fullName = '김 희애';        // set 김 희애