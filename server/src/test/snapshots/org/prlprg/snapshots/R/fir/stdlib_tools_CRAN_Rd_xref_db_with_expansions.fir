fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st CRAN_Rd_xref_db_with_expansions = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg CRAN_rdxrefs_db:cls, reg r:V, reg cbind:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg db:*, reg db1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg db2:*, reg db3:V, reg names:cls, reg r9:V, reg vapply:cls, reg db4:*, reg db5:V, reg p3:p(V +), reg NROW:*, reg NROW1:V, reg p4:p(V +), reg r12:V, reg rep_int:cls, reg r13:V, reg p5:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg colnames:cls, reg db6:*, reg db7:V, reg p6:p(V +), reg r19:V, reg c:L, reg r21:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r22:V, reg c1:cls, reg r23:V, reg l:*, reg colnames__:cls, reg r24:V, reg unique:cls, reg cbind1:cls, reg db8:*, reg db9:V, reg p7:p(V +), reg _expand_anchored_Rd_xrefs:cls, reg db10:*, reg db11:V, reg p8:p(V +), reg r27:V, reg p9:p(V +), reg r29:V, reg p10:p(V +), reg r31:V |
    mkenv;
    CRAN_rdxrefs_db = ldf CRAN_rdxrefs_db;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn CRAN_rdxrefs_db();
    check L3() else D1();
  D1():
    deopt 2 [r];
  L3():
    st db = r;
    cbind = ldf cbind;
    check L4() else D2();
  D2():
    deopt 5 [];
  L4():
    p2 = prom<V +>{
      do_call = ldf `do.call`;
      p = prom<V +>{
        rbind = ld rbind;
        rbind1 = force? rbind;
        checkMissing(rbind1);
        return rbind1;
      };
      p1 = prom<V +>{
        db = ld db;
        db1 = force? db;
        checkMissing(db1);
        return db1;
      };
      r3 = dyn do_call(p, p1);
      return r3;
    };
    p5 = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r6):
      return r6;
    L2():
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r5 = dyn base(<lang names(db)>, <lang vapply(db, NROW, 0)>);
      goto L0(r5);
    L1(r8):
      vapply = ldf vapply;
      p3 = prom<V +>{
        db4 = ld db;
        db5 = force? db4;
        checkMissing(db5);
        return db5;
      };
      p4 = prom<V +>{
        NROW = ld NROW;
        NROW1 = force? NROW;
        checkMissing(NROW1);
        return NROW1;
      };
      r12 = dyn vapply(p3, p4, 0);
      rep_int = ldf `rep.int` in base;
      r13 = dyn rep_int(r8, r12);
      goto L0(r13);
    L4():
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      names = ldf names in base;
      r9 = dyn names(db3);
      goto L1(r9);
    L5():
      r7 = dyn base1(<sym db>);
      goto L1(r7);
    };
    r15 = dyn cbind(p2, p5);
    check L5() else D3();
  D3():
    deopt 8 [r15];
  L5():
    st db = r15;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L6() else L7();
  L0(r17):
    l = ld db;
    colnames__ = ldf `colnames<-`;
    check L14() else D7();
  L6():
    colnames = ldf colnames;
    check L8() else D4();
  L7():
    r16 = dyn base2(<lang `[`(colnames(db), `:`(1, 2))>, "S_File", "S_Package");
    goto L0(r16);
  D4():
    deopt 13 [];
  D7():
    deopt 24 [r17, l, r17];
  L8():
    p6 = prom<V +>{
      db6 = ld db;
      db7 = force? db6;
      checkMissing(db7);
      return db7;
    };
    r19 = dyn colnames(p6);
    check L9() else D5();
  L14():
    r24 = dyn colnames__(l, NULL, r17);
    check L15() else D8();
  D5():
    deopt 15 [r19];
  D8():
    deopt 26 [r17, r24];
  L9():
    c = `is.object`(r19);
    if c then L10() else L11(r19);
  L15():
    st db = r24;
    unique = ldf unique;
    check L16() else D9();
  D9():
    deopt 29 [];
  L1(dx1):
    c1 = ldf c in base;
    r23 = dyn c1(dx1, "S_File", "S_Package");
    check L13() else D6();
  L10():
    dr = tryDispatchBuiltin.1("[", r19);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r21):
    __ = ldf `[` in base;
    r22 = dyn __(r21, <int 1, 2>);
    goto L1(r22);
  L16():
    p10 = prom<V +>{
      cbind1 = ldf cbind;
      p7 = prom<V +>{
        db8 = ld db;
        db9 = force? db8;
        checkMissing(db9);
        return db9;
      };
      p9 = prom<V +>{
        _expand_anchored_Rd_xrefs = ldf `.expand_anchored_Rd_xrefs`;
        p8 = prom<V +>{
          db10 = ld db;
          db11 = force? db10;
          checkMissing(db11);
          return db11;
        };
        r27 = dyn _expand_anchored_Rd_xrefs(p8);
        return r27;
      };
      r29 = dyn cbind1(p7, p9);
      return r29;
    };
    r31 = dyn unique(p10);
    check L17() else D10();
  D6():
    deopt 22 [r23];
  D10():
    deopt 31 [r31];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    goto L0(r23);
  L17():
    popenv;
    return r31;
  }
}