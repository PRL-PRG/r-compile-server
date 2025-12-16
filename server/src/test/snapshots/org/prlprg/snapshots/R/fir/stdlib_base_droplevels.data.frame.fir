fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1534931796;
    st `droplevels.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1534931796(x, except, exclude, `...`) {
  (reg x:*, reg except:*, reg exclude:*, reg ddd:dots) -+> V { var x:*, var except:*, reg except_isMissing:L, reg except_orDefault:*, var exclude:*, var `...`:dots?, reg vapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg is_factor:*, reg is_factor1:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg except1:*, reg except2:V, reg c:V, reg r5:V, reg c1:L, reg l:*, reg c2:L, reg r7:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r9:L, reg dx1:V, reg except3:*, reg except4:V, reg ___:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg missing:cls, reg r14:V, reg c3:L, reg lapply:cls, reg x3:*, reg x4:V, reg c4:L, reg x6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ix:*, reg ix1:V, reg __:cls, reg r15:V, reg p2:p(V +), reg droplevels:*, reg droplevels1:V, reg p3:p(V +), reg r18:V, reg r19:V, reg lapply1:cls, reg x7:*, reg x8:V, reg c5:L, reg x10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ix2:*, reg ix3:V, reg __1:cls, reg r20:V, reg p4:p(V +), reg droplevels2:*, reg droplevels3:V, reg p5:p(V +), reg exclude1:*, reg exclude2:V, reg p6:p(V +), reg r24:V, reg l3:*, reg c6:L, reg r26:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ix4:*, reg ix5:V, reg ___1:cls, reg r29:V, reg x11:*, reg x12:V |
    mkenv;
    st x = x;
    except_isMissing = missing.0(except);
    if except_isMissing then L0(NULL) else L0(except);
  L0(except_orDefault):
    st except = except_orDefault;
    st exclude = exclude;
    st `...` = ddd;
    vapply = ldf vapply;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      is_factor = ld `is.factor`;
      is_factor1 = force? is_factor;
      checkMissing(is_factor1);
      return is_factor1;
    };
    r2 = dyn vapply(p, p1, NA_LGL);
    check L10() else D1();
  D1():
    deopt 5 [r2];
  L10():
    st ix = r2;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r4):
    r5 = `!`(r4);
    c1 = `as.logical`(r5);
    if c1 then L14() else L2();
  L11():
    except1 = ld except;
    check L13() else D2();
  L12():
    r3 = dyn base(<sym except>);
    goto L1(r3);
  D2():
    deopt 8 [except1];
  L2():
    goto L4();
  L4():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L13():
    except2 = force? except1;
    checkMissing(except2);
    c = `==`(except2, NULL);
    goto L1(c);
  L14():
    l = ld ix;
    c2 = `is.object`(l);
    if c2 then L15() else L16(FALSE, l);
  L3(r9, dx1):
    st ix = dx1;
    goto L4();
  L5(r13):
    c3 = `as.logical`(r13);
    if c3 then L22() else L6();
  L15():
    dr = tryDispatchBuiltin.0("[<-", l, FALSE);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(FALSE, dr);
  L16(r7, l2):
    except3 = ld except;
    check L18() else D3();
  L20():
    missing = ldf missing in base;
    r14 = dyn missing(<sym exclude>);
    goto L5(r14);
  L21():
    r12 = dyn base1(<sym exclude>);
    goto L5(r12);
  D3():
    deopt 15 [r7, l2, FALSE, except3];
  L6():
    lapply1 = ldf lapply;
    check L26() else D6();
  L7(r19):
    l3 = ld x;
    c6 = `is.object`(l3);
    if c6 then L28() else L29(r19, l3);
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(FALSE, dx);
  L18():
    except4 = force? except3;
    ___ = ldf `[<-` in base;
    r10 = dyn ___(l2, FALSE, except4);
    goto L3(r7, r10);
  L22():
    lapply = ldf lapply;
    check L23() else D4();
  D4():
    deopt 25 [];
  D6():
    deopt 30 [];
  L8(dx7):
    st x = dx7;
    x11 = ld x;
    check L32() else D9();
  L23():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c4 = `is.object`(x4);
      if c4 then L1() else L2(x4);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x4);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x6):
      ix = ld ix;
      ix1 = force? ix;
      __ = ldf `[` in base;
      r15 = dyn __(x6, ix1);
      goto L0(r15);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      droplevels = ld droplevels;
      droplevels1 = force? droplevels;
      checkMissing(droplevels1);
      return droplevels1;
    };
    r18 = dyn lapply(p2, p3);
    check L24() else D5();
  L26():
    p4 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c5 = `is.object`(x8);
      if c5 then L1() else L2(x8);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", x8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x10):
      ix2 = ld ix;
      ix3 = force? ix2;
      __1 = ldf `[` in base;
      r20 = dyn __1(x10, ix3);
      goto L0(r20);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p5 = prom<V +>{
      droplevels2 = ld droplevels;
      droplevels3 = force? droplevels2;
      checkMissing(droplevels3);
      return droplevels3;
    };
    p6 = prom<V +>{
      exclude1 = ld exclude;
      exclude2 = force? exclude1;
      checkMissing(exclude2);
      return exclude2;
    };
    r24 = dyn lapply1[, , exclude](p4, p5, p6);
    check L27() else D7();
  L28():
    dr6 = tryDispatchBuiltin.0("[<-", l3, r19);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L30() else L29(r19, dr6);
  L29(r26, l5):
    ix4 = ld ix;
    check L31() else D8();
  D5():
    deopt 28 [r18];
  D7():
    deopt 35 [r24];
  D8():
    deopt 37 [r26, l5, r19, ix4];
  D9():
    deopt 41 [x11];
  L24():
    goto L7(r18);
  L27():
    goto L7(r24);
  L30():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx6);
  L31():
    ix5 = force? ix4;
    ___1 = ldf `[<-` in base;
    r29 = dyn ___1(l5, r19, ix5);
    goto L8(r29);
  L32():
    x12 = force? x11;
    checkMissing(x12);
    popenv;
    return x12;
  }
}