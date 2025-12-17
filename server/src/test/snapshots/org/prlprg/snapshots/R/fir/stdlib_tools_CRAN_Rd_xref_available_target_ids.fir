fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st CRAN_Rd_xref_available_target_ids = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg lapply:cls, reg CRAN_aliases_db:cls, reg r:V, reg p:p(V +), reg _Rd_available_xref_targets:*, reg _Rd_available_xref_targets1:V, reg p1:p(V +), reg r3:V, reg _Rd_object_id:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg targets:*, reg targets1:V, reg names:cls, reg r8:V, reg lengths:cls, reg targets2:*, reg targets3:V, reg p2:p(V +), reg r10:V, reg rep_int:cls, reg r11:V, reg p3:p(V +), reg unlist:cls, reg targets4:*, reg targets5:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V |
    mkenv;
    lapply = ldf lapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      CRAN_aliases_db = ldf CRAN_aliases_db;
      r = dyn CRAN_aliases_db();
      return r;
    };
    p1 = prom<V +>{
      _Rd_available_xref_targets = ld `.Rd_available_xref_targets`;
      _Rd_available_xref_targets1 = force? _Rd_available_xref_targets;
      checkMissing(_Rd_available_xref_targets1);
      return _Rd_available_xref_targets1;
    };
    r3 = dyn lapply(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    st targets = r3;
    _Rd_object_id = ldf `.Rd_object_id`;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p3 = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r5):
      return r5;
    L2():
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r4 = dyn base(<lang names(targets)>, <lang lengths(targets)>);
      goto L0(r4);
    L1(r7):
      lengths = ldf lengths;
      p2 = prom<V +>{
        targets2 = ld targets;
        targets3 = force? targets2;
        checkMissing(targets3);
        return targets3;
      };
      r10 = dyn lengths(p2);
      rep_int = ldf `rep.int` in base;
      r11 = dyn rep_int(r7, r10);
      goto L0(r11);
    L4():
      targets = ld targets;
      targets1 = force? targets;
      checkMissing(targets1);
      names = ldf names in base;
      r8 = dyn names(targets1);
      goto L1(r8);
    L5():
      r6 = dyn base1(<sym targets>);
      goto L1(r6);
    };
    p5 = prom<V +>{
      unlist = ldf unlist;
      p4 = prom<V +>{
        targets4 = ld targets;
        targets5 = force? targets4;
        checkMissing(targets5);
        return targets5;
      };
      r14 = dyn unlist[, `use.names`](p4, FALSE);
      return r14;
    };
    r16 = dyn _Rd_object_id(p3, p5);
    check L3() else D3();
  D3():
    deopt 10 [r16];
  L3():
    popenv;
    return r16;
  }
}