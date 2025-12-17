fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1536832960;
    st `.simpleExtReplace` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1536832960(from, to, value) {
  (reg from:*, reg to:*, reg value:*) -+> V { var from:*, var to:*, var value:*, reg ___:cls, reg r:V, reg r1:cls, reg to1:*, reg to2:V, reg p:p(V +), reg r3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg __:cls, reg r4:V, reg r5:cls, reg value1:*, reg value2:V, reg p1:p(V +), reg what:*, reg what1:V, reg p2:p(V +), reg r8:V, reg l1:*, reg __1:cls, reg r9:V, reg r10:cls, reg what2:*, reg what3:V, reg p3:p(V +), reg r12:V, reg from1:*, reg from2:V |
    mkenv;
    st from = from;
    st to = to;
    st value = value;
    ___ = ldf `:::`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn ___("methods", ".InhSlotNames");
    check L3() else D1();
  D1():
    deopt 4 [r];
  L3():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      return to2;
    };
    r3 = dyn r1(p);
    check L4() else D2();
  D2():
    deopt 7 [r3];
  L4():
    s = toForSeq(r3);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L5() else L1();
  L1():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    __ = ldf `::`;
    check L6() else D3();
  L5():
    from1 = ld from;
    check L12() else D9();
  D3():
    deopt 9 [i2];
  D9():
    deopt 30 [from1];
  L6():
    r4 = dyn __("methods", "slot");
    check L7() else D4();
  L12():
    from2 = force? from1;
    checkMissing(from2);
    popenv;
    return from2;
  D4():
    deopt 12 [i2, r4];
  L7():
    checkFun.0(r4);
    r5 = r4 as cls;
    p1 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    p2 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    r8 = dyn r5(p1, p2);
    check L8() else D5();
  D5():
    deopt 16 [i2, r8];
  L8():
    l1 = ld from;
    __1 = ldf `::`;
    check L9() else D6();
  D6():
    deopt 18 [i2, r8, l1, r8];
  L9():
    r9 = dyn __1("methods", "slot<-");
    check L10() else D7();
  D7():
    deopt 21 [i2, r8, l1, r8, r9];
  L10():
    checkFun.0(r9);
    r10 = r9 as cls;
    p3 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    r12 = dyn r10(l1, NULL, p3, r8);
    check L11() else D8();
  D8():
    deopt 25 [i2, r8, r12];
  L11():
    st from = r12;
    goto L0(i2);
  }
}