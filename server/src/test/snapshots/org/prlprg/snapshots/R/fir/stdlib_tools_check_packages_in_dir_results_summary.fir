fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner28838770;
    st check_packages_in_dir_results_summary = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner28838770(results) {
  (reg results:*) -+> V { var results:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg results1:*, reg results2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg vapply:cls, reg results3:*, reg results4:V, reg p:p(V +), reg __:*, reg __1:V, reg p1:p(V +), reg r8:V, reg startsWith:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg results5:*, reg results6:V, reg names:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg table:cls, reg ifelse:cls, reg ind:*, reg ind1:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg status:*, reg status1:V, reg p5:p(V +), reg r18:V, reg tab:*, reg tab1:V, reg c1:L, reg tab3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg tab6:V, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg tab9:V, reg r22:V, reg c2:cls, reg r23:V, reg rownames:cls, reg tab10:*, reg tab11:V, reg p6:p(V +), reg r25:V, reg match:cls, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg tab17:V, reg r30:V, reg c3:cls, reg r31:V, reg colnames:cls, reg tab18:*, reg tab19:V, reg p7:p(V +), reg r33:V, reg match1:cls, reg r34:V, reg __2:cls, reg r35:V, reg l:*, reg dimnames:cls, reg r36:V, reg names__:cls, reg r37:V, reg dimnames__:cls, reg r38:V, reg tab20:*, reg tab21:V |
    mkenv;
    st results = results;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L12() else L1();
  L8():
    results1 = ld results;
    check L10() else D0();
  L9():
    r = dyn base(<sym results>);
    goto L0(r);
  D0():
    deopt 2 [results1];
  L1():
    vapply = ldf vapply;
    check L15() else D2();
  L10():
    results2 = force? results1;
    checkMissing(results2);
    length = ldf length in base;
    r2 = dyn length(results2);
    check L11() else D1();
  L12():
    popenv;
    return NULL;
  D1():
    deopt 5 [r2];
  D2():
    deopt 13 [];
  L11():
    goto L0(r2);
  L15():
    p = prom<V +>{
      results3 = ld results;
      results4 = force? results3;
      checkMissing(results4);
      return results4;
    };
    p1 = prom<V +>{
      __ = ld `[[`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r8 = dyn vapply(p, p1, "", "status");
    check L16() else D3();
  D3():
    deopt 18 [r8];
  L16():
    st status = r8;
    startsWith = ldf startsWith;
    check L17() else D4();
  D4():
    deopt 21 [];
  L17():
    p2 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      results5 = ld results;
      results6 = force? results5;
      checkMissing(results6);
      names = ldf names in base;
      r11 = dyn names(results6);
      goto L0(r11);
    L2():
      r9 = dyn base1(<sym results>);
      goto L0(r9);
    };
    r13 = dyn startsWith(p2, "rdepends_");
    check L18() else D5();
  D5():
    deopt 24 [r13];
  L18():
    st ind = r13;
    table = ldf table;
    check L19() else D6();
  D6():
    deopt 27 [];
  L19():
    p4 = prom<V +>{
      ifelse = ldf ifelse;
      p3 = prom<V +>{
        ind = ld ind;
        ind1 = force? ind;
        checkMissing(ind1);
        return ind1;
      };
      r15 = dyn ifelse(p3, "Reverse depends", "Source packages");
      return r15;
    };
    p5 = prom<V +>{
      status = ld status;
      status1 = force? status;
      checkMissing(status1);
      return status1;
    };
    r18 = dyn table[, , `deparse.level`](p4, p5, 0);
    check L20() else D7();
  D7():
    deopt 32 [r18];
  L20():
    st tab = r18;
    tab = ld tab;
    check L21() else D8();
  D8():
    deopt 34 [tab];
  L21():
    tab1 = force? tab;
    checkMissing(tab1);
    c1 = `is.object`(tab1);
    if c1 then L22() else L23(tab1);
  L3(dx1):
    st tab = dx1;
    l = ld tab;
    dimnames = ldf dimnames;
    check L41() else D17();
  L22():
    dr = tryDispatchBuiltin.1("[", tab1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(tab3):
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  D17():
    deopt 79 [NULL, l, NULL];
  L4(tab6, r20):
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L33() else L34();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L25():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L26():
    r19 = dyn base2[, , nomatch](<lang c("Source packages", "Reverse depends")>, <lang rownames(tab)>, 0);
    goto L4(tab3, r19);
  L41():
    r36 = dyn dimnames(NULL, NULL);
    check L42() else D18();
  D18():
    deopt 81 [NULL, l, NULL, r36];
  L5(tab9, r22):
    rownames = ldf rownames;
    check L30() else D10();
  L6(r28):
    __2 = ldf `[` in base;
    r35 = dyn __2(tab1, r20, r28, FALSE);
    goto L3(r35);
  L27():
    c2 = ldf c in base;
    r23 = dyn c2("Source packages", "Reverse depends");
    check L29() else D9();
  L28():
    r21 = dyn base3("Source packages", "Reverse depends");
    goto L5(tab3, r21);
  L33():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L35() else L36();
  L34():
    r27 = dyn base4[, , nomatch](<lang c("FAILURE", "ERROR", "WARNING", "NOTE", "OK")>, <lang colnames(tab)>, 0);
    goto L6(r27);
  L42():
    names__ = ldf `names<-`;
    check L43() else D19();
  D9():
    deopt 43 [tab3, r23];
  D10():
    deopt 45 [tab9];
  D19():
    deopt 83 [NULL, l, r36, NULL];
  L7(tab17, r30):
    colnames = ldf colnames;
    check L38() else D14();
  L29():
    goto L5(tab3, r23);
  L30():
    p6 = prom<V +>{
      tab10 = ld tab;
      tab11 = force? tab10;
      checkMissing(tab11);
      return tab11;
    };
    r25 = dyn rownames(p6);
    check L31() else D11();
  L35():
    c3 = ldf c in base;
    r31 = dyn c3("FAILURE", "ERROR", "WARNING", "NOTE", "OK");
    check L37() else D13();
  L36():
    r29 = dyn base5("FAILURE", "ERROR", "WARNING", "NOTE", "OK");
    goto L7(tab6, r29);
  L43():
    r37 = dyn names__(r36, NULL, NULL);
    check L44() else D20();
  D11():
    deopt 47 [tab9, r25];
  D13():
    deopt 62 [tab6, r31];
  D14():
    deopt 64 [tab17];
  D20():
    deopt 85 [NULL, l, r37];
  L31():
    match = ldf match in base;
    r26 = dyn match(r22, r25, 0, NULL);
    check L32() else D12();
  L37():
    goto L7(tab6, r31);
  L38():
    p7 = prom<V +>{
      tab18 = ld tab;
      tab19 = force? tab18;
      checkMissing(tab19);
      return tab19;
    };
    r33 = dyn colnames(p7);
    check L39() else D15();
  L44():
    dimnames__ = ldf `dimnames<-`;
    check L45() else D21();
  D12():
    deopt 51 [tab9, r26];
  D15():
    deopt 66 [tab17, r33];
  D21():
    deopt 86 [NULL, l, r37];
  L32():
    goto L4(tab9, r26);
  L39():
    match1 = ldf match in base;
    r34 = dyn match1(r30, r33, 0, NULL);
    check L40() else D16();
  L45():
    r38 = dyn dimnames__(l, NULL, r37);
    check L46() else D22();
  D16():
    deopt 70 [tab17, r34];
  D22():
    deopt 88 [NULL, r38];
  L40():
    goto L6(r34);
  L46():
    st tab = r38;
    tab20 = ld tab;
    check L47() else D23();
  D23():
    deopt 90 [tab20];
  L47():
    tab21 = force? tab20;
    checkMissing(tab21);
    popenv;
    return tab21;
  }
}