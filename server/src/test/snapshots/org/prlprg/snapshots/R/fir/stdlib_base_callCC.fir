fun main() {
  () -+> V { reg r:cls, reg callCC:cls, reg r1:cls, reg p:p(V +), reg r3:V, reg callCC1:cls, reg r4:cls, reg p1:p(V +), reg r6:V, reg callCC2:cls, reg r7:cls, reg p2:p(V +), reg r9:V, reg callCC3:cls, reg r10:cls, reg p3:p(V +), reg r12:V |
    mkenv;
    r = clos inner370961468;
    st callCC = r;
    callCC = ldf callCC;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      r1 = clos inner501652904;
      return r1;
    };
    r3 = dyn callCC(p);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    callCC1 = ldf callCC;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      r4 = clos inner501652904;
      return r4;
    };
    r6 = dyn callCC1(p1);
    check L3() else D3();
  D3():
    deopt 10 [r6];
  L3():
    callCC2 = ldf callCC;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    p2 = prom<V +>{
      r7 = clos inner501652904;
      return r7;
    };
    r9 = dyn callCC2(p2);
    check L5() else D5();
  D5():
    deopt 14 [r9];
  L5():
    callCC3 = ldf callCC;
    check L6() else D6();
  D6():
    deopt 16 [];
  L6():
    p3 = prom<V +>{
      r10 = clos inner501652904;
      return r10;
    };
    r12 = dyn callCC3(p3);
    check L7() else D7();
  D7():
    deopt 18 [r12];
  L7():
    popenv;
    return r12;
  }
}
fun inner370961468(fun) {
  (reg fun:*) -+> V { var fun:*, reg delayedAssign:cls, reg value:*, reg value1:V, reg p:p(V +), reg r:V, reg fun1:cls, reg r1:cls, reg p1:p(V +), reg r3:V |
    mkenv;
    st fun = fun;
    st value = NULL;
    delayedAssign = ldf delayedAssign;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    r = dyn delayedAssign("throw", p);
    check L1() else D1();
  D1():
    deopt 7 [r];
  L1():
    fun1 = ldf fun;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p1 = prom<V +>{
      r1 = clos inner707150451;
      return r1;
    };
    r3 = dyn fun1(p1);
    check L3() else D3();
  D3():
    deopt 11 [r3];
  L3():
    popenv;
    return r3;
  }
}
fun inner707150451(v) {
  (reg v:*) -+> V { var v:*, reg v1:*, reg v2:V, reg throw:*, reg throw1:V |
    mkenv;
    st v = v;
    v1 = ld v;
    check L0() else D0();
  D0():
    deopt 0 [v1];
  L0():
    v2 = force? v1;
    checkMissing(v2);
    sst value = v2;
    throw = ld throw;
    check L1() else D1();
  D1():
    deopt 3 [throw];
  L1():
    throw1 = force? throw;
    checkMissing(throw1);
    popenv;
    return throw1;
  }
}
fun inner501652904(k) {
  (reg k:*) -+> V { var k:* |
    mkenv;
    st k = k;
    popenv;
    return 1.0;
  }
}