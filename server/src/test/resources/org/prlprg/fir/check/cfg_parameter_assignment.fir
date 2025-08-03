fun main {
  (reg x:I) --> I { |
    # cfg-error: Parameter reg x:I can't be assigned
    x = 42;
    return x;
  }
}