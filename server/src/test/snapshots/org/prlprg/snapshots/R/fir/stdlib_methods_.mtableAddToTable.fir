fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2932062158;
    st `.mtableAddToTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2932062158(generic, mlist, table, add) {
  (reg generic:*, reg mlist:*, reg table:*, reg add:*) -+> V { var generic:*, var mlist:*, var table:*, reg table_isMissing:L, reg table_orDefault:*, reg new_env:cls, reg fenv:*, reg fenv1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var add:*, reg add_isMissing:L, reg add_orDefault:*, reg environment:cls, reg generic1:*, reg generic2:V, reg p2:p(V +), reg r4:V, reg __:cls, reg r5:V, reg exists:cls, reg fenv2:*, reg fenv3:V, reg p3:p(V +), reg r7:V, reg r8:V, reg c:L, reg _setupMethodsTables:cls, reg generic3:*, reg generic4:V, reg p4:p(V +), reg r10:V, reg get:cls, reg fenv4:*, reg fenv5:V, reg p5:p(V +), reg r13:V, reg _storeMtable:cls, reg table1:*, reg table2:V, reg p6:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg rep:cls, reg r17:V, reg p7:p(V +), reg mlist1:*, reg mlist2:V, reg p8:p(V +), reg add1:*, reg add2:V, reg p9:p(V +), reg fenv6:*, reg fenv7:V, reg p10:p(V +), reg r22:V, reg get1:cls, reg fenv8:*, reg fenv9:V, reg p11:p(V +), reg r24:V, reg nNow:*, reg nNow1:V, reg n:*, reg n1:V, reg r25:V, reg c1:L, reg nNow2:*, reg nNow3:V, reg l:*, reg length__:cls, reg r26:V, reg _resetTable:cls, reg table3:*, reg table4:V, reg p12:p(V +), reg nNow4:*, reg nNow5:V, reg p13:p(V +), reg signature:*, reg signature1:V, reg p14:p(V +), reg r30:V, reg table5:*, reg table6:V |
    mkenv;
    st generic = generic;
    st mlist = mlist;
    table_isMissing = missing.0(table);
    if table_isMissing then L0() else L1(table);
  L0():
    p1 = prom<V +>{
      new_env = ldf `new.env`;
      p = prom<V +>{
        fenv = ld fenv;
        fenv1 = force? fenv;
        checkMissing(fenv1);
        return fenv1;
      };
      r1 = dyn new_env(TRUE, p);
      return r1;
    };
    goto L1(p1);
  L1(table_orDefault):
    st table = table_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L2(TRUE) else L2(add);
  L2(add_orDefault):
    st add = add_orDefault;
    environment = ldf environment;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p2 = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r4 = dyn environment(p2);
    check L8() else D1();
  D1():
    deopt 3 [r4];
  L8():
    st fenv = r4;
    __ = ldf `@` in base;
    r5 = dyn __(<sym generic>, <sym signature>);
    st signature = r5;
    exists = ldf exists;
    check L9() else D2();
  D2():
    deopt 9 [];
  L9():
    p3 = prom<V +>{
      fenv2 = ld fenv;
      fenv3 = force? fenv2;
      checkMissing(fenv3);
      return fenv3;
    };
    r7 = dyn exists[, envir, inherits](".SigLength", p3, FALSE);
    check L10() else D3();
  D3():
    deopt 15 [r7];
  L10():
    r8 = `!`(r7);
    c = `as.logical`(r8);
    if c then L11() else L3();
  L3():
    goto L4();
  L4():
    get = ldf get;
    check L15() else D6();
  L11():
    _setupMethodsTables = ldf `.setupMethodsTables`;
    check L12() else D4();
  D4():
    deopt 18 [];
  D6():
    deopt 24 [];
  L12():
    p4 = prom<V +>{
      generic3 = ld generic;
      generic4 = force? generic3;
      checkMissing(generic4);
      return generic4;
    };
    r10 = dyn _setupMethodsTables(p4);
    check L13() else D5();
  L15():
    p5 = prom<V +>{
      fenv4 = ld fenv;
      fenv5 = force? fenv4;
      checkMissing(fenv5);
      return fenv5;
    };
    r13 = dyn get[, envir, inherits](".SigLength", p5, FALSE);
    check L16() else D7();
  D5():
    deopt 20 [r10];
  D7():
    deopt 30 [r13];
  L13():
    goto L4();
  L16():
    st n = r13;
    _storeMtable = ldf `.storeMtable`;
    check L17() else D8();
  D8():
    deopt 33 [];
  L17():
    p6 = prom<V +>{
      table1 = ld table;
      table2 = force? table1;
      checkMissing(table2);
      return table2;
    };
    p7 = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r16):
      return r16;
    L1():
      rep = ldf rep in base;
      r17 = dyn rep("ANY", <sym n>);
      goto L0(r17);
    L2():
      r15 = dyn base("ANY", <sym n>);
      goto L0(r15);
    };
    p8 = prom<V +>{
      mlist1 = ld mlist;
      mlist2 = force? mlist1;
      checkMissing(mlist2);
      return mlist2;
    };
    p9 = prom<V +>{
      add1 = ld add;
      add2 = force? add1;
      checkMissing(add2);
      return add2;
    };
    p10 = prom<V +>{
      fenv6 = ld fenv;
      fenv7 = force? fenv6;
      checkMissing(fenv7);
      return fenv7;
    };
    r22 = dyn _storeMtable(p6, p7, p8, 1.0, p9, p10);
    check L18() else D9();
  D9():
    deopt 40 [r22];
  L18():
    get1 = ldf get;
    check L19() else D10();
  D10():
    deopt 42 [];
  L19():
    p11 = prom<V +>{
      fenv8 = ld fenv;
      fenv9 = force? fenv8;
      checkMissing(fenv9);
      return fenv9;
    };
    r24 = dyn get1[, envir, inherits](".SigLength", p11, FALSE);
    check L20() else D11();
  D11():
    deopt 48 [r24];
  L20():
    st nNow = r24;
    nNow = ld nNow;
    check L21() else D12();
  D12():
    deopt 50 [nNow];
  L21():
    nNow1 = force? nNow;
    checkMissing(nNow1);
    n = ld n;
    check L22() else D13();
  D13():
    deopt 51 [nNow1, n];
  L22():
    n1 = force? n;
    checkMissing(n1);
    r25 = `>`(nNow1, n1);
    c1 = `as.logical`(r25);
    if c1 then L23() else L5();
  L5():
    goto L6();
  L6():
    table5 = ld table;
    check L30() else D19();
  L23():
    nNow2 = ld nNow;
    check L24() else D14();
  D14():
    deopt 54 [nNow2];
  D19():
    deopt 69 [table5];
  L24():
    nNow3 = force? nNow2;
    checkMissing(nNow3);
    l = ld signature;
    length__ = ldf `length<-`;
    check L25() else D15();
  L30():
    table6 = force? table5;
    checkMissing(table6);
    popenv;
    return table6;
  D15():
    deopt 57 [nNow3, l, nNow3];
  L25():
    r26 = dyn length__(l, NULL, nNow3);
    check L26() else D16();
  D16():
    deopt 59 [nNow3, r26];
  L26():
    st signature = r26;
    _resetTable = ldf `.resetTable`;
    check L27() else D17();
  D17():
    deopt 62 [];
  L27():
    p12 = prom<V +>{
      table3 = ld table;
      table4 = force? table3;
      checkMissing(table4);
      return table4;
    };
    p13 = prom<V +>{
      nNow4 = ld nNow;
      nNow5 = force? nNow4;
      checkMissing(nNow5);
      return nNow5;
    };
    p14 = prom<V +>{
      signature = ld signature;
      signature1 = force? signature;
      checkMissing(signature1);
      return signature1;
    };
    r30 = dyn _resetTable(p12, p13, p14);
    check L28() else D18();
  D18():
    deopt 66 [r30];
  L28():
    goto L6();
  }
}