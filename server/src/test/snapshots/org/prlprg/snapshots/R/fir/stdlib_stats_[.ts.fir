fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner603374895;
    st `[.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner603374895(x, i, j, drop) {
  (reg x:*, reg i:*, reg j:*, reg drop:*) -+> V { var x:*, var i:*, var j:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg NextMethod:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg ts:cls, reg y:*, reg y1:V, reg p:p(V +), reg start:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg frequency:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg y2:*, reg y3:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(TRUE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    NextMethod = ldf NextMethod;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r = dyn NextMethod("[");
    check L4() else D1();
  D1():
    deopt 3 [r];
  L4():
    st y = r;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r2):
    c = `as.logical`(r2);
    if c then L7() else L2();
  L5():
    missing = ldf missing in base;
    r3 = dyn missing(<sym i>);
    goto L1(r3);
  L6():
    r1 = dyn base(<sym i>);
    goto L1(r1);
  L2():
    y2 = ld y;
    check L11() else D4();
  L7():
    ts = ldf ts;
    check L8() else D2();
  D2():
    deopt 9 [];
  D4():
    deopt 16 [y2];
  L8():
    p = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p2 = prom<V +>{
      start = ldf start;
      p1 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r6 = dyn start(p1);
      return r6;
    };
    p4 = prom<V +>{
      frequency = ldf frequency;
      p3 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r9 = dyn frequency(p3);
      return r9;
    };
    r11 = dyn ts[, start, frequency](p, p2, p4);
    check L9() else D3();
  L11():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  D3():
    deopt 15 [r11];
  L9():
    popenv;
    return r11;
  }
}