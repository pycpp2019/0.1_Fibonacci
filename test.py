import subprocess


def fibonacci(n, cache={0: 0, 1: 1, 2: 1}):
    if n in cache:
        return cache[n]
    else:
        fib = fibonacci(n - 2, cache) + fibonacci(n - 1, cache)
        cache[n] = fib
        return fib

def run_cpp(n):
    res = subprocess.run(["./fibonacci", str(n)], input=(str(n) + "\n").encode("utf-8"), timeout=1.0, capture_output=True)
    res.check_returncode()
    return int(res.stdout.split()[-1])


if __name__ == "__main__":
    max_n = 90;
    for i in range(1, max_n + 1):
        pyfib = fibonacci(i)
        cppfib = run_cpp(i) 
        if pyfib != cppfib:
            raise Exception("{}-th number mismatch: {} != {}".format(i, pyfib, cppfib))
        print("({}/{}) {}-th number is correct: {}".format(i, max_n, i, cppfib))

    print("All tests passed!")
