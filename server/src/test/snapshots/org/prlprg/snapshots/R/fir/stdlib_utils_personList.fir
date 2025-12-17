fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st personList = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg vapply:cls, reg z:*, reg z1:V, reg p:p(V +), reg inherits:*, reg inherits1:V, reg p1:p(V +), reg r7:V, reg all:cls, reg r8:V, reg r9:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V, reg do_call:cls, reg c1:*, reg c2:V, reg p4:p(V +), reg z2:*, reg z3:V, reg p5:p(V +), reg r18:V |
    mkenv;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st z = r1;
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    list = ldf list;
    check L6() else D0();
  L5():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1(r4):
    r9 = `!`(r4);
    c = `as.logical`(r9);
    if c then L13() else L2();
  L6():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L7() else D1();
  L8():
    vapply = ldf vapply;
    check L10() else D2();
  L9():
    r3 = dyn base1(<lang vapply(z, inherits, NA_LGL, "person")>);
    goto L1(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 9 [];
  L2():
    goto L3();
  L3():
    do_call = ldf `do.call`;
    check L17() else D7();
  L7():
    goto L0(r2);
  L10():
    p = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    p1 = prom<V +>{
      inherits = ld inherits;
      inherits1 = force? inherits;
      checkMissing(inherits1);
      return inherits1;
    };
    r7 = dyn vapply(p, p1, NA_LGL, "person");
    check L11() else D3();
  L13():
    stop = ldf stop;
    check L14() else D5();
  D3():
    deopt 14 [r7];
  D5():
    deopt 19 [];
  D7():
    deopt 27 [];
  L11():
    all = ldf all in base;
    r8 = dyn all(r7);
    check L12() else D4();
  L14():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        dQuote = ldf dQuote;
        r10 = dyn dQuote("person");
        return r10;
      };
      r12 = dyn gettextf("all arguments must be of class %s", p2);
      return r12;
    };
    r14 = dyn stop[, domain](p3, NA_LGL);
    check L15() else D6();
  L17():
    p4 = prom<V +>{
      c1 = ld c;
      c2 = force? c1;
      checkMissing(c2);
      return c2;
    };
    p5 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    r18 = dyn do_call(p4, p5);
    check L18() else D8();
  D4():
    deopt 16 [r8];
  D6():
    deopt 23 [r14];
  D8():
    deopt 30 [r18];
  L12():
    goto L1(r8);
  L15():
    goto L3();
  L18():
    popenv;
    return r18;
  }
}