def is_perfect_number(num):
    # Function to check if a number is perfect
    sum_divisors = sum(i for i in range(1, num) if num % i == 0)
    return sum_divisors == num

# Print all three-digit perfect numbers
print("Three-digit perfect numbers:")
for num in range(100, 1000):
    if is_perfect_number(num):
        print(num)
