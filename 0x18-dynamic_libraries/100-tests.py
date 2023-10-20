import ctypes

cops = ctypes.CDLL('./100-operations.so')

def safe_division(a, b):
    if b == 0:
        return None
    else:
        return cops.div(a, b)

def safe_modulo(a, b):
    if b == 0:
        return None
    else:
        return cops.mod(a, b)

def test_operations():
    a = 66
    b = -76

    print(f"{a} + {b} = {cops.add(a, b)}")
    print(f"{a} - {b} = {cops.sub(a, b)}")
    print(f"{a} x {b} = {cops.mul(a, b)}")

     # Test division and modulo with error handling
    result_div = safe_division(a, b)
    if result_div is not None:
        print(f"{a} / {b} = {result_div}")
    else:
        print(f"Division by zero is not allowed")

    result_mod = safe_modulo(a, b)
    if result_mod is not None:
        print(f"{a} % {b} = {result_mod}")
    else:
        print(f"Modulo by zero is not allowed")

test_operations()
