// const prompt=require('prompt-sync')();

// initially there are no cookies
// console.log(document.cookie);
document.cookie="key1 = val1";
document.cookie="key2 = val2";

let key="0$3";
let value="a;b#";
// to write some key value pairs like 0$3 = a;b#  & retain its formatting
document.cookie=`${encodeURIComponent(key)}=${encodeURIComponent(value)}`;

console.log(document.cookie);

// (function () {
//     let cookies = document.cookie.split("; ");
//     for (let c = 0; c < cookies.length; c++) {
//         let d = window.location.hostname.split(".");
//         while (d.length > 0) {
//             let cookieBase = encodeURIComponent(cookies[c].split(";")[0].split("=")[0]) + '=; expires=Thu, 01-Jan-1970 00:00:01 GMT; domain=' + d.join('.') + ' ;path=';
//             let p = location.pathname.split('/');
//             document.cookie = cookieBase + '/';
//             while (p.length > 0) {
//                 document.cookie = cookieBase + p.join('/');
//                 p.pop();
//             };
//             d.shift();
//         }
//     }
// })();