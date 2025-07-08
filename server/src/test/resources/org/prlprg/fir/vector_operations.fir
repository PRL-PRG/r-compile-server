fun vector_ops {
    ():v(I)f!-{ r:v(I)o!, r0:Is! |
        r = [1, 2, 3, 4, 5];
        r0 = r[2];
        r[0] = r0;
        r[4] = inc.1(r[1]);
        return use r;
    }
}

fun inc {
    (r:*s?):Is!-{ | ...; }
    (r:Vs!):Is!-{ | ...; }
}
