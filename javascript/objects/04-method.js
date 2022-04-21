const apple = {
    name: 'apple',
    display: function() {
        console.log(`${this.name}: 🍎`); // 객체 안에서 자신의 데이터를 접근할 때는 this.key
    },
};
apple.display();