fun main {
    (x:I, x:I) --> I { |
        # cfg-error: Duplicate variable declaration: x
        return x;
    }
}