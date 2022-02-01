num = input("Numero: ")
sequence = [0, 1]

for n in range(0, int(num)):

    idx = len(sequence)
    a = sequence[idx - 1] + sequence[idx - 2]
    sequence.append(a)

print(sequence)
