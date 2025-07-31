fun main {
    (x:I) --> I { |
        # cfg-error: Parameter x cannot be assigned
        x = 42;
        return x;
    }
}