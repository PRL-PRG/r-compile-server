fun main {
    ():v(I)f!-{ r_shared:*s?, r1_shared:*s?, r_owned:v(I)o!, r1_owned:v(I)o!, r1:Is!, r2:Is!, r3:Is!, r4:Is! |
        r_shared = 42;
        r1_shared = [1, 2, 3];
        r_owned = [4, 5];
        r1_owned = [6, 7];
        r1 = contextual.*<*s?,*s? -> Is!>(r_shared, r_shared);
        r2 = contextual.*<*s?,*s? -> Is!>(r_shared, r1_shared);
        r3 = contextual.*<v(I)o!,*s? -> Is!>(use r_owned, r_shared);
        r4 = contextual.*<v(I)o!,*s? -> Is!>(use r1_owned, r1_shared);
        return [r1, r2, r3, r4];
    }
}

fun contextual {
    (r:*s?, r1:*s?):Is!-{ |
        return 1;
    }
    (r:*s?, r1:v(I)s!):Is!-{ |
        return 2;
    }
    (r:v(I)o!, r1:*s?):Is!-{ |
        return 3;
    }
    (r:v(I)o!, r1:v(I)s!):Is!-{ |
        return 4;
    }
}

fun print {
    (r:*s?):Vs!-{ | ...; }
}