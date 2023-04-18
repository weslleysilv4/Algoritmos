var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let id = parseInt(lines.shift());
let horas = parseInt(lines.shift());
let hsalario = parseFloat(lines.shift());

let salario = (hsalario * horas)

console.log("NUMBER = " + id);
console.log("SALARY = U$ " + salario.toFixed(2));