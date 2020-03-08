/*
 * About
 *
 * Author: eunzzangoo@GitHub (emilyp7370@gmail.com)
 * Date  : 2020-03-08
 * URL   : https://programmers.co.kr/learn/courses/30/lessons/12969
 *
 */

process.stdin.setEncoding('utf8');
process.stdin.on('data', data => {
    const n = data.split(" ");
    const a = Number(n[0]);
    const b = Number(n[1]);
    var result = "";

    for(var j=0; j < b; j++){
        for(var i=0; i < a; i++){
            result += '*';
        }
        result += '\n';
    }
    console.log(result);

});
