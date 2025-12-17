fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st defaultUserAgent = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg paste:cls, reg R_version:*, reg R_version1:V, reg c:L, reg R_version3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg R_version4:*, reg R_version5:V, reg c1:L, reg R_version7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg p1:p(V +), reg r4:V, reg paste1:cls, reg Rver:*, reg Rver1:V, reg p2:p(V +), reg R_version8:*, reg R_version9:V, reg c2:L, reg R_version11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r6:V, reg p3:p(V +), reg R_version12:*, reg R_version13:V, reg c3:L, reg R_version15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r8:V, reg p4:p(V +), reg R_version16:*, reg R_version17:V, reg c4:L, reg R_version19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r10:V, reg p5:p(V +), reg r12:V, reg paste2:cls, reg Rdetails:*, reg Rdetails1:V, reg p6:p(V +), reg r14:V |
    mkenv;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c = `is.object`(R_version1);
      if c then L1() else L2(R_version1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", R_version1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(R_version3):
      r = `$`(R_version3, <sym major>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      R_version4 = ld `R.version`;
      R_version5 = force? R_version4;
      checkMissing(R_version5);
      c1 = `is.object`(R_version5);
      if c1 then L1() else L2(R_version5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", R_version5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(R_version7):
      r2 = `$`(R_version7, <sym minor>);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r4 = dyn paste[, , sep](p, p1, ".");
    check L1() else D1();
  D1():
    deopt 6 [r4];
  L1():
    st Rver = r4;
    paste1 = ldf paste;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p2 = prom<V +>{
      Rver = ld Rver;
      Rver1 = force? Rver;
      checkMissing(Rver1);
      return Rver1;
    };
    p3 = prom<V +>{
      R_version8 = ld `R.version`;
      R_version9 = force? R_version8;
      checkMissing(R_version9);
      c2 = `is.object`(R_version9);
      if c2 then L1() else L2(R_version9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", R_version9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(R_version11):
      r6 = `$`(R_version11, <sym platform>);
      goto L0(r6);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p4 = prom<V +>{
      R_version12 = ld `R.version`;
      R_version13 = force? R_version12;
      checkMissing(R_version13);
      c3 = `is.object`(R_version13);
      if c3 then L1() else L2(R_version13);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", R_version13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(R_version15):
      r8 = `$`(R_version15, <sym arch>);
      goto L0(r8);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p5 = prom<V +>{
      R_version16 = ld `R.version`;
      R_version17 = force? R_version16;
      checkMissing(R_version17);
      c4 = `is.object`(R_version17);
      if c4 then L1() else L2(R_version17);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", R_version17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(R_version19):
      r10 = `$`(R_version19, <sym os>);
      goto L0(r10);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r12 = dyn paste1(p2, p3, p4, p5);
    check L3() else D3();
  D3():
    deopt 14 [r12];
  L3():
    st Rdetails = r12;
    paste2 = ldf paste0;
    check L4() else D4();
  D4():
    deopt 17 [];
  L4():
    p6 = prom<V +>{
      Rdetails = ld Rdetails;
      Rdetails1 = force? Rdetails;
      checkMissing(Rdetails1);
      return Rdetails1;
    };
    r14 = dyn paste2("R (", p6, ")");
    check L5() else D5();
  D5():
    deopt 21 [r14];
  L5():
    popenv;
    return r14;
  }
}