fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1948108262;
    st summarize_check_packages_in_dir_results = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1948108262(dir, all, full, `...`) {
  (reg dir:*, reg all:*, reg full:*, reg ddd:dots) -+> V { var dir:*, var all:*, reg all_isMissing:L, reg all_orDefault:*, var full:*, reg full_isMissing:L, reg full_orDefault:*, var `...`:dots?, reg normalizePath:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg R_check_outdirs:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg all1:*, reg all2:V, reg p2:p(V +), reg r4:V, reg file_path:cls, reg outdirs:*, reg outdirs1:V, reg p3:p(V +), reg r6:V, reg logs:*, reg logs1:V, reg c:L, reg logs3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg file_test:cls, reg logs4:*, reg logs5:V, reg p4:p(V +), reg r8:V, reg __:cls, reg r9:V, reg check_packages_in_dir_results:cls, reg logs6:*, reg logs7:V, reg p5:p(V +), reg ddd1:dots?, reg r11:V, reg writeLines:cls, reg r12:V, reg check_packages_in_dir_results_summary:cls, reg results:*, reg results1:V, reg p6:p(V +), reg r14:V, reg paste0:cls, reg rownames:cls, reg tab:*, reg tab1:V, reg p7:p(V +), reg r16:V, reg p8:p(V +), reg r18:V, reg l:*, reg rownames__:cls, reg r19:V, reg print:cls, reg tab2:*, reg tab3:V, reg p9:p(V +), reg r21:V, reg writeLines1:cls, reg r22:V, reg writeLines2:cls, reg r23:V, reg Map:cls, reg r24:cls, reg p10:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r26:V, reg r27:V, reg results2:*, reg results3:V, reg names:cls, reg r28:V, reg p11:p(V +), reg results4:*, reg results5:V, reg p12:p(V +), reg r31:V, reg full1:*, reg full2:V, reg c1:L, reg c3:V, reg all3:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r32:V, reg r33:V, reg unlist:cls, reg lapply:cls, reg results6:*, reg results7:V, reg p13:p(V +), reg __1:*, reg __2:V, reg p14:p(V +), reg r36:V, reg p15:p(V +), reg r38:V, reg as_character:cls, reg r39:V, reg r40:V, reg p16:p(V +), reg r42:V, reg r43:V, reg c4:L, reg c5:V, reg c7:L, reg writeLines3:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r44:V, reg r45:V, reg c8:cls, reg r46:V, reg p17:p(V +), reg r48:V, reg check_packages_in_dir_details:cls, reg logs8:*, reg logs9:V, reg p18:p(V +), reg ddd2:dots?, reg r50:V, reg writeLines4:cls, reg paste1:cls, reg format:cls, reg details:*, reg details1:V, reg p19:p(V +), reg r52:V, reg p20:p(V +), reg r54:V, reg p21:p(V +), reg r56:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r57:V, reg r58:V, reg invisible:cls, reg r59:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r60:V, reg r61:V, reg invisible1:cls, reg r62:V |
    mkenv;
    st dir = dir;
    all_isMissing = missing.0(all);
    if all_isMissing then L0(TRUE) else L0(all);
  L0(all_orDefault):
    st all = all_orDefault;
    full_isMissing = missing.0(full);
    if full_isMissing then L1(FALSE) else L1(full);
  L1(full_orDefault):
    st full = full_orDefault;
    st `...` = ddd;
    normalizePath = ldf normalizePath;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn normalizePath(p);
    check L8() else D1();
  D1():
    deopt 3 [r1];
  L8():
    st dir = r1;
    R_check_outdirs = ldf R_check_outdirs;
    check L9() else D2();
  D2():
    deopt 6 [];
  L9():
    p1 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p2 = prom<V +>{
      all1 = ld all;
      all2 = force? all1;
      checkMissing(all2);
      return all2;
    };
    r4 = dyn R_check_outdirs[, all](p1, p2);
    check L10() else D3();
  D3():
    deopt 10 [r4];
  L10():
    st outdirs = r4;
    file_path = ldf `file.path`;
    check L11() else D4();
  D4():
    deopt 13 [];
  L11():
    p3 = prom<V +>{
      outdirs = ld outdirs;
      outdirs1 = force? outdirs;
      checkMissing(outdirs1);
      return outdirs1;
    };
    r6 = dyn file_path(p3, "00check.log");
    check L12() else D5();
  D5():
    deopt 16 [r6];
  L12():
    st logs = r6;
    logs = ld logs;
    check L13() else D6();
  D6():
    deopt 18 [logs];
  L13():
    logs1 = force? logs;
    checkMissing(logs1);
    c = `is.object`(logs1);
    if c then L14() else L15(logs1);
  L2(dx1):
    st logs = dx1;
    check_packages_in_dir_results = ldf check_packages_in_dir_results;
    check L19() else D9();
  L14():
    dr = tryDispatchBuiltin.1("[", logs1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(logs3):
    file_test = ldf file_test;
    check L17() else D7();
  D7():
    deopt 21 [logs3];
  D9():
    deopt 28 [];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L17():
    p4 = prom<V +>{
      logs4 = ld logs;
      logs5 = force? logs4;
      checkMissing(logs5);
      return logs5;
    };
    r8 = dyn file_test("-f", p4);
    check L18() else D8();
  L19():
    p5 = prom<V +>{
      logs6 = ld logs;
      logs7 = force? logs6;
      checkMissing(logs7);
      return logs7;
    };
    ddd1 = ld `...`;
    r11 = dyn check_packages_in_dir_results[logs, `...`](p5, ddd1);
    check L20() else D10();
  D8():
    deopt 24 [logs3, r8];
  D10():
    deopt 32 [r11];
  L18():
    __ = ldf `[` in base;
    r9 = dyn __(logs3, r8);
    goto L2(r9);
  L20():
    st results = r11;
    writeLines = ldf writeLines;
    check L21() else D11();
  D11():
    deopt 35 [];
  L21():
    r12 = dyn writeLines("Check status summary:");
    check L22() else D12();
  D12():
    deopt 37 [r12];
  L22():
    check_packages_in_dir_results_summary = ldf check_packages_in_dir_results_summary;
    check L23() else D13();
  D13():
    deopt 39 [];
  L23():
    p6 = prom<V +>{
      results = ld results;
      results1 = force? results;
      checkMissing(results1);
      return results1;
    };
    r14 = dyn check_packages_in_dir_results_summary(p6);
    check L24() else D14();
  D14():
    deopt 41 [r14];
  L24():
    st tab = r14;
    paste0 = ldf paste0;
    check L25() else D15();
  D15():
    deopt 44 [];
  L25():
    p8 = prom<V +>{
      rownames = ldf rownames;
      p7 = prom<V +>{
        tab = ld tab;
        tab1 = force? tab;
        checkMissing(tab1);
        return tab1;
      };
      r16 = dyn rownames(p7);
      return r16;
    };
    r18 = dyn paste0("  ", p8);
    check L26() else D16();
  D16():
    deopt 47 [r18];
  L26():
    l = ld tab;
    rownames__ = ldf `rownames<-`;
    check L27() else D17();
  D17():
    deopt 49 [r18, l, r18];
  L27():
    r19 = dyn rownames__(l, NULL, r18);
    check L28() else D18();
  D18():
    deopt 51 [r18, r19];
  L28():
    st tab = r19;
    print = ldf print;
    check L29() else D19();
  D19():
    deopt 54 [];
  L29():
    p9 = prom<V +>{
      tab2 = ld tab;
      tab3 = force? tab2;
      checkMissing(tab3);
      return tab3;
    };
    r21 = dyn print(p9);
    check L30() else D20();
  D20():
    deopt 56 [r21];
  L30():
    writeLines1 = ldf writeLines;
    check L31() else D21();
  D21():
    deopt 58 [];
  L31():
    r22 = dyn writeLines1("");
    check L32() else D22();
  D22():
    deopt 60 [r22];
  L32():
    writeLines2 = ldf writeLines;
    check L33() else D23();
  D23():
    deopt 62 [];
  L33():
    r23 = dyn writeLines2("Check results summary:");
    check L34() else D24();
  D24():
    deopt 64 [r23];
  L34():
    Map = ldf Map;
    check L35() else D25();
  D25():
    deopt 66 [];
  L35():
    p10 = prom<V +>{
      r24 = clos inner1812223662;
      return r24;
    };
    p11 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r27):
      return r27;
    L1():
      results2 = ld results;
      results3 = force? results2;
      checkMissing(results3);
      names = ldf names in base;
      r28 = dyn names(results3);
      goto L0(r28);
    L2():
      r26 = dyn base(<sym results>);
      goto L0(r26);
    };
    p12 = prom<V +>{
      results4 = ld results;
      results5 = force? results4;
      checkMissing(results5);
      return results5;
    };
    r31 = dyn Map(p10, p11, p12);
    check L36() else D26();
  D26():
    deopt 70 [r31];
  L36():
    full1 = ld full;
    check L37() else D27();
  D27():
    deopt 71 [full1];
  L37():
    full2 = force? full1;
    checkMissing(full2);
    c1 = `as.logical`(full2);
    if c1 then L38() else L3(c1);
  L3(c3):
    c7 = `as.logical`(c3);
    if c7 then L42() else L4();
  L38():
    all3 = ldf all;
    check L39() else D28();
  D28():
    deopt 74 [c1];
  L4():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L39():
    p16 = prom<V +>{
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r33):
      r40 = `==`(r33, "OK");
      return r40;
    L1():
      unlist = ldf unlist;
      p15 = prom<V +>{
        lapply = ldf lapply;
        p13 = prom<V +>{
          results6 = ld results;
          results7 = force? results6;
          checkMissing(results7);
          return results7;
        };
        p14 = prom<V +>{
          __1 = ld `[[`;
          __2 = force? __1;
          checkMissing(__2);
          return __2;
        };
        r36 = dyn lapply(p13, p14, "status");
        return r36;
      };
      r38 = dyn unlist(p15);
      as_character = ldf `as.character` in base;
      r39 = dyn as_character(r38);
      goto L0(r39);
    L2():
      r32 = dyn base1(<lang unlist(lapply(results, `[[`, "status"))>);
      goto L0(r32);
    };
    r42 = dyn all3(p16);
    check L40() else D29();
  L42():
    writeLines3 = ldf writeLines;
    check L43() else D30();
  D29():
    deopt 76 [c1, r42];
  D30():
    deopt 80 [];
  L6(r61):
    popenv;
    return r61;
  L40():
    r43 = `!`(r42);
    c4 = `as.logical`(r43);
    c5 = `&&`(c1, c4);
    goto L3(c5);
  L43():
    p17 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      c8 = ldf c in base;
      r46 = dyn c8("", "Check results details:");
      goto L0(r46);
    L2():
      r44 = dyn base2("", "Check results details:");
      goto L0(r44);
    };
    r48 = dyn writeLines3(p17);
    check L44() else D31();
  L53():
    invisible1 = ldf invisible in base;
    r62 = dyn invisible1(FALSE);
    check L55() else D37();
  L54():
    r60 = dyn base4(FALSE);
    goto L6(r60);
  D31():
    deopt 82 [r48];
  D37():
    deopt 103 [r62];
  L44():
    check_packages_in_dir_details = ldf check_packages_in_dir_details;
    check L45() else D32();
  L55():
    goto L6(r62);
  D32():
    deopt 84 [];
  L45():
    p18 = prom<V +>{
      logs8 = ld logs;
      logs9 = force? logs8;
      checkMissing(logs9);
      return logs9;
    };
    ddd2 = ld `...`;
    r50 = dyn check_packages_in_dir_details[logs, `...`](p18, ddd2);
    check L46() else D33();
  D33():
    deopt 88 [r50];
  L46():
    st details = r50;
    writeLines4 = ldf writeLines;
    check L47() else D34();
  D34():
    deopt 91 [];
  L47():
    p21 = prom<V +>{
      paste1 = ldf paste;
      p20 = prom<V +>{
        format = ldf format;
        p19 = prom<V +>{
          details = ld details;
          details1 = force? details;
          checkMissing(details1);
          return details1;
        };
        r52 = dyn format(p19);
        return r52;
      };
      r54 = dyn paste1[, collapse](p20, "\n\n");
      return r54;
    };
    r56 = dyn writeLines4(p21);
    check L48() else D35();
  D35():
    deopt 93 [r56];
  L48():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L5(r58):
    popenv;
    return r58;
  L49():
    invisible = ldf invisible in base;
    r59 = dyn invisible(TRUE);
    check L51() else D36();
  L50():
    r57 = dyn base3(TRUE);
    goto L5(r57);
  D36():
    deopt 98 [r59];
  L51():
    goto L5(r59);
  }
}
fun inner1812223662(p, r) {
  (reg p:*, reg r:*) -+> V { var p:*, var r:*, reg writeLines:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sprintf:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r4:*, reg r5:V, reg c:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg p4:p(V +), reg r10:V, reg r11:*, reg r12:V, reg c1:L, reg r14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg c2:cls, reg r16:V, reg p5:p(V +), reg r18:V |
    mkenv;
    st p = p;
    st r = r;
    writeLines = ldf writeLines;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p5 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        p1 = ld p;
        p2 = force? p1;
        checkMissing(p2);
        return p2;
      };
      p4 = prom<V +>{
        r4 = ld r;
        r5 = force? r4;
        checkMissing(r5);
        c = `is.object`(r5);
        if c then L1() else L2(r5);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", r5);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(r7):
        r8 = `$`(r7, <sym status>);
        goto L0(r8);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r10 = dyn sprintf("%s ... %s", p3, p4);
      r11 = ld r;
      r12 = force? r11;
      checkMissing(r12);
      c1 = `is.object`(r12);
      if c1 then L4() else L5(r12);
    L2():
      r1 = dyn base(<lang sprintf("%s ... %s", p, `$`(r, status))>, <lang `$`(r, lines)>);
      goto L0(r1);
    L3(dx3):
      c2 = ldf c in base;
      r16 = dyn c2(r10, dx3);
      goto L0(r16);
    L4():
      dr2 = tryDispatchBuiltin.1("$", r12);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(r14):
      r15 = `$`(r14, <sym lines>);
      goto L3(r15);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    r18 = dyn writeLines(p5);
    check L1() else D1();
  D1():
    deopt 3 [r18];
  L1():
    popenv;
    return r18;
  }
}