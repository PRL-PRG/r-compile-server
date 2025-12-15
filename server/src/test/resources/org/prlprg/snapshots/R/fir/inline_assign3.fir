fun main() {
  () -+> V { reg v:*, reg v1:V, reg l:*, reg h:cls, reg k:*, reg k1:V, reg p:p(V +), reg r1:V, reg g:cls, reg j:*, reg j1:V, reg p1:p(V +), reg r3:V, reg f__:cls, reg i:*, reg i1:V, reg p2:p(V +), reg r5:V, reg g__:cls, reg j2:*, reg j3:V, reg p3:p(V +), reg r7:V, reg h__:cls, reg k2:*, reg k3:V, reg p4:p(V +), reg r9:V |
    mkenv;
    v = ld v;
    check L0() else D0();
  D0():
    deopt 0 [v];
  L0():
    v1 = force? v;
    checkMissing(v1);
    l = ld x;
    h = ldf h;
    check L1() else D1();
  D1():
    deopt 3 [v1, l, v1];
  L1():
    p = prom<V +>{
      k = ld k;
      k1 = force? k;
      checkMissing(k1);
      return k1;
    };
    r1 = dyn h(v1, NULL, p);
    check L2() else D2();
  D2():
    deopt 6 [v1, l, v1, r1];
  L2():
    g = ldf g;
    check L3() else D3();
  D3():
    deopt 8 [v1, l, r1, v1];
  L3():
    p1 = prom<V +>{
      j = ld j;
      j1 = force? j;
      checkMissing(j1);
      return j1;
    };
    r3 = dyn g(v1, NULL, p1);
    check L4() else D4();
  D4():
    deopt 11 [v1, l, r1, v1, r3];
  L4():
    f__ = ldf `f<-`;
    check L5() else D5();
  D5():
    deopt 13 [v1, l, r1, r3, v1];
  L5():
    p2 = prom<V +>{
      i = ld i;
      i1 = force? i;
      checkMissing(i1);
      return i1;
    };
    r5 = dyn f__(r3, NULL, p2, v1);
    check L6() else D6();
  D6():
    deopt 16 [v1, l, r1, r5];
  L6():
    g__ = ldf `g<-`;
    check L7() else D7();
  D7():
    deopt 17 [v1, l, r1, r5];
  L7():
    p3 = prom<V +>{
      j2 = ld j;
      j3 = force? j2;
      checkMissing(j3);
      return j3;
    };
    r7 = dyn g__(r1, NULL, p3, r5);
    check L8() else D8();
  D8():
    deopt 20 [v1, l, r7];
  L8():
    h__ = ldf `h<-`;
    check L9() else D9();
  D9():
    deopt 21 [v1, l, r7];
  L9():
    p4 = prom<V +>{
      k2 = ld k;
      k3 = force? k2;
      checkMissing(k3);
      return k3;
    };
    r9 = dyn h__(l, NULL, p4, r7);
    check L10() else D10();
  D10():
    deopt 24 [v1, r9];
  L10():
    st x = r9;
    invisible.0();
    popenv;
    return v1;
  }
}