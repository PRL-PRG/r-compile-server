fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1236783023;
    st shtmlify = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg fsub:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg fsub1:cls, reg s3:*, reg s4:V, reg p1:p(V +), reg r3:V, reg fsub2:cls, reg s5:*, reg s6:V, reg p2:p(V +), reg r5:V, reg s7:*, reg s8:V |
    mkenv;
    st s = s;
    fsub = ldf fsub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r1 = dyn fsub("&", "&amp;", p);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st s = r1;
    fsub1 = ldf fsub;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      return s4;
    };
    r3 = dyn fsub1("<", "&lt;", p1);
    check L3() else D3();
  D3():
    deopt 12 [r3];
  L3():
    st s = r3;
    fsub2 = ldf fsub;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p2 = prom<V +>{
      s5 = ld s;
      s6 = force? s5;
      checkMissing(s6);
      return s6;
    };
    r5 = dyn fsub2(">", "&gt;", p2);
    check L5() else D5();
  D5():
    deopt 19 [r5];
  L5():
    st s = r5;
    s7 = ld s;
    check L6() else D6();
  D6():
    deopt 21 [s7];
  L6():
    s8 = force? s7;
    checkMissing(s8);
    popenv;
    return s8;
  }
}