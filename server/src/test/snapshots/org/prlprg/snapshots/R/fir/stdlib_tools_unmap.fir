fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st unmap = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sub:cls, reg gsub:cls, reg trimws:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st x = x;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      gsub = ldf gsub;
      p1 = prom<V +>{
        trimws = ldf trimws;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r1 = dyn trimws(p);
        return r1;
      };
      r3 = dyn gsub("^_|_$", "", p1);
      return r3;
    };
    r5 = dyn sub("^Rf_", "", p2);
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    popenv;
    return r5;
  }
}