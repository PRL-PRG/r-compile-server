fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st topic2filename = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg gsub:cls, reg __:cls, reg r:V, reg r1:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st x = x;
    gsub = ldf gsub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      __ = ldf `::`;
      r = dyn __("utils", "URLencode");
      checkFun.0(r);
      r1 = r as cls;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r3 = dyn r1[, reserved](p, TRUE);
      return r3;
    };
    r5 = dyn gsub("%", "+", p1);
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    popenv;
    return r5;
  }
}