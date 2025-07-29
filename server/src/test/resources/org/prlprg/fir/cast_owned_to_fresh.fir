fun main {
    () --> v(I)f { reg rv:v(I)o |
        rv = [1, 2, 3];
        cast(rv);
        return use rv;
    }
}

fun cast {
    (reg r:v(I)b) --> I { reg v:v(I)o, reg r1:I |
        # error: stupid cast (one must be a subtype): casting `v(I)b` to `v(I)o`
        # error: can't assign `v(I)o` to `v(I)o`
        rvec = r as v(I)o;
        r1 = rvec[0] = 4;
        return r1;
    }
}
