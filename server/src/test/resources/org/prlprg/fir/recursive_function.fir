fun main {
  () --> V { reg r1:I |
    r1 = recursive.0(123, 0);
    return r1;
  }
}

fun recursive {
  (reg rm:I, reg rn:I) --> I { reg result:I, reg r1:p(I -), reg r2:p(I -), reg r3:I, reg r4:I, reg r5:I |
    r1 = prom<I ->{ return rn; };
    r3 = dec.1(rm);
    r4 = add.1(rm, rn);
    r5 = recursive.0(r3, r4);
    r2 = prom<I ->{ return r5; };
    result = if0.1(rm, r1, r2);
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
