# -*- coding: utf-8 -*-

A, B, C = map(float, input().split())

triangulo = (A * C) / 2
circulo = C * C * 3.14159
trapezio = ((A + B) * C) / 2
quadrado = B * B
retangulo = A * B

print("TRIANGULO:",'{:.3f}'.format(triangulo))
print("CIRCULO:",'{:.3f}'.format(circulo))
print("TRAPEZIO:",'{:.3f}'.format(trapezio))
print("QUADRADO:",'{:.3f}'.format(quadrado))
print("RETANGULO:",'{:.3f}'.format(retangulo))