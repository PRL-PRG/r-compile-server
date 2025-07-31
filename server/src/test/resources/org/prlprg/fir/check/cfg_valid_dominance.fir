fun main {
    (cond:lgl) --> I { reg r:I |
        r = 42;
        brif cond bb1 bb2;
        bb1:
            var x = r;  // r is defined in dominating block
            return x;
        bb2:
            var y = r;  // r is defined in dominating block
            return y;
    }
}