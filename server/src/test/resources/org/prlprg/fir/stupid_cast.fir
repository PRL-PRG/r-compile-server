fun main {
    # error: stupid cast (one must be a subtype): casting `v(I)f` to `I`
    () --> I { reg r0:v(I)o, reg r1:I |
        r0 = [1, 2, 3];
        r1 = r0 as I;
        return r1;
    }
}
