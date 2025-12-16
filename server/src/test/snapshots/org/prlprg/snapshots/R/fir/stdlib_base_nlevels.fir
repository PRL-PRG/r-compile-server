fun main() {
  () -+> V { reg r:cls, reg nlevels:cls, reg gl:cls, reg r1:V, reg p:p(V +), reg r3:V |
    mkenv;
    r = clos inner354062069;
    st nlevels = r;
    nlevels = ldf nlevels;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      gl = ldf gl;
      r1 = dyn gl(3.0, 7.0);
      return r1;
    };
    r3 = dyn nlevels(p);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg levels:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg length:cls, reg r4:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    levels = ldf levels;
    check L3() else D0();
  L2():
    r = dyn base(<lang levels(x)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn levels(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    length = ldf length in base;
    r4 = dyn length(r3);
    check L5() else D2();
  D2():
    deopt 7 [r4];
  L5():
    goto L0(r4);
  }
}