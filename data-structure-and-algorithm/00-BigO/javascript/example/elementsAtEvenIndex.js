// O(n) time 
// O(n) space
function onlyElementsAtEvenIndex(array) {
    let newArray = Array(Math.ceil(array.length / 2));
    for (let i = 0; i < array.length; i++) {
        if (i % 2 === 0) {
            newArray[i / 2] = array[i];
        }
    }
    return newArray;
}