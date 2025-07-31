fun main {
    () --> I { reg r:I |
        # cfg-error: Use of local register r before definition
        var x = r;
        r = 42;
        return x;
    }
}