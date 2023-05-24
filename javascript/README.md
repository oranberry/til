# What is JavaScript?

JavaScript(JS) is a programming language that is one of the core technologies of the World Wide Web, alongside HTML and CSS. It lets us add **interactivity** to pages e.g. you might have seen sliders, alerts, click interactions, popups, etc on different websites — all of that is built using JavaScript.

JavaScript is a lightweight, **interpreted**, or **just-in-time compiled** programming language with **first-class functions**. While it is most well-known as the scripting language for Web pages, many non-browser environments also use it, such as Node.js for writing server-side code in JavaScript, Electron for writing desktop applications, React Native for mobile applications, and so on. 자바스크립트 엔진이 있는 어떤 곳에서든 사용 할 수 있다.

JavaScript is a prototype-based, multi-paradigm, single-threaded, **dynamic language**, supporting object-oriented, imperative, and declarative (e.g. functional programming) styles.  
⭐️ 자바스크립트는 명령형(imperative), 함수형(functional), 프로토타입 기반(prototype-based) 객체 지향 프로그래밍을 지원하는 멀티 패러다임 프로그래밍 언어이다.

모든 브라우저는 JavaScript를 해석하고 실행할 수 있는 자바스크립트 엔진을 내장하고 있고 브라우저 뿐만 아니라 Node.js도 자바스크립트 엔진을 내장하고 있다. 기본적으로 브라우저에서 동작하는 코드는 Node.js 환경에서도 동일하게 작동하지만, 한 가지 주의해야 할 점은 브라우저와 Node.js의 용도가 다르다는 것이다. 브라우저는 HTML, CSS, 자바스크립트를 실행해 웹페이지를 브라우저 화면에 렌더링하는 것이 주된 목적이지만 Node.js는 브라우저 외부에서 자바스크립트 실행 환경을 제공하는 것이 주된 목적이다.

이처럼 브라우저는 ECMAScript와 DOM APIs, Network APIs, Audio/Video APIs, Storage APIs 같은 클라이언트 사이드 Web API를 지원한다(Front-end). Node.js는 클라이언트 사이드 Web API를 지원하지 않고 ECMAScript와 Crypto, HTTP, File, OS, Path, Stream 같은 Node.js API를 지원한다(Back-end).

<br>

### 참고 자료

https://developer.mozilla.org/en-US/docs/Web/JavaScript  
https://javascript.info  
https://www.codeguage.com/courses/js  
https://en.wikipedia.org/wiki/ECMAScript  
https://kangax.github.io/compat-table/es5

<br>

# History of JavaScript

JavaScript was initially created by Brendan Eich of NetScape and was first announced in a press release by Netscape in 1995. It has a bizarre history of naming; initially, it was named Mocha by the creator, which was later renamed LiveScript. In 1996, about a year later after the release, NetScape decided to rename it to JavaScript with hopes of capitalizing on the Java community (although JavaScript did not have any relationship with Java) and released Netscape 2.0 with the official support of JavaScript.

https://dev.to/iarchitsharma/the-history-of-javascript-5e98  
https://roadmap.sh/guides/history-of-javascript

<br>

초창기 자바스크립트는 웹페이지의 보조적인 기능을 수행하기 위해 한정적인 용도로 사용되었다. 이 시기에 대부분의 로직은 주로 웹 서버에서 실행되었고, 브라우저는 서버로부터 전달받은 HTML과 CSS를 단순히 **렌더링**하는 수준이었다.

⭐️ **렌더링**이란 HTML, CSS, JavaScript로 작성된 문서를 해석해서 브라우저에 시각적으로 출력하는 것을 말한다. 때로는 서버에서 데이터를 HTML로 변환해서 브라우저에게 전달하는 과정(SSR; Server Side Rendering)을 가리키기도 한다.

1. **Ajax (Asynchronous JavaScript and XML)**

   자바스크립트를 이용해 서버와 브라우저가 비동기(asynchronous) 방식으로 데이터를 교환할 수 있는 통신 기능인 Ajax가 XMLHttpRequest라는 이름으로 1999년에 등장했다. 이로 인해 웹페이지에서 변경할 필요가 없는 부분은 다시 렌더링하지 않고, 서버로부터 필요한 데이터만 전송받아 변경해야 하는 부분만 한정적으로 렌더링하는 방식이 가능해졌다. 이로써 웹 브라우저에서도 데스크톱 어플리케이션과 유사한 빠른 성능과 부드러운 화면 전환이 가능해졌다.

2. **jQuery**

   jQuery는 2006년에 등장해 DOM(Document Object Model)을 더욱 쉽게 제어하고 크로스 브라우징 이슈도 어느 정도 해결한다.

3. **V8 자바스크립트 엔진**

   더욱 빠르게 동작하는 자바스크립트 엔진이 필요하게 되면서 2008년에 이러한 요구에 부합하는 빠른 성능을 가진 구글의 V8 자바스크립트 엔진이 등장한다. V8의 등장으로 자바스크립트는 데스크톱 어플리케이션과 유사한 사용자 경험(User Experience)을 제공할 수 있는 웹 어플리케이션 프로그래밍 언어로 정착하게 되었다.

4. **Node.js**

   Node.js는 구글 V8 자바스크립트 엔진으로 빌드된 자바스크립트 런타임 환경(runtime environment)이다. 브라우저의 자바스크립트 엔진에서만 동작하던 자바스크립트를 브라우저 이외의 환경에서도 동작할 수 있도록 자바스크립트 엔진을 브라우저에서 독립시킨 자바스크립트 실행 환경이다. Node.js는 다양한 플랫폼에 적용할 수 있지만 서버 사이드 어플리케이션 개발에 주로 사용되며, 이에 필요한 모듈, 파일 시스템, HTTP 등 built-in API를 제공한다.

   Node.js는 비동기 I/O를 지원하며 단일 스레드 이벤트 루프 기반으로 동작함으로써 request 처리 성능이 좋다. 따라서 Node.js는 데이터를 실시간으로 처리하기 위해 I/O가 빈번하게 발생하는 SPA(single page application)에 적합하다. 하지만 CPU 사용률이 높은 어플리케이션에는 권장하지 않는다.

5. **SPA 프레임워크**

   모던 웹 어플리케이션은 데스크톱 어플리케이션과 비교해도 손색없는 성능과 사용자 경험을 제공하는 것이 필수가 되었고, 이러한 필요에 따라 많은 패턴과 라이브러리가 출현했다. 변경에 유연하면서 확장하기 쉬운 어플리케이션 아키텍처의 구축을 위해 필연적으로 프레임워크도 등장하게 되었다.

   이러한 요구에 맞춰 CBD(component based development) 방법론을 기반으로 하는 SPA가 대중화되면서 Angular, React, Vue.js 등 다양한 SPA 프레임워크/라이브러리 또한 많이 사용하고 있다.

<br>

# JavaScript Versions

JavaScript was invented by Brendan Eich, and in 1997 it became an ECMA standard. ECMAScript is the official language name. ECMAScript versions include ES1, ES2, ES3, ES5, and ES6

<br>

### 참고 자료

https://www.educative.io/blog/javascript-versions-history  
https://roadmap.sh/guides/history-of-javascript

<br>

# How to Run JavaScript?

자바스크립트는 HTML, CSS와 함께 웹을 구성하는 요소 중 하나라 웹 브라우저에서 동작하는 유일한 프로그래밍 언어이다. 자바스크립트는 개발자가 별도의 컴파일 작업을 수행하지 않는 **인터프리터 언어(interpreter language)** 이다. 대부분 모던 자바스크립트 엔진은 인터프리터와 컴파일러의 장점을 결합해 비교적 처리 속도가 느린 인터프리터의 단점을 해결했다. 인터프리터는 소스코드를 즉시 실행하고 컴파일러는 빠르게 동작하는 머신 코드를 생성하고 최적화한다. 이를 통해 컴파일 단계에서 추가적인 시간이 필요함에도 더욱 빠르게 코드를 실행할 수 있다. 현재는 컴파일러와 인터프리터의 기술적 구분이 점차 모호해져 가는 추세이지만, 자바스크립트는 런타임에 컴파일되며 실행 파일이 생성되지 않고 인터프리터의 도움 없이 실행할 수 없기 때문에 컴파일러 언어라고 할 수 없다.

JavaScript can be run in the browser by including the external script file using the script tag, writing it within the HTML page using the script tag again, running it in the browser console or you can also use REPL(Read-Eval-Print-Loop).

<br>

### 참고 자료

https://www.digitalocean.com/community/tutorials/how-to-add-javascript-to-html  
https://www.digitalocean.com/community/tutorials/how-to-write-your-first-javascript-program  
https://www.digitalocean.com/community/tutorials/how-to-use-the-javascript-developer-console

<br>

# 자바스크립트의 기본 문법 규칙

## 1. 세미콜론(Semicolon)

자바스크립트는 하나의 명령이 끝날 때 세미콜론을 붙여도 되고 붙이지 않아도 된다. 세미콜론을 붙이지 않으면 대부분의 경우 자바스크립트 엔진이 자동으로 세미콜론을 붙여준다. 하지만 일부 명령에서는 가끔 에러가 발생한다. 그러므로 혹시 모를 에러 발생을 방지하고 통일성을 위해 모든 명령 뒤에 세미콜론을 붙이는 것이 좋다.

```javascript
console.log('Hello, world!');
console.log('Hello, Javascript!');
console.log('Hello');
```

단, 0개 이상의 문을 중괄호로 묶은 코드 블록({ }) 뒤에는 세미콜론을 붙이지 않는다. 예를 들어, if문, for문, 함수 등의 코드 블록 뒤에는 세미콜론을 붙이지 않는다. 이러한 코드 블록은 언제나 문의 종료를 의미하는 자체 종결성(self-closing)을 갖기 때문이다.

<br>

## 2. 주석(Comment)

다른 사람이 작성한 코드를 볼 때 코드에 관한 별도의 설명이 없으면 코드를 이해하기 어려운 경우가 많다. 이럴 때 사람만 알아볼 수 있도록 설명을 작성한 부분을 주석이라고 한다. 주석은 코드에 영향을 미치지 않아서 보통 코드에 관한 자세한 설명을 작성하거나 특정 코드를 임시로 사용하지 않게 할 때 사용한다.

### 2-1. 한 줄 주석(Single Line Comment)

주석이 한 줄일 때는 주석 앞에 //를 넣는다. 코드 앞에 //를 붙이면 // 뒤로는 모두 주석이 된다.

```javascript
// Hello, comment! 출력하기
console.log('Hello, comment!');

// console.log('Hello, comment!'); 코드 실행 ❌

// 코드 뒤에 주석을 작성 가능
console.log('Hello, comment!'); // Hello, comment! 출력
```

### 2-2. 여러 줄 주석(Multi-line Comment)

한 줄로 작성하기에는 주석이 너무 길 때 여러 줄 주석을 사용한다. 그 사이의 내용은 몇 줄이든 상관없이 모두 주석이 된다.

```javascript
/* console.log('Hello, world!');
console.log('Hello, comment!'); */
```

<br>

## 3. 들여쓰기(Indentation)

자바스크립트는 들여쓰기에 제한이 없다. 보통 스페이스로 2칸, 4칸, 탭으로 공백을 두지만, 1칸이나 3칸으로 들여쓰기를 해도 코드 실행에는 아무런 문제가 없다. 하지만 들여쓰기는 통일하는 것이 좋다. 들어쓰기를 하는 것만으로도 그 부분이 다른 의미가 있는 부분이라는 것을 다른 사람에게 알려줄 수 있어서 코드의 가독성이 향상되기 때문이다.

```javascript
if (condition) {
  console.log('Hello, world!');
}
```
