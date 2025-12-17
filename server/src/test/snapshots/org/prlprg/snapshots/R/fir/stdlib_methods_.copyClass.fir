fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1420655279;
    st `.copyClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1420655279(class, env, envwhere) {
  (reg class:*, reg env:*, reg envwhere:*) -+> V { var class:*, var env:*, var envwhere:*, reg message:cls, reg class1:*, reg class2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st class = class;
    st env = env;
    st envwhere = envwhere;
    message = ldf message;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      class1 = ld class;
      class2 = force? class1;
      checkMissing(class2);
      return class2;
    };
    r1 = dyn message[, , domain]("Pretend we inserted class ", p, NA_LGL);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}