fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2308823932;
    st `.Rd_get_metadata` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2308823932(x, kind) {
  (reg x:*, reg kind:*) -+> V { var x:*, var kind:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg RdTags:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r1:V, reg sprintf:cls, reg kind1:*, reg kind2:V, reg p1:p(V +), reg r3:V, reg r4:V, reg __:cls, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg x7:*, reg x8:V, reg length:cls, reg r8:V, reg r9:V, reg c1:L, reg character:cls, reg r10:V, reg unique:cls, reg trimws:cls, reg vapply:cls, reg x9:*, reg x10:V, reg p2:p(V +), reg paste:*, reg paste1:V, reg p3:p(V +), reg r13:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V |
    mkenv;
    st x = x;
    st kind = kind;
    x1 = ld x;
    check L3() else D0();
  D0():
    deopt 0 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L4() else L5(x2);
  L0(dx1):
    st x = dx1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L4():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(x4):
    RdTags = ldf RdTags;
    check L7() else D1();
  D1():
    deopt 3 [x4];
  L1(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L15() else L2();
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L7():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r1 = dyn RdTags(p);
    check L8() else D2();
  L11():
    x7 = ld x;
    check L13() else D5();
  L12():
    r6 = dyn base(<sym x>);
    goto L1(r6);
  D2():
    deopt 5 [x4, r1];
  D5():
    deopt 15 [x7];
  L2():
    unique = ldf unique;
    check L19() else D9();
  L8():
    sprintf = ldf sprintf;
    check L9() else D3();
  L13():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r8 = dyn length(x8);
    check L14() else D6();
  L15():
    character = ldf character;
    check L16() else D7();
  D3():
    deopt 6 [x4, r1];
  D6():
    deopt 18 [r8];
  D7():
    deopt 21 [];
  D9():
    deopt 24 [];
  L9():
    p1 = prom<V +>{
      kind1 = ld kind;
      kind2 = force? kind1;
      checkMissing(kind2);
      return kind2;
    };
    r3 = dyn sprintf("\\%s", p1);
    check L10() else D4();
  L14():
    goto L1(r8);
  L16():
    r10 = dyn character();
    check L17() else D8();
  L19():
    p5 = prom<V +>{
      trimws = ldf trimws;
      p4 = prom<V +>{
        vapply = ldf vapply;
        p2 = prom<V +>{
          x9 = ld x;
          x10 = force? x9;
          checkMissing(x10);
          return x10;
        };
        p3 = prom<V +>{
          paste = ld paste;
          paste1 = force? paste;
          checkMissing(paste1);
          return paste1;
        };
        r13 = dyn vapply[, , , collapse](p2, p3, "", "\n");
        return r13;
      };
      r15 = dyn trimws(p4);
      return r15;
    };
    r17 = dyn unique(p5);
    check L20() else D10();
  D4():
    deopt 9 [x4, r1, r3];
  D8():
    deopt 22 [r10];
  D10():
    deopt 26 [r17];
  L10():
    r4 = `==`(r1, r3);
    __ = ldf `[` in base;
    r5 = dyn __(x4, r4);
    goto L0(r5);
  L17():
    popenv;
    return r10;
  L20():
    popenv;
    return r17;
  }
}