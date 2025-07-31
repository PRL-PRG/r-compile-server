fun main {
    () --> I { |
        # cfg-error: Register r1 is not declared as parameter or local
        return r1;
    }
}