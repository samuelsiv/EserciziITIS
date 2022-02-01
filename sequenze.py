num = input("Numero: ")

sequence = []

def fibonacci(num):
    for n in range(0, int(num)):
        if n == 0 or n == 1:
            sequence.append(n)
        else:
            idx = len(sequence)
            a = sequence[idx - 1] + sequence[idx - 2]
            sequence.append(a)

def padovan(num):
    for n in range(0, int(num)):
        if n == 0 or n == 1 or n == 2:
            sequence.append(1)
        else:
            idx = len(sequence)
            a = sequence[idx - 2] + sequence[idx - 3]
            sequence.append(a)

padovan(int(num))

print(sequence)
