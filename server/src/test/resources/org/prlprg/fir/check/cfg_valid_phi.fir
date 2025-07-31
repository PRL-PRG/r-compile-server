fun main {
    (cond:lgl) --> I { reg r:I |
        brif cond bb1 bb2;
        bb1:
            r = 42;
            br bb3;
        bb2:
            r = 24;
            br bb3;
        bb3(phi merged:I from bb1(r), bb2(r)):
            return merged;
    }
}