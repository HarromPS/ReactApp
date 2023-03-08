const prompt = require('prompt-sync')();

const swap = (a, b) => {
    let temp = a;
    a = b;
    b = temp;
    return [a,b];
}

function printArray(arr) {
    console.log("The Array is: ");
    for (let i = 0; i < arr.length; i++) {
        console.log(arr[i]);
    }
}
function insertionSort(arr) {
    for (let i = 0; i < arr.length; i++) {
        for (let j = (arr.length) - 1; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                let temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                // swap(arr[i], arr[j]);
            }
        }
    }
}

let arr = [7, 6, 5, 4, 3, 2, 1];
printArray(arr);
console.log("The length of the array is:", arr.length);
insertionSort(arr);
printArray(arr);