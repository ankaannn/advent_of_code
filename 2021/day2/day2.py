from pathlib import Path

#puzzle 1
with Path('input.txt').open() as f:
    values = f.readlines()

print(values)

splitted_list = []
for element in values:
    splitted_list.append(element.split())

horizontal_pos = 0
depth_pos = 0

for direction, value in splitted_list:
    value = int(value)
    if direction == "forward": #adds to horizontal_pos
        horizontal_pos += value
    elif direction == "down": #adds to depth
        depth_pos += value
    elif direction == "up": #decreases to depth
        depth_pos -= value

answer = horizontal_pos * depth_pos
print(f'Answer: {answer}')

#puzzel 2
aim = 0
horizontal_pos = 0
depth_pos = 0
for direction, value in splitted_list:
    value = int(value)
    if direction == "forward":
        horizontal_pos += value
        depth_pos += aim * value
    if direction == "down":
        aim += value
    if direction == "up":
        aim -= value

answer_2 = horizontal_pos * depth_pos
print(f'Answer 2: {answer_2}')

