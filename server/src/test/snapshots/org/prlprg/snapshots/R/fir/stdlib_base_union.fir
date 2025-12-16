fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1347906706`;
    st union = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1347906706`(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg as_vector:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg as_vector1:cls, reg y1:*, reg y2:V, reg p1:p(V +), reg r3:V, reg unique:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg u:*, reg u1:V, reg v:*, reg v1:V, reg c:cls, reg r6:V, reg p2:p(V +), reg r8:V |
    mkenv;
    st x = x;
    st y = y;
    as_vector = ldf `as.vector`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_vector(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st u = r1;
    as_vector1 = ldf `as.vector`;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r3 = dyn as_vector1(p1);
    check L3() else D3();
  D3():
    deopt 8 [r3];
  L3():
    st v = r3;
    unique = ldf unique;
    check L4() else D4();
  D4():
    deopt 11 [];
  L4():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      u = ld u;
      u1 = force? u;
      checkMissing(u1);
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      c = ldf c in base;
      r6 = dyn c(u1, v1);
      goto L0(r6);
    L2():
      r4 = dyn base(<sym u>, <sym v>);
      goto L0(r4);
    };
    r8 = dyn unique(p2);
    check L5() else D5();
  D5():
    deopt 13 [r8];
  L5():
    popenv;
    return r8;
  }
}