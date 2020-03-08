##  Programmers, Level1, in JS

> 최초작성일 : 2020-03-09



#### 1. rectangular_star_print.js (직사각형 별찍기)

```javascript
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
```

다른 사람 풀이를 보니 간단하게 문자열을 반복하는 .repeat() 메서드를 이용해서 풀었던데 , 문법은 String.repeat(count) 이니 참고하자

```javascript
const row = '*'.repeat(a)
    for(let i =0; i < b; i++){
        console.log(row)
    }
```

