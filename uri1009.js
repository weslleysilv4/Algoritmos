var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var nome = lines.shift();
var salarioFixo = parseFloat(lines.shift());
var vendas = parseFloat(lines.shift());

let salarioComissao = (vendas * 0.15) + salarioFixo

console.log("TOTAL = R$ " + salarioComissao.toFixed(2));