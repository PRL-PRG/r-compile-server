fun main {
    (){ r0:Is!, r1:Is!, r2:Is!, r3:Vs!, r4:Vs!;
        r0 = upcast.*(1);  # nil
        r0 = upcast.*(prom<Is!->{ 1 });  # nil!
        r2 = upcast.*(prom<Is!->{ 1 });  # not nil
        r3 = downcast.*(r2);
        r4 = downcast.*(r0)
    }:Vs!-
}

fun upcast {
    (r:*s?){ r0:p(Is!-)s!;
        r0 = r as p(Is!-)s!;
        force r0
    }:Is!-
}

fun downcast {
    (r:Is!){ r0:Vs!;
        r0 = r as Vs!;
        r0
    }:Vs!-
}
