fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner395493168;
    st Rsyms = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner395493168(keep) {
  (reg keep:*) -+> V { var keep:*, reg keep_isMissing:L, reg keep_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg apidata:*, reg apidata1:V, reg c1:L, reg apidata3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg rsyms:*, reg rsyms1:V, reg c2:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg file_path:cls, reg R_home:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg dir:cls, reg R_home1:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg dir1:cls, reg R_home2:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg c4:cls, reg r18:V, reg rbind_list:cls, reg lapply:cls, reg ofiles:*, reg ofiles1:V, reg p4:p(V +), reg ofile_syms:*, reg ofile_syms1:V, reg p5:p(V +), reg keep1:*, reg keep2:V, reg p6:p(V +), reg r22:V, reg p7:p(V +), reg r24:V, reg rsyms2:*, reg rsyms3:V, reg l:*, reg c5:L, reg rsyms5:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg rsyms7:V, reg dx3:V, reg r25:V, reg rsyms9:*, reg rsyms10:V |
    mkenv;
    keep_isMissing = missing.0(keep);
    if keep_isMissing then L0() else L1(keep);
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
      r2 = dyn c("F", "V");
      goto L0(r2);
    L2():
      r = dyn base("F", "V");
      goto L0(r);
    };
    goto L1(p);
  L1(keep_orDefault):
    st keep = keep_orDefault;
    apidata = ld apidata;
    check L6() else D0();
  D0():
    deopt 0 [apidata];
  L6():
    apidata1 = force? apidata;
    checkMissing(apidata1);
    c1 = `is.object`(apidata1);
    if c1 then L8() else L9(apidata1);
  L7(dx1):
    st rsyms = dx1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L8():
    dr = tryDispatchBuiltin.1("$", apidata1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(apidata3):
    r4 = `$`(apidata3, <sym rsyms>);
    goto L7(r4);
  L2(r6):
    c3 = `as.logical`(r6);
    if c3 then L14() else L3();
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L11():
    rsyms = ld rsyms;
    check L13() else D1();
  L12():
    r5 = dyn base1(<sym rsyms>);
    goto L2(r5);
  D1():
    deopt 5 [rsyms];
  L3():
    goto L5();
  L5():
    rsyms9 = ld rsyms;
    check L32() else D12();
  L13():
    rsyms1 = force? rsyms;
    checkMissing(rsyms1);
    c2 = `==`(rsyms1, NULL);
    goto L2(c2);
  L14():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  D12():
    deopt 43 [rsyms9];
  L4(r8):
    st ofiles = r8;
    rbind_list = ldf rbind_list;
    check L24() else D9();
  L15():
    file_path = ldf `file.path`;
    check L17() else D2();
  L16():
    r7 = dyn base2(<lang file.path(R.home("bin"), "exec", "R")>, <lang dir(R.home("lib"), full.names=TRUE)>, <lang dir(R.home("modules"), full.names=TRUE)>);
    goto L4(r7);
  L32():
    rsyms10 = force? rsyms9;
    checkMissing(rsyms10);
    popenv;
    return rsyms10;
  D2():
    deopt 11 [];
  D9():
    deopt 32 [];
  L17():
    p1 = prom<V +>{
      R_home = ldf `R.home`;
      r9 = dyn R_home("bin");
      return r9;
    };
    r11 = dyn file_path(p1, "exec", "R");
    check L18() else D3();
  L24():
    p7 = prom<V +>{
      lapply = ldf lapply;
      p4 = prom<V +>{
        ofiles = ld ofiles;
        ofiles1 = force? ofiles;
        checkMissing(ofiles1);
        return ofiles1;
      };
      p5 = prom<V +>{
        ofile_syms = ld ofile_syms;
        ofile_syms1 = force? ofile_syms;
        checkMissing(ofile_syms1);
        return ofile_syms1;
      };
      p6 = prom<V +>{
        keep1 = ld keep;
        keep2 = force? keep1;
        checkMissing(keep2);
        return keep2;
      };
      r22 = dyn lapply(p4, p5, p6);
      return r22;
    };
    r24 = dyn rbind_list(p7);
    check L25() else D10();
  D3():
    deopt 15 [r11];
  D10():
    deopt 34 [r24];
  L18():
    dir = ldf dir;
    check L19() else D4();
  L25():
    st rsyms = r24;
    rsyms2 = ld rsyms;
    check L26() else D11();
  D4():
    deopt 17 [];
  D11():
    deopt 36 [rsyms2];
  L19():
    p2 = prom<V +>{
      R_home1 = ldf `R.home`;
      r12 = dyn R_home1("lib");
      return r12;
    };
    r14 = dyn dir[, `full.names`](p2, TRUE);
    check L20() else D5();
  L26():
    rsyms3 = force? rsyms2;
    checkMissing(rsyms3);
    l = ld apidata;
    c5 = `is.object`(l);
    if c5 then L28() else L29(rsyms3, l);
  D5():
    deopt 21 [r14];
  L20():
    dir1 = ldf dir;
    check L21() else D6();
  L27(rsyms7, dx3):
    st apidata = dx3;
    goto L5();
  L28():
    dr2 = tryDispatchBuiltin.0("$<-", l, rsyms3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L30() else L29(rsyms3, dr2);
  L29(rsyms5, l2):
    r25 = `$<-`(l2, <sym rsyms>, rsyms3);
    goto L27(rsyms5, r25);
  D6():
    deopt 23 [];
  L21():
    p3 = prom<V +>{
      R_home2 = ldf `R.home`;
      r15 = dyn R_home2("modules");
      return r15;
    };
    r17 = dyn dir1[, `full.names`](p3, TRUE);
    check L22() else D7();
  L30():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L27(rsyms3, dx2);
  D7():
    deopt 27 [r17];
  L22():
    c4 = ldf c in base;
    r18 = dyn c4(r11, r14, r17);
    check L23() else D8();
  D8():
    deopt 29 [r18];
  L23():
    goto L4(r18);
  }
}