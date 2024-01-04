def is_hit_or_miss(n):
    # Function to calculate the sum of digits
    def sum_of_digits(num):
        return sum(int(digit) for digit in str(num))

    # Function to calculate the product of digits
    def product_of_digits(num):
        result = 1
        for digit in str(num):
            result *= int(digit)
        return result

    # Check if the number is divisible by the sum or product of its digits
    if n % sum_of_digits(n) == 0 or n % product_of_digits(n) == 0:
        return "Hit"
    else:
        return "Miss"

# Taking input from the user
N = int(input("Enter a positive integer: "))
result = is_hit_or_miss(N)
print(result)
