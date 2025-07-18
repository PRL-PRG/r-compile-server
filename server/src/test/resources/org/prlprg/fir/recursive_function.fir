fun main {
    () --> V { |
        return recursive.0(123, 0);
    }
}

fun recursive {
    (reg rm:I, reg rn:I) --> I { reg result:I |
        result = if0.1(rm, prom<I ->{ return rn; }, prom<I ->{ return recursive.0(dec.1(rm), add.1(rm, rn)); });
        return result;
    }
}

fun if0 {
    (reg rcond:*, reg rtrue:*, reg rfalse:*) --> V { | ...; }
    (reg rcond:V, reg rtrue:p(I -), reg rfalse:p(I -)) --> I { | ...; }
}

fun dec {
    (reg r:*) --> I { | ...; }
    (reg r:V) --> I { | ...; }
}

fun add {
    (reg r0:*, reg r1:*) --> I { | ...; }
    (reg r0:V, reg r1:V) --> I { | ...; }
}
