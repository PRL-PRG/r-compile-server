fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3304446614;
    st `c.person` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3304446614(`...`, recursive) {
  (reg ddd:dots, reg recursive:*) -+> V { var `...`:dots?, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg vapply:cls, reg args:*, reg args1:V, reg p:p(V +), reg inherits:*, reg inherits1:V, reg p1:p(V +), reg r7:V, reg all:cls, reg r8:V, reg r9:V, reg c:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V, reg lapply:cls, reg args2:*, reg args3:V, reg p4:p(V +), reg unclass:*, reg unclass1:V, reg p5:p(V +), reg r18:V, reg do_call:cls, reg c1:*, reg c2:V, reg p6:p(V +), reg args4:*, reg args5:V, reg p7:p(V +), reg r21:V, reg l:*, reg class__:cls, reg r22:V, reg rval:*, reg rval1:V |
    mkenv;
    st `...` = ddd;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    st args = r1;
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5():
    list = ldf list;
    check L7() else D0();
  L6():
    r = dyn base(<sym ...>);
    goto L1(r);
  D0():
    deopt 2 [];
  L2(r4):
    r9 = `!`(r4);
    c = `as.logical`(r9);
    if c then L14() else L3();
  L7():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L8() else D1();
  L9():
    vapply = ldf vapply;
    check L11() else D2();
  L10():
    r3 = dyn base1(<lang vapply(args, inherits, NA_LGL, "person")>);
    goto L2(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 9 [];
  L3():
    goto L4();
  L4():
    lapply = ldf lapply;
    check L18() else D7();
  L8():
    goto L1(r2);
  L11():
    p = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    p1 = prom<V +>{
      inherits = ld inherits;
      inherits1 = force? inherits;
      checkMissing(inherits1);
      return inherits1;
    };
    r7 = dyn vapply(p, p1, NA_LGL, "person");
    check L12() else D3();
  L14():
    warning = ldf warning;
    check L15() else D5();
  D3():
    deopt 14 [r7];
  D5():
    deopt 19 [];
  D7():
    deopt 27 [];
  L12():
    all = ldf all in base;
    r8 = dyn all(r7);
    check L13() else D4();
  L15():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        sQuote = ldf sQuote;
        r10 = dyn sQuote("person");
        return r10;
      };
      r12 = dyn gettextf("method is only applicable to %s objects", p2);
      return r12;
    };
    r14 = dyn warning[, domain](p3, NA_LGL);
    check L16() else D6();
  L18():
    p4 = prom<V +>{
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      return args3;
    };
    p5 = prom<V +>{
      unclass = ld unclass;
      unclass1 = force? unclass;
      checkMissing(unclass1);
      return unclass1;
    };
    r18 = dyn lapply(p4, p5);
    check L19() else D8();
  D4():
    deopt 16 [r8];
  D6():
    deopt 23 [r14];
  D8():
    deopt 30 [r18];
  L13():
    goto L2(r8);
  L16():
    goto L4();
  L19():
    st args = r18;
    do_call = ldf `do.call`;
    check L20() else D9();
  D9():
    deopt 33 [];
  L20():
    p6 = prom<V +>{
      c1 = ld c;
      c2 = force? c1;
      checkMissing(c2);
      return c2;
    };
    p7 = prom<V +>{
      args4 = ld args;
      args5 = force? args4;
      checkMissing(args5);
      return args5;
    };
    r21 = dyn do_call(p6, p7);
    check L21() else D10();
  D10():
    deopt 36 [r21];
  L21():
    st rval = r21;
    l = ld rval;
    class__ = ldf `class<-`;
    check L22() else D11();
  D11():
    deopt 41 ["person", l, "person"];
  L22():
    r22 = dyn class__(l, NULL, "person");
    check L23() else D12();
  D12():
    deopt 43 ["person", r22];
  L23():
    st rval = r22;
    rval = ld rval;
    check L24() else D13();
  D13():
    deopt 45 [rval];
  L24():
    rval1 = force? rval;
    checkMissing(rval1);
    popenv;
    return rval1;
  }
}