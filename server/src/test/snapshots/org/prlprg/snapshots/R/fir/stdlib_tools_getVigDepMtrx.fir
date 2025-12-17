fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2652458100;
    st getVigDepMtrx = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2652458100(vigDeps) {
  (reg vigDeps:*) -+> V { var vigDeps:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vigDeps1:*, reg vigDeps2:V, reg length:cls, reg r2:V, reg c:L, reg unlist:cls, reg strsplit:cls, reg vigDeps3:*, reg vigDeps4:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg sub:cls, reg z:*, reg z1:V, reg p2:p(V +), reg r8:V, reg sub1:cls, reg z2:*, reg z3:V, reg p3:p(V +), reg r10:V, reg cbind:cls, reg sub2:cls, reg pat:*, reg pat1:V, reg p4:p(V +), reg z4:*, reg z5:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg sub3:cls, reg pat2:*, reg pat3:V, reg p7:p(V +), reg z6:*, reg z7:V, reg p8:p(V +), reg r17:V, reg p9:p(V +), reg r19:V, reg depMtrx:*, reg depMtrx1:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r20:V, reg depMtrx4:*, reg depMtrx5:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg __1:cls, reg r21:V, reg r22:V, reg l:*, reg c3:L, reg r24:L, reg l2:*, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg noversion:*, reg noversion1:V, reg ___:cls, reg r27:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg r29:V, reg sub4:cls, reg pat4:*, reg pat5:V, reg p10:p(V +), reg depMtrx8:*, reg depMtrx9:V, reg c4:L, reg depMtrx11:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg noversion2:*, reg noversion3:V, reg r31:V, reg __2:cls, reg r32:V, reg p11:p(V +), reg r34:V, reg sub5:cls, reg pat6:*, reg pat7:V, reg p12:p(V +), reg depMtrx12:*, reg depMtrx13:V, reg c5:L, reg depMtrx15:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg noversion4:*, reg noversion5:V, reg r36:V, reg __3:cls, reg r37:V, reg p13:p(V +), reg r39:V, reg c6:cls, reg r40:V, reg l3:*, reg c7:L, reg r42:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg noversion6:*, reg noversion7:V, reg r45:V, reg ___1:cls, reg r46:V, reg depMtrx16:*, reg depMtrx17:V |
    mkenv;
    st vigDeps = vigDeps;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c = `as.logical`(r1);
    if c then L11() else L1();
  L7():
    vigDeps1 = ld vigDeps;
    check L9() else D0();
  L8():
    r = dyn base(<sym vigDeps>);
    goto L0(r);
  D0():
    deopt 2 [vigDeps1];
  L1():
    popenv;
    return NA_LGL;
  L9():
    vigDeps2 = force? vigDeps1;
    checkMissing(vigDeps2);
    length = ldf length in base;
    r2 = dyn length(vigDeps2);
    check L10() else D1();
  L11():
    unlist = ldf unlist;
    check L12() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L10():
    goto L0(r2);
  L12():
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        vigDeps3 = ld vigDeps;
        vigDeps4 = force? vigDeps3;
        checkMissing(vigDeps4);
        return vigDeps4;
      };
      r4 = dyn strsplit[, , fixed](p, ",", TRUE);
      return r4;
    };
    r6 = dyn unlist(p1);
    check L13() else D3();
  D3():
    deopt 9 [r6];
  L13():
    st z = r6;
    sub = ldf sub;
    check L14() else D4();
  D4():
    deopt 12 [];
  L14():
    p2 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r8 = dyn sub("^[[:space:]]*(.*)", "\\1", p2);
    check L15() else D5();
  D5():
    deopt 16 [r8];
  L15():
    st z = r8;
    sub1 = ldf sub;
    check L16() else D6();
  D6():
    deopt 19 [];
  L16():
    p3 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    r10 = dyn sub1("(.*)[[:space:]]*$", "\\1", p3);
    check L17() else D7();
  D7():
    deopt 23 [r10];
  L17():
    st z = r10;
    st pat = "^([^\\([:space:]]+)[[:space:]]*\\(([^\\)]+)\\).*";
    cbind = ldf cbind;
    check L18() else D8();
  D8():
    deopt 29 [];
  L18():
    p6 = prom<V +>{
      sub2 = ldf sub;
      p4 = prom<V +>{
        pat = ld pat;
        pat1 = force? pat;
        checkMissing(pat1);
        return pat1;
      };
      p5 = prom<V +>{
        z4 = ld z;
        z5 = force? z4;
        checkMissing(z5);
        return z5;
      };
      r13 = dyn sub2(p4, "\\1", p5);
      return r13;
    };
    p9 = prom<V +>{
      sub3 = ldf sub;
      p7 = prom<V +>{
        pat2 = ld pat;
        pat3 = force? pat2;
        checkMissing(pat3);
        return pat3;
      };
      p8 = prom<V +>{
        z6 = ld z;
        z7 = force? z6;
        checkMissing(z7);
        return z7;
      };
      r17 = dyn sub3(p7, "\\2", p8);
      return r17;
    };
    r19 = dyn cbind(p6, p9, NA_LGL);
    check L19() else D9();
  D9():
    deopt 33 [r19];
  L19():
    st depMtrx = r19;
    depMtrx = ld depMtrx;
    check L20() else D10();
  D10():
    deopt 35 [depMtrx];
  L20():
    depMtrx1 = force? depMtrx;
    checkMissing(depMtrx1);
    c1 = `is.object`(depMtrx1);
    if c1 then L21() else L22();
  L2(dx1):
    depMtrx4 = ld depMtrx;
    check L24() else D11();
  L21():
    dr = tryDispatchBuiltin.1("[", depMtrx1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22();
  L22():
    __ = ldf `[` in base;
    r20 = dyn __(depMtrx1, <missing>, 1);
    goto L2(r20);
  D11():
    deopt 40 [dx1, depMtrx4];
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L24():
    depMtrx5 = force? depMtrx4;
    checkMissing(depMtrx5);
    c2 = `is.object`(depMtrx5);
    if c2 then L25() else L26(dx1);
  L3(dx6, dx7):
    r22 = `==`(dx6, dx7);
    st noversion = r22;
    l = ld depMtrx;
    c3 = `is.object`(l);
    if c3 then L28() else L29(NA_LGL, l);
  L25():
    dr2 = tryDispatchBuiltin.1("[", depMtrx5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(dx1);
  L26(dx3):
    __1 = ldf `[` in base;
    r21 = dyn __1(depMtrx5, <missing>, 2);
    goto L3(dx3, r21);
  L4(dx9):
    st depMtrx = dx9;
    st pat = "[[:space:]]*([[<>=]+)[[:space:]]+(.*)";
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L27():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx1, dx5);
  L28():
    dr4 = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L30() else L29(NA_LGL, dr4);
  L29(r24, l2):
    noversion = ld noversion;
    check L31() else D12();
  D12():
    deopt 51 [r24, l2, NA_LGL, noversion];
  L5(r29):
    l3 = ld depMtrx;
    c7 = `is.object`(l3);
    if c7 then L39() else L40(r29, l3);
  L30():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx8);
  L31():
    noversion1 = force? noversion;
    ___ = ldf `[<-` in base;
    r27 = dyn ___(l2, NA_LGL, noversion1, 2);
    goto L4(r27);
  L32():
    sub4 = ldf sub;
    check L34() else D13();
  L33():
    r28 = dyn base1(<lang sub(pat, "\\1", `[`(depMtrx, `!`(noversion), 2))>, <lang sub(pat, "\\2", `[`(depMtrx, `!`(noversion), 2))>);
    goto L5(r28);
  D13():
    deopt 62 [];
  L6(dx15):
    st depMtrx = dx15;
    depMtrx16 = ld depMtrx;
    check L43() else D19();
  L34():
    p10 = prom<V +>{
      pat4 = ld pat;
      pat5 = force? pat4;
      checkMissing(pat5);
      return pat5;
    };
    p11 = prom<V +>{
      depMtrx8 = ld depMtrx;
      depMtrx9 = force? depMtrx8;
      checkMissing(depMtrx9);
      c4 = `is.object`(depMtrx9);
      if c4 then L1() else L2(depMtrx9);
    L0(dx11):
      return dx11;
    L1():
      dr6 = tryDispatchBuiltin.1("[", depMtrx9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(depMtrx11):
      noversion2 = ld noversion;
      noversion3 = force? noversion2;
      checkMissing(noversion3);
      r31 = `!`(noversion3);
      __2 = ldf `[` in base;
      r32 = dyn __2(depMtrx11, r31, 2);
      goto L0(r32);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx10);
    };
    r34 = dyn sub4(p10, "\\1", p11);
    check L35() else D14();
  L39():
    dr10 = tryDispatchBuiltin.0("[<-", l3, r29);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L41() else L40(r29, dr10);
  L40(r42, l5):
    noversion6 = ld noversion;
    check L42() else D18();
  D14():
    deopt 66 [r34];
  D18():
    deopt 76 [r42, l5, r29, noversion6];
  D19():
    deopt 82 [depMtrx16];
  L35():
    sub5 = ldf sub;
    check L36() else D15();
  L41():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L6(dx14);
  L42():
    noversion7 = force? noversion6;
    checkMissing(noversion7);
    r45 = `!`(noversion7);
    ___1 = ldf `[<-` in base;
    r46 = dyn ___1(l5, r29, r45, <int 2, 3>);
    goto L6(r46);
  L43():
    depMtrx17 = force? depMtrx16;
    checkMissing(depMtrx17);
    popenv;
    return depMtrx17;
  D15():
    deopt 68 [];
  L36():
    p12 = prom<V +>{
      pat6 = ld pat;
      pat7 = force? pat6;
      checkMissing(pat7);
      return pat7;
    };
    p13 = prom<V +>{
      depMtrx12 = ld depMtrx;
      depMtrx13 = force? depMtrx12;
      checkMissing(depMtrx13);
      c5 = `is.object`(depMtrx13);
      if c5 then L1() else L2(depMtrx13);
    L0(dx13):
      return dx13;
    L1():
      dr8 = tryDispatchBuiltin.1("[", depMtrx13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(depMtrx15):
      noversion4 = ld noversion;
      noversion5 = force? noversion4;
      checkMissing(noversion5);
      r36 = `!`(noversion5);
      __3 = ldf `[` in base;
      r37 = dyn __3(depMtrx15, r36, 2);
      goto L0(r37);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx12);
    };
    r39 = dyn sub5(p12, "\\2", p13);
    check L37() else D16();
  D16():
    deopt 72 [r39];
  L37():
    c6 = ldf c in base;
    r40 = dyn c6(r34, r39);
    check L38() else D17();
  D17():
    deopt 74 [r40];
  L38():
    goto L5(r40);
  }
}