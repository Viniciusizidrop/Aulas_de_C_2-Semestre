#https://clubes.obmep.org.br/blog/a-matematica-nos-documentos-a-matematica-dos-cpfs/
# cpf = "280012389"
# cpf2 = "800123893"
cpf = "622396953"
cpf2 = "223969538"
soma = 0
soma2 = 0
mult = 10
mult2 = 10
for i in cpf:
    j = int(i)
    resultado = j * mult
    soma += resultado
    mult -= 1
#print(soma)
resto1 = soma % 11
#print(resto1)
dv1 = 0
if resto1 < 2:
    dv1 = 1
else:
    dv1 = 11 - resto1
#print(dv1)

for i2 in cpf2:
    j2 = int(i2)
    resultado2 = j2 * mult2
    soma2 += resultado2
    mult2 -= 1
#print(soma2)
resto2 = (soma2 % 11)
print(resto2)
resultado2 = 11 - resto2 
print(resultado2)

print(f"\nPrimeiro digito verificador: {dv1}")
print(f"Segundo digito verificador: {resultado2}")