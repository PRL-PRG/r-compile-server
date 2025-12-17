fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.call_names` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg vapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    vapply = ldf vapply;
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
    p1 = prom<V +>{
      r1 = clos inner3708401697;
      return r1;
    };
    r3 = dyn vapply(p, p1, "");
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg deparse1:cls, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st e = e;
    deparse1 = ldf deparse1;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      c = `is.object`(e2);
      if c then L1() else L2(e2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", e2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e4):
      __ = ldf `[[` in base;
      r = dyn __(e4, 1);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn deparse1(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    popenv;
    return r2;
  }
}