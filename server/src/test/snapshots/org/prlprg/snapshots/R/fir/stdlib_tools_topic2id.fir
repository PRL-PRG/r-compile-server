fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st topic2id = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sprintf:cls, reg string2id:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      string2id = ldf string2id;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn string2id(p);
      return r1;
    };
    r3 = dyn sprintf("topic+%s", p1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    popenv;
    return r3;
  }
}