fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner910976503;
    st `.resetSigLength` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner910976503(fdef, n) {
  (reg fdef:*, reg n:*) -+> V { var fdef:*, var n:*, reg environment:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg assign:cls, reg n1:*, reg n2:V, reg p1:p(V +), reg fenv:*, reg fenv1:V, reg p2:p(V +), reg r4:V, reg _getMethodsTable:cls, reg fdef3:*, reg fdef4:V, reg p3:p(V +), reg fenv2:*, reg fenv3:V, reg p4:p(V +), reg r7:V, reg __:cls, reg r8:V, reg n3:*, reg n4:V, reg l:*, reg length__:cls, reg r9:V, reg _resetTable:cls, reg mtable:*, reg mtable1:V, reg p5:p(V +), reg n5:*, reg n6:V, reg p6:p(V +), reg signames:*, reg signames1:V, reg p7:p(V +), reg r13:V, reg _resetInheritedMethods:cls, reg fenv4:*, reg fenv5:V, reg p8:p(V +), reg mtable2:*, reg mtable3:V, reg p9:p(V +), reg r16:V |
    mkenv;
    st fdef = fdef;
    st n = n;
    environment = ldf environment;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r1 = dyn environment(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st fenv = r1;
    assign = ldf assign;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p1 = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p2 = prom<V +>{
      fenv = ld fenv;
      fenv1 = force? fenv;
      checkMissing(fenv1);
      return fenv1;
    };
    r4 = dyn assign[, , envir](".SigLength", p1, p2);
    check L3() else D3();
  D3():
    deopt 11 [r4];
  L3():
    _getMethodsTable = ldf `.getMethodsTable`;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    p3 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    p4 = prom<V +>{
      fenv2 = ld fenv;
      fenv3 = force? fenv2;
      checkMissing(fenv3);
      return fenv3;
    };
    r7 = dyn _getMethodsTable[, , check](p3, p4, FALSE);
    check L5() else D5();
  D5():
    deopt 18 [r7];
  L5():
    st mtable = r7;
    __ = ldf `@` in base;
    r8 = dyn __(<sym fdef>, <sym signature>);
    st signames = r8;
    n3 = ld n;
    check L6() else D6();
  D6():
    deopt 23 [n3];
  L6():
    n4 = force? n3;
    checkMissing(n4);
    l = ld signames;
    length__ = ldf `length<-`;
    check L7() else D7();
  D7():
    deopt 26 [n4, l, n4];
  L7():
    r9 = dyn length__(l, NULL, n4);
    check L8() else D8();
  D8():
    deopt 28 [n4, r9];
  L8():
    st signames = r9;
    _resetTable = ldf `.resetTable`;
    check L9() else D9();
  D9():
    deopt 31 [];
  L9():
    p5 = prom<V +>{
      mtable = ld mtable;
      mtable1 = force? mtable;
      checkMissing(mtable1);
      return mtable1;
    };
    p6 = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      return n6;
    };
    p7 = prom<V +>{
      signames = ld signames;
      signames1 = force? signames;
      checkMissing(signames1);
      return signames1;
    };
    r13 = dyn _resetTable(p5, p6, p7);
    check L10() else D10();
  D10():
    deopt 35 [r13];
  L10():
    _resetInheritedMethods = ldf `.resetInheritedMethods`;
    check L11() else D11();
  D11():
    deopt 37 [];
  L11():
    p8 = prom<V +>{
      fenv4 = ld fenv;
      fenv5 = force? fenv4;
      checkMissing(fenv5);
      return fenv5;
    };
    p9 = prom<V +>{
      mtable2 = ld mtable;
      mtable3 = force? mtable2;
      checkMissing(mtable3);
      return mtable3;
    };
    r16 = dyn _resetInheritedMethods(p8, p9);
    check L12() else D12();
  D12():
    deopt 40 [r16];
  L12():
    popenv;
    return r16;
  }
}