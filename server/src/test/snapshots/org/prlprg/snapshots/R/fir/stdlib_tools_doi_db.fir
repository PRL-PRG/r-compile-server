fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner450292028;
    st doi_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner450292028(dois, parents) {
  (reg dois:*, reg parents:*) -+> V { var dois:*, var parents:*, reg list2DF:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg trimws:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg dois1:*, reg dois2:V, reg as_character:cls, reg r4:V, reg p:p(V +), reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg parents1:*, reg parents2:V, reg as_character1:cls, reg r9:V, reg list:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg c:cls, reg r15:V, reg l:*, reg class__:cls, reg r16:V, reg db:*, reg db1:V |
    mkenv;
    st dois = dois;
    st parents = parents;
    list2DF = ldf list2DF;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      trimws = ldf trimws;
      p = prom<V +>{
        sym1 = ldf `as.character`;
        base1 = ldf `as.character` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r3):
        return r3;
      L1():
        dois1 = ld dois;
        dois2 = force? dois1;
        checkMissing(dois2);
        as_character = ldf `as.character` in base;
        r4 = dyn as_character(dois2);
        goto L0(r4);
      L2():
        r2 = dyn base1(<sym dois>);
        goto L0(r2);
      };
      r6 = dyn trimws(p);
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r = dyn base[DOI, Parent](<lang trimws(as.character(dois))>, <lang as.character(parents)>);
      goto L0(r);
    L1(r8):
      list = ldf list in base;
      r10 = dyn list(r6, r8);
      goto L0(r10);
    L4():
      parents1 = ld parents;
      parents2 = force? parents1;
      checkMissing(parents2);
      as_character1 = ldf `as.character` in base;
      r9 = dyn as_character1(parents2);
      goto L1(r9);
    L5():
      r7 = dyn base2(<sym parents>);
      goto L1(r7);
    };
    r12 = dyn list2DF(p1);
    check L2() else D1();
  D1():
    deopt 3 [r12];
  L2():
    st db = r12;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L3() else L4();
  L0(r14):
    l = ld db;
    class__ = ldf `class<-`;
    check L6() else D3();
  L3():
    c = ldf c in base;
    r15 = dyn c("doi_db", "data.frame");
    check L5() else D2();
  L4():
    r13 = dyn base3("doi_db", "data.frame");
    goto L0(r13);
  D2():
    deopt 10 [r15];
  D3():
    deopt 12 [r14, l, r14];
  L5():
    goto L0(r15);
  L6():
    r16 = dyn class__(l, NULL, r14);
    check L7() else D4();
  D4():
    deopt 14 [r14, r16];
  L7():
    st db = r16;
    db = ld db;
    check L8() else D5();
  D5():
    deopt 16 [db];
  L8():
    db1 = force? db;
    checkMissing(db1);
    popenv;
    return db1;
  }
}