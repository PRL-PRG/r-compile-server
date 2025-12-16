fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1936769274;
    st `julian.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1936769274(x, origin, `...`) {
  (reg x:*, reg origin:*, reg ddd:dots) -+> V { var x:*, var origin:*, reg origin_isMissing:L, reg origin_orDefault:*, reg as_Date:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg origin1:*, reg origin2:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg structure:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x1:*, reg x2:V, reg unclass:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg r15:V, reg origin3:*, reg origin4:V, reg unclass1:cls, reg r16:V, reg r17:V, reg p1:p(V +), reg origin5:*, reg origin6:V, reg p2:p(V +), reg r20:V |
    mkenv;
    st x = x;
    origin_isMissing = missing.0(origin);
    if origin_isMissing then L0() else L1(origin);
  L0():
    p = prom<V +>{
      as_Date = ldf `as.Date`;
      r = dyn as_Date("1970-01-01");
      return r;
    };
    goto L1(p);
  L1(origin_orDefault):
    st origin = origin_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L2(r3):
    r5 = `!=`(r3, 1);
    c = `as.logical`(r5);
    if c then L9() else L3();
  L5():
    origin1 = ld origin;
    check L7() else D0();
  L6():
    r2 = dyn base(<sym origin>);
    goto L2(r2);
  D0():
    deopt 2 [origin1];
  L3():
    goto L4();
  L4():
    structure = ldf structure;
    check L13() else D4();
  L7():
    origin2 = force? origin1;
    checkMissing(origin2);
    length = ldf length in base;
    r4 = dyn length(origin2);
    check L8() else D1();
  L9():
    stop = ldf stop;
    check L10() else D2();
  D1():
    deopt 5 [r4];
  D2():
    deopt 9 [];
  D4():
    deopt 15 [];
  L8():
    goto L2(r4);
  L10():
    r6 = dyn stop("'origin' must be of length one");
    check L11() else D3();
  L13():
    p1 = prom<V +>{
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r9):
      sym2 = ldf unclass;
      base2 = ldf unclass in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L2():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      unclass = ldf unclass in base;
      r10 = dyn unclass(x2);
      goto L0(r10);
    L3():
      r8 = dyn base1(<sym x>);
      goto L0(r8);
    L1(r14, r15):
      r17 = `-`(r14, r15);
      return r17;
    L4():
      origin3 = ld origin;
      origin4 = force? origin3;
      checkMissing(origin4);
      unclass1 = ldf unclass in base;
      r16 = dyn unclass1(origin4);
      goto L1(r9, r16);
    L5():
      r13 = dyn base2(<sym origin>);
      goto L1(r9, r13);
    };
    p2 = prom<V +>{
      origin5 = ld origin;
      origin6 = force? origin5;
      checkMissing(origin6);
      return origin6;
    };
    r20 = dyn structure[, origin](p1, p2);
    check L14() else D5();
  D3():
    deopt 11 [r6];
  D5():
    deopt 19 [r20];
  L11():
    goto L4();
  L14():
    popenv;
    return r20;
  }
}