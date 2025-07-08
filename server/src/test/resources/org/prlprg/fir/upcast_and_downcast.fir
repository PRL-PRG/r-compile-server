fun main {
    ():Vs!-{ r0:Is!, r1:Is!, r2:Is!, r3:Vs!, r4:Vs! |
        r0 = upcast.*(1);  # nil
        r0 = upcast.*(prom<Is!->{ return 1; });  # nil!
        r2 = upcast.*(prom<Is!->{ return 1; });  # not nil
        r3 = downcast.*(r2);
        return r4 = downcast.*(r0);
    }
}

fun upcast {
    (r:*s?):Is!-{ r0:p(Is!-)s! |
        r0 = r as p(Is!-)s!;
        return force r0;
    }
}

fun downcast {
    (r:Is!):Vs!-{ r0:Vs! |
        r0 = r as Vs!;
        return r0;
    }
}
