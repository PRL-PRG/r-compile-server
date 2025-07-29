fun main {
    () --> I { reg r:v(I)o, reg r1:I |
        r = [1, 2, 3];
        # error: accessed after `use`
        use r;
        r1 = r[0];
        return r1;
    }
}