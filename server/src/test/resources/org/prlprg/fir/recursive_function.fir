fun main {
    ():Vs!-{ |
        return recursive.0(123, 0);
    }
}

fun recursive {
    (rm:Is!, rn:Is!):Is!-{ result:Is! |
        result = if0.1(rm, prom<Is!->{ return rn; }, prom<Is!->{ return recursive.0(dec.1(rm), add.1(rm, rn)); });
        return result;
    }
}

fun if0 {
    (rcond:*s?, rtrue:*s?, rfalse:*s?):Vs!-{ | ...; }
    (rcond:Vs!, rtrue:p(Is!-)s!, rfalse:p(Is!-)s!):Is!-{ | ...; }
}

fun dec {
    (r:*s?):Is!-{ | ...; }
    (r:Vs!):Is!-{ | ...; }
}

fun add {
    (r0:*s?, r1:*s?):Is!-{ | ...; }
    (r0:Vs!, r1:Vs!):Is!-{ | ...; }
}
