fun main() {
  () -+> V { reg r:cls, reg main:cls, reg r1:V |
    mkenv;
    r = clos inner2501545716;
    st main = r;
    main = ldf main;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn main();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg r:cls |
    mkenv;
    st x = x;
    r = clos inner177517877;
    popenv;
    return r;
  }
}
fun inner177517877(y) {
  (reg y:*) -+> V { var y:* |
    mkenv;
    st y = y;
    popenv;
    return 1.0;
  }
}