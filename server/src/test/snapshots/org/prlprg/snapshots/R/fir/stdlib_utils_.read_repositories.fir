fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner270641308;
    st `.read_repositories` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner270641308(file) {
  (reg file:*) -+> V { var file:*, reg read_delim:cls, reg file1:*, reg file2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg rep_int:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg rep_int1:cls, reg r8:V, reg c:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg _expand_BioC_repository_URLs:cls, reg db:*, reg db1:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg l:*, reg c2:L, reg r16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r19:V, reg db4:*, reg db5:V |
    mkenv;
    st file = file;
    read_delim = ldf `read.delim`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r2):
      return r2;
    L3():
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L4():
      r1 = dyn base(<lang rep.int("character", 3)>, <lang rep.int("logical", 4)>);
      goto L0(r1);
    L1(r4):
      sym2 = ldf `rep.int`;
      base2 = ldf `rep.int` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L7() else L8();
    L5():
      rep_int = ldf `rep.int` in base;
      r5 = dyn rep_int("character", 3);
      goto L1(r5);
    L6():
      r3 = dyn base1("character", 3);
      goto L1(r3);
    L2(r7):
      c = ldf c in base;
      r9 = dyn c(r4, r7);
      goto L0(r9);
    L7():
      rep_int1 = ldf `rep.int` in base;
      r8 = dyn rep_int1("logical", 4);
      goto L2(r8);
    L8():
      r6 = dyn base2("logical", 4);
      goto L2(r6);
    };
    r11 = dyn read_delim[, header, `comment.char`, colClasses](p, TRUE, "#", p1);
    check L2() else D1();
  D1():
    deopt 9 [r11];
  L2():
    st db = r11;
    _expand_BioC_repository_URLs = ldf `.expand_BioC_repository_URLs`;
    check L3() else D2();
  D2():
    deopt 12 [];
  L3():
    p2 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      c1 = `is.object`(db1);
      if c1 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", db1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r12 = dyn __(db1, <missing>, "URL");
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r14 = dyn _expand_BioC_repository_URLs(p2);
    check L4() else D3();
  D3():
    deopt 14 [r14];
  L4():
    l = ld db;
    c2 = `is.object`(l);
    if c2 then L5() else L6(r14);
  L0(dx3):
    st db = dx3;
    db4 = ld db;
    check L8() else D4();
  L5():
    dr2 = tryDispatchBuiltin.0("[<-", l, r14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L7() else L6(r14);
  L6(r16):
    ___ = ldf `[<-` in base;
    r19 = dyn ___(l, <missing>, "URL", r14);
    goto L0(r19);
  D4():
    deopt 21 [db4];
  L7():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L8():
    db5 = force? db4;
    checkMissing(db5);
    popenv;
    return db5;
  }
}