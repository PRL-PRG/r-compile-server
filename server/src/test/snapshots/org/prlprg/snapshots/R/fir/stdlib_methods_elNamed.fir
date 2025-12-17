fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4244420207;
    st elNamed = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4244420207(x, name, mustFind) {
  (reg x:*, reg name:*, reg mustFind:*) -+> V { var x:*, var name:*, var mustFind:*, reg mustFind_isMissing:L, reg mustFind_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg name1:*, reg name2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg names:cls, reg r4:V, reg match:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg i:*, reg i1:V, reg is_na:cls, reg r8:V, reg c:L, reg mustFind1:*, reg mustFind2:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg name3:*, reg name4:V, reg p:p(V +), reg r10:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg x3:*, reg x4:V, reg c2:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i2:*, reg i3:V, reg __:cls, reg r15:V |
    mkenv;
    st x = x;
    st name = name;
    mustFind_isMissing = missing.0(mustFind);
    if mustFind_isMissing then L0(FALSE) else L0(mustFind);
  L0(mustFind_orDefault):
    st mustFind = mustFind_orDefault;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    st i = r1;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L7():
    name1 = ld name;
    check L9() else D0();
  L8():
    r = dyn base(<sym name>, <lang names(x)>);
    goto L1(r);
  D0():
    deopt 2 [name1];
  L3(r7):
    c = `as.logical`(r7);
    if c then L19() else L4();
  L9():
    name2 = force? name1;
    checkMissing(name2);
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L15():
    i = ld i;
    check L17() else D4();
  L16():
    r6 = dyn base2(<sym i>);
    goto L3(r6);
  D4():
    deopt 17 [i];
  L2(r3):
    match = ldf match in base;
    r5 = dyn match(name2, r3, NA_INT, NULL);
    check L14() else D3();
  L4():
    x3 = ld x;
    check L26() else D9();
  L10():
    x1 = ld x;
    check L12() else D1();
  L11():
    r2 = dyn base1(<sym x>);
    goto L2(r2);
  L17():
    i1 = force? i;
    checkMissing(i1);
    is_na = ldf `is.na` in base;
    r8 = dyn is_na(i1);
    check L18() else D5();
  L19():
    mustFind1 = ld mustFind;
    check L20() else D6();
  D1():
    deopt 6 [x1];
  D3():
    deopt 13 [r5];
  D5():
    deopt 20 [r8];
  D6():
    deopt 21 [mustFind1];
  D9():
    deopt 31 [x3];
  L12():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r4 = dyn names(x2);
    check L13() else D2();
  L14():
    goto L1(r5);
  L18():
    goto L3(r8);
  L20():
    mustFind2 = force? mustFind1;
    checkMissing(mustFind2);
    c1 = `as.logical`(mustFind2);
    if c1 then L21() else L5();
  L26():
    x4 = force? x3;
    checkMissing(x4);
    c2 = `is.object`(x4);
    if c2 then L27() else L28(x4);
  D2():
    deopt 9 [r4];
  L5():
    popenv;
    return NULL;
  L6(dx1):
    popenv;
    return dx1;
  L13():
    goto L2(r4);
  L21():
    stop = ldf stop;
    check L22() else D7();
  L27():
    dr = tryDispatchBuiltin.1("[[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(x6):
    i2 = ld i;
    check L30() else D10();
  D7():
    deopt 24 [];
  D10():
    deopt 33 [x6, i2];
  L22():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        sQuote = ldf sQuote;
        p = prom<V +>{
          name3 = ld name;
          name4 = force? name3;
          checkMissing(name4);
          return name4;
        };
        r10 = dyn sQuote(p);
        return r10;
      };
      r12 = dyn gettextf("%s is not one of the element names", p1);
      return r12;
    };
    r14 = dyn stop[, domain](p2, NA_LGL);
    check L23() else D8();
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L30():
    i3 = force? i2;
    __ = ldf `[[` in base;
    r15 = dyn __(x6, i3);
    goto L6(r15);
  D8():
    deopt 28 [r14];
  L23():
    popenv;
    return r14;
  }
}