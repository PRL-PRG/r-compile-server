fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3455886275;
    st `.check_package_datalist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3455886275(package, `lib.loc`) {
  (reg package:*, reg lib_loc:*) -+> V { var package:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg list_data_in_pkg:cls, reg package1:*, reg package2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r5:V, reg list_data_in_pkg1:cls, reg package3:*, reg package4:V, reg p2:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p3:p(V +), reg r8:V, reg lapply:cls, reg ans1:*, reg ans2:V, reg p4:p(V +), reg sort:*, reg sort1:V, reg p5:p(V +), reg r11:V, reg ans3:*, reg ans4:V, reg c:L, reg ans6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg order:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg ans7:*, reg ans8:V, reg names:cls, reg r14:V, reg p6:p(V +), reg r16:V, reg __:cls, reg r17:V, reg lapply1:cls, reg ans9:*, reg ans10:V, reg p7:p(V +), reg sort2:*, reg sort3:V, reg p8:p(V +), reg r20:V, reg ans11:*, reg ans12:V, reg c1:L, reg ans14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg order1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg ans15:*, reg ans16:V, reg names1:cls, reg r23:V, reg p9:p(V +), reg r25:V, reg __1:cls, reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg ans17:*, reg ans18:V, reg ans19:*, reg ans20:V, reg identical:cls, reg r29:V, reg r30:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg ans21:*, reg ans22:V, reg names2:cls, reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg ans23:*, reg ans24:V, reg names3:cls, reg r36:V, reg unlist:cls, reg ans25:*, reg ans26:V, reg p10:p(V +), reg r38:V, reg unlist1:cls, reg ans27:*, reg ans28:V, reg p11:p(V +), reg r40:V, reg Filter:cls, reg length:*, reg length1:V, reg p12:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg setdiff:cls, reg nx1:*, reg nx2:V, reg p13:p(V +), reg nx3:*, reg nx4:V, reg p14:p(V +), reg r46:V, reg setdiff1:cls, reg nx5:*, reg nx6:V, reg p15:p(V +), reg nx7:*, reg nx8:V, reg p16:p(V +), reg r49:V, reg setdiff2:cls, reg ex1:*, reg ex2:V, reg p17:p(V +), reg ex3:*, reg ex4:V, reg p18:p(V +), reg r52:V, reg setdiff3:cls, reg ex5:*, reg ex6:V, reg p19:p(V +), reg ex7:*, reg ex8:V, reg p20:p(V +), reg r55:V, reg list1:cls, reg r56:V, reg p21:p(V +), reg r58:V, reg l:*, reg class__:cls, reg r60:V, reg out:*, reg out1:V |
    mkenv;
    st package = package;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r1):
    st out = r1;
    list_data_in_pkg = ldf list_data_in_pkg;
    check L12() else D1();
  L9():
    list = ldf list in base;
    r2 = dyn list();
    check L11() else D0();
  L10():
    r = dyn base();
    goto L1(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 6 [];
  L11():
    goto L1(r2);
  L12():
    p = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r5 = dyn list_data_in_pkg(p, p1);
    check L13() else D2();
  D2():
    deopt 9 [r5];
  L13():
    st ans1 = r5;
    list_data_in_pkg1 = ldf list_data_in_pkg;
    check L14() else D3();
  D3():
    deopt 12 [];
  L14():
    p2 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p3 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    r8 = dyn list_data_in_pkg1[, , use_datalist](p2, p3, FALSE);
    check L15() else D4();
  D4():
    deopt 17 [r8];
  L15():
    st ans2 = r8;
    lapply = ldf lapply;
    check L16() else D5();
  D5():
    deopt 20 [];
  L16():
    p4 = prom<V +>{
      ans1 = ld ans1;
      ans2 = force? ans1;
      checkMissing(ans2);
      return ans2;
    };
    p5 = prom<V +>{
      sort = ld sort;
      sort1 = force? sort;
      checkMissing(sort1);
      return sort1;
    };
    r11 = dyn lapply(p4, p5);
    check L17() else D6();
  D6():
    deopt 23 [r11];
  L17():
    st ans1 = r11;
    ans3 = ld ans1;
    check L18() else D7();
  D7():
    deopt 25 [ans3];
  L18():
    ans4 = force? ans3;
    checkMissing(ans4);
    c = `is.object`(ans4);
    if c then L19() else L20(ans4);
  L2(dx1):
    st ans1 = dx1;
    lapply1 = ldf lapply;
    check L24() else D10();
  L19():
    dr = tryDispatchBuiltin.1("[", ans4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(ans6):
    order = ldf order;
    check L22() else D8();
  D8():
    deopt 28 [ans6];
  D10():
    deopt 34 [];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L22():
    p6 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      ans7 = ld ans1;
      ans8 = force? ans7;
      checkMissing(ans8);
      names = ldf names in base;
      r14 = dyn names(ans8);
      goto L0(r14);
    L2():
      r12 = dyn base1(<sym ans1>);
      goto L0(r12);
    };
    r16 = dyn order(p6);
    check L23() else D9();
  L24():
    p7 = prom<V +>{
      ans9 = ld ans2;
      ans10 = force? ans9;
      checkMissing(ans10);
      return ans10;
    };
    p8 = prom<V +>{
      sort2 = ld sort;
      sort3 = force? sort2;
      checkMissing(sort3);
      return sort3;
    };
    r20 = dyn lapply1(p7, p8);
    check L25() else D11();
  D9():
    deopt 30 [ans6, r16];
  D11():
    deopt 37 [r20];
  L23():
    __ = ldf `[` in base;
    r17 = dyn __(ans6, r16);
    goto L2(r17);
  L25():
    st ans2 = r20;
    ans11 = ld ans2;
    check L26() else D12();
  D12():
    deopt 39 [ans11];
  L26():
    ans12 = force? ans11;
    checkMissing(ans12);
    c1 = `is.object`(ans12);
    if c1 then L27() else L28(ans12);
  L3(dx3):
    st ans2 = dx3;
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L27():
    dr2 = tryDispatchBuiltin.1("[", ans12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(dr2);
  L28(ans14):
    order1 = ldf order;
    check L30() else D13();
  D13():
    deopt 42 [ans14];
  L4(r28):
    r30 = `!`(r28);
    c2 = `as.logical`(r30);
    if c2 then L37() else L5();
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L30():
    p9 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      ans15 = ld ans2;
      ans16 = force? ans15;
      checkMissing(ans16);
      names1 = ldf names in base;
      r23 = dyn names1(ans16);
      goto L0(r23);
    L2():
      r21 = dyn base2(<sym ans2>);
      goto L0(r21);
    };
    r25 = dyn order1(p9);
    check L31() else D14();
  L32():
    ans17 = ld ans1;
    check L34() else D15();
  L33():
    r27 = dyn base3(<sym ans1>, <sym ans2>);
    goto L4(r27);
  D14():
    deopt 44 [ans14, r25];
  D15():
    deopt 49 [ans17];
  L5():
    goto L8();
  L8():
    l = ld out;
    class__ = ldf `class<-`;
    check L53() else D28();
  L31():
    __1 = ldf `[` in base;
    r26 = dyn __1(ans14, r25);
    goto L3(r26);
  L34():
    ans18 = force? ans17;
    checkMissing(ans18);
    ans19 = ld ans2;
    check L35() else D16();
  L37():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  D16():
    deopt 51 [ans19];
  D28():
    deopt 98 ["check_package_datalist", l, "check_package_datalist"];
  L6(r32):
    st nx1 = r32;
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L42() else L43();
  L35():
    ans20 = force? ans19;
    checkMissing(ans20);
    identical = ldf identical in base;
    r29 = dyn identical(ans18, ans20, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L36() else D17();
  L38():
    ans21 = ld ans1;
    check L40() else D18();
  L39():
    r31 = dyn base4(<sym ans1>);
    goto L6(r31);
  L53():
    r60 = dyn class__(l, NULL, "check_package_datalist");
    check L54() else D29();
  D17():
    deopt 61 [r29];
  D18():
    deopt 65 [ans21];
  D29():
    deopt 100 ["check_package_datalist", r60];
  L7(r35):
    st nx2 = r35;
    unlist = ldf unlist;
    check L46() else D22();
  L36():
    goto L4(r29);
  L40():
    ans22 = force? ans21;
    checkMissing(ans22);
    names2 = ldf names in base;
    r33 = dyn names2(ans22);
    check L41() else D19();
  L42():
    ans23 = ld ans2;
    check L44() else D20();
  L43():
    r34 = dyn base5(<sym ans2>);
    goto L7(r34);
  L54():
    st out = r60;
    out = ld out;
    check L55() else D30();
  D19():
    deopt 68 [r33];
  D20():
    deopt 72 [ans23];
  D22():
    deopt 78 [];
  D30():
    deopt 102 [out];
  L41():
    goto L6(r33);
  L44():
    ans24 = force? ans23;
    checkMissing(ans24);
    names3 = ldf names in base;
    r36 = dyn names3(ans24);
    check L45() else D21();
  L46():
    p10 = prom<V +>{
      ans25 = ld ans1;
      ans26 = force? ans25;
      checkMissing(ans26);
      return ans26;
    };
    r38 = dyn unlist(p10);
    check L47() else D23();
  L55():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D21():
    deopt 75 [r36];
  D23():
    deopt 80 [r38];
  L45():
    goto L7(r36);
  L47():
    st ex1 = r38;
    unlist1 = ldf unlist;
    check L48() else D24();
  D24():
    deopt 83 [];
  L48():
    p11 = prom<V +>{
      ans27 = ld ans2;
      ans28 = force? ans27;
      checkMissing(ans28);
      return ans28;
    };
    r40 = dyn unlist1(p11);
    check L49() else D25();
  D25():
    deopt 85 [r40];
  L49():
    st ex2 = r40;
    Filter = ldf Filter;
    check L50() else D26();
  D26():
    deopt 88 [];
  L50():
    p12 = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p21 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      setdiff = ldf setdiff;
      p13 = prom<V +>{
        nx1 = ld nx1;
        nx2 = force? nx1;
        checkMissing(nx2);
        return nx2;
      };
      p14 = prom<V +>{
        nx3 = ld nx2;
        nx4 = force? nx3;
        checkMissing(nx4);
        return nx4;
      };
      r46 = dyn setdiff(p13, p14);
      setdiff1 = ldf setdiff;
      p15 = prom<V +>{
        nx5 = ld nx2;
        nx6 = force? nx5;
        checkMissing(nx6);
        return nx6;
      };
      p16 = prom<V +>{
        nx7 = ld nx1;
        nx8 = force? nx7;
        checkMissing(nx8);
        return nx8;
      };
      r49 = dyn setdiff1(p15, p16);
      setdiff2 = ldf setdiff;
      p17 = prom<V +>{
        ex1 = ld ex1;
        ex2 = force? ex1;
        checkMissing(ex2);
        return ex2;
      };
      p18 = prom<V +>{
        ex3 = ld ex2;
        ex4 = force? ex3;
        checkMissing(ex4);
        return ex4;
      };
      r52 = dyn setdiff2(p17, p18);
      setdiff3 = ldf setdiff;
      p19 = prom<V +>{
        ex5 = ld ex2;
        ex6 = force? ex5;
        checkMissing(ex6);
        return ex6;
      };
      p20 = prom<V +>{
        ex7 = ld ex1;
        ex8 = force? ex7;
        checkMissing(ex8);
        return ex8;
      };
      r55 = dyn setdiff3(p19, p20);
      list1 = ldf list in base;
      r56 = dyn list1(r46, r49, r52, r55);
      goto L0(r56);
    L2():
      r42 = dyn base6[n12, n21, e12, e21](<lang setdiff(nx1, nx2)>, <lang setdiff(nx2, nx1)>, <lang setdiff(ex1, ex2)>, <lang setdiff(ex2, ex1)>);
      goto L0(r42);
    };
    r58 = dyn Filter(p12, p21);
    check L51() else D27();
  D27():
    deopt 91 [r58];
  L51():
    st out = r58;
    goto L8();
  }
}