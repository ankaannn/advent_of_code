from pathlib import Path

with Path('input.txt').open() as f:
    values = f.readlines()

int_values = []
for value in values:
    int_values.append(int(value))

pre_value = int_values[0]
counter = 0
for value in int_values[1:]:
    if value > pre_value:
        counter += 1
    pre_value = value

print("Counter:", counter)

sum_int_values = []
for i in range(0, len(int_values) - 2):
    sum_int_values.append(sum([int_values[i], int_values[i+1], int_values[i+2]]))

pre_value = sum_int_values[0]
counter = 0
for value in sum_int_values[1:]:
    if value > pre_value:
        counter += 1
    pre_value = value

print("Counter2:", counter)
