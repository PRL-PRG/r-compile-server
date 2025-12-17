fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3304446614;
    st `c.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3304446614(`...`, recursive) {
  (reg ddd:dots, reg recursive:*) -+> V { var `...`:dots?, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V, reg lapply1:cls, reg x:*, reg x1:V, reg p2:p(V +), reg attr:*, reg attr1:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg unique:cls, reg tzones:*, reg tzones1:V, reg p4:p(V +), reg r13:V, reg length:cls, reg r14:V, reg r15:V, reg c:L, reg tzones2:*, reg tzones3:V, reg c1:L, reg tzones5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r16:V, reg dx2:V, reg _POSIXct:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg unlist:cls, reg x2:*, reg x3:V, reg p5:p(V +), reg r20:V, reg c2:cls, reg r21:V, reg p6:p(V +), reg tz:*, reg tz1:V, reg p7:p(V +), reg r24:V |
    mkenv;
    st `...` = ddd;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    lapply = ldf lapply;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list;
      ddd1 = ld `...`;
      r2 = dyn list[`...`](ddd1);
      goto L0(r2);
    L2():
      r = dyn base(<sym ...>);
      goto L0(r);
    };
    p1 = prom<V +>{
      r4 = clos inner3708401697;
      return r4;
    };
    r6 = dyn lapply(p, p1);
    check L6() else D1();
  D1():
    deopt 4 [r6];
  L6():
    st x = r6;
    lapply1 = ldf lapply;
    check L7() else D2();
  D2():
    deopt 7 [];
  L7():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p3 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    r9 = dyn lapply1(p2, p3, "tzone");
    check L8() else D3();
  D3():
    deopt 11 [r9];
  L8():
    st tzones = r9;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L1(r11):
    r15 = `==`(r11, 1);
    c = `as.logical`(r15);
    if c then L14() else L2();
  L9():
    unique = ldf unique;
    check L11() else D4();
  L10():
    r10 = dyn base1(<lang unique(tzones)>);
    goto L1(r10);
  D4():
    deopt 16 [];
  L2():
    goto L4(NULL);
  L4(dx2):
    st tz = dx2;
    _POSIXct = ldf `.POSIXct`;
    check L20() else D8();
  L11():
    p4 = prom<V +>{
      tzones = ld tzones;
      tzones1 = force? tzones;
      checkMissing(tzones1);
      return tzones1;
    };
    r13 = dyn unique(p4);
    check L12() else D5();
  L14():
    tzones2 = ld tzones;
    check L15() else D7();
  D5():
    deopt 18 [r13];
  D7():
    deopt 23 [tzones2];
  D8():
    deopt 32 [];
  L12():
    length = ldf length in base;
    r14 = dyn length(r13);
    check L13() else D6();
  L15():
    tzones3 = force? tzones2;
    checkMissing(tzones3);
    c1 = `is.object`(tzones3);
    if c1 then L16() else L17(tzones3);
  L20():
    p6 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      unlist = ldf unlist;
      p5 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      r20 = dyn unlist(p5);
      c2 = ldf c in base;
      r21 = dyn c2(r20);
      goto L0(r21);
    L2():
      r17 = dyn base2(<lang unlist(x)>);
      goto L0(r17);
    };
    p7 = prom<V +>{
      tz = ld tz;
      tz1 = force? tz;
      checkMissing(tz1);
      return tz1;
    };
    r24 = dyn _POSIXct(p6, p7);
    check L21() else D9();
  D6():
    deopt 20 [r14];
  D9():
    deopt 35 [r24];
  L3(dx1):
    goto L4(dx1);
  L13():
    goto L1(r14);
  L16():
    dr = tryDispatchBuiltin.1("[[", tzones3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(tzones5):
    __ = ldf `[[` in base;
    r16 = dyn __(tzones5, 1);
    goto L3(r16);
  L21():
    popenv;
    return r24;
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg as_POSIXct:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r3:V, reg unclass:cls, reg r4:V |
    mkenv;
    st e = e;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    as_POSIXct = ldf `as.POSIXct`;
    check L3() else D0();
  L2():
    r = dyn base(<lang as.POSIXct(e)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r3 = dyn as_POSIXct(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    unclass = ldf unclass in base;
    r4 = dyn unclass(r3);
    check L5() else D2();
  D2():
    deopt 7 [r4];
  L5():
    goto L0(r4);
  }
}