fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4083244991;
    st `.genericEnv` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4083244991(fdef) {
  (reg fdef:*) -+> V { var fdef:*, reg parent_env:cls, reg environment:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st fdef = fdef;
    parent_env = ldf `parent.env`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      environment = ldf environment;
      p = prom<V +>{
        fdef1 = ld fdef;
        fdef2 = force? fdef1;
        checkMissing(fdef2);
        return fdef2;
      };
      r1 = dyn environment(p);
      return r1;
    };
    r3 = dyn parent_env(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}