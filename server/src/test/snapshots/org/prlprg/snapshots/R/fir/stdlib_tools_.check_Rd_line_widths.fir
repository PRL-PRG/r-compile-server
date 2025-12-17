fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2357965081;
    st `.check_Rd_line_widths` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2357965081(dir, limit, installed) {
  (reg dir:*, reg limit:*, reg installed:*) -+> V { var dir:*, var limit:*, reg limit_isMissing:L, reg limit_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var installed:*, reg installed_isMissing:L, reg installed_orDefault:*, reg installed1:*, reg installed2:V, reg c1:L, reg Rd_db:cls, reg basename:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg dirname:cls, reg dir3:*, reg dir4:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg r11:V, reg Rd_db1:cls, reg dir5:*, reg dir6:V, reg p5:p(V +), reg r13:V, reg find_wide_Rd_lines_in_Rd_db:cls, reg db:*, reg db1:V, reg p6:p(V +), reg limit1:*, reg limit2:V, reg p7:p(V +), reg installed3:*, reg installed4:V, reg p8:p(V +), reg r17:V, reg l:*, reg class__:cls, reg r18:V, reg limit3:*, reg limit4:V, reg l1:*, reg attr__:cls, reg r19:V, reg out:*, reg out1:V |
    mkenv;
    st dir = dir;
    limit_isMissing = missing.0(limit);
    if limit_isMissing then L0() else L1(limit);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(95.0, 105.0);
      goto L0(r2);
    L2():
      r = dyn base[usage, examples](95.0, 105.0);
      goto L0(r);
    };
    goto L1(p);
  L1(limit_orDefault):
    st limit = limit_orDefault;
    installed_isMissing = missing.0(installed);
    if installed_isMissing then L2(FALSE) else L2(installed);
  L2(installed_orDefault):
    st installed = installed_orDefault;
    installed1 = ld installed;
    check L5() else D0();
  D0():
    deopt 0 [installed1];
  L5():
    installed2 = force? installed1;
    checkMissing(installed2);
    c1 = `as.logical`(installed2);
    if c1 then L6() else L3();
  L3():
    Rd_db1 = ldf Rd_db;
    check L10() else D3();
  L4(r11):
    st db = r11;
    find_wide_Rd_lines_in_Rd_db = ldf find_wide_Rd_lines_in_Rd_db;
    check L12() else D5();
  L6():
    Rd_db = ldf Rd_db;
    check L7() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  D5():
    deopt 15 [];
  L7():
    p2 = prom<V +>{
      basename = ldf basename;
      p1 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r5 = dyn basename(p1);
      return r5;
    };
    p4 = prom<V +>{
      dirname = ldf dirname;
      p3 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r8 = dyn dirname(p3);
      return r8;
    };
    r10 = dyn Rd_db[, `lib.loc`](p2, p4);
    check L8() else D2();
  L10():
    p5 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r13 = dyn Rd_db1[dir](p5);
    check L11() else D4();
  L12():
    p6 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p7 = prom<V +>{
      limit1 = ld limit;
      limit2 = force? limit1;
      checkMissing(limit2);
      return limit2;
    };
    p8 = prom<V +>{
      installed3 = ld installed;
      installed4 = force? installed3;
      checkMissing(installed4);
      return installed4;
    };
    r17 = dyn find_wide_Rd_lines_in_Rd_db(p6, p7, p8);
    check L13() else D6();
  D2():
    deopt 7 [r10];
  D4():
    deopt 12 [r13];
  D6():
    deopt 19 [r17];
  L8():
    goto L4(r10);
  L11():
    goto L4(r13);
  L13():
    st out = r17;
    l = ld out;
    class__ = ldf `class<-`;
    check L14() else D7();
  D7():
    deopt 24 ["check_Rd_line_widths", l, "check_Rd_line_widths"];
  L14():
    r18 = dyn class__(l, NULL, "check_Rd_line_widths");
    check L15() else D8();
  D8():
    deopt 26 ["check_Rd_line_widths", r18];
  L15():
    st out = r18;
    limit3 = ld limit;
    check L16() else D9();
  D9():
    deopt 28 [limit3];
  L16():
    limit4 = force? limit3;
    checkMissing(limit4);
    l1 = ld out;
    attr__ = ldf `attr<-`;
    check L17() else D10();
  D10():
    deopt 31 [limit4, l1, limit4];
  L17():
    r19 = dyn attr__(l1, NULL, "limit", limit4);
    check L18() else D11();
  D11():
    deopt 34 [limit4, r19];
  L18():
    st out = r19;
    out = ld out;
    check L19() else D12();
  D12():
    deopt 36 [out];
  L19():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  }
}