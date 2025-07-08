fun main {
    ():Is!-{ |
        return g.1(0);
    }
}

fun g {
    ():Is!-{ |
        return 0;
    }
    (r0:Is!):Is!-{ |
        return 1;
    }
    (r0:Is!, r1:Is!):Is!-{ |
        return 2;
    }
    (r0:Is!, r1:Is!, r2:Is!):Is!-{ |
        return 3;
    }
    (r0:Is!, r1:Is!, r2:Is!, r3:Is!):Is!-{ |
        return 3;
    }
}
