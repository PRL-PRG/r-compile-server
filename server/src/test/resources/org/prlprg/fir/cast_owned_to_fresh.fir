fun main {
    ():v(I)f!-{ rv:v(I)o! |
        rv = [1, 2, 3];
        cast.*(rv);
        return use rv;
    }
}

fun cast {
    (r:v(I)b!):Is!-{ rvec:v(I)o! |
        # error: stupid cast (one must be a subtype): casting `v(I)b!` to `v(I)o!`
        # error: can't assign `v(I)o!` to `v(I)o!`
        rvec = r as v(I)o!;
        return rvec[0] = 4;
    }
}
