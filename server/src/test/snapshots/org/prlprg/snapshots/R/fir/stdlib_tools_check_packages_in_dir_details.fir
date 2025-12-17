fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2014422191;
    st check_packages_in_dir_details = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2014422191(dir, logs, drop_ok, `...`) {
  (reg dir:*, reg logs:*, reg drop_ok:*, reg ddd:dots) -+> V { var dir:*, var logs:*, reg logs_isMissing:L, reg logs_orDefault:*, var drop_ok:*, reg drop_ok_isMissing:L, reg drop_ok_orDefault:*, var `...`:dots?, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg logs1:*, reg logs2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg dir1:*, reg dir2:V, reg inherits:cls, reg r5:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg dir3:*, reg dir4:V, reg attr:cls, reg r8:V, reg Sys_glob:cls, reg file_path:cls, reg dir5:*, reg dir6:V, reg p:p(V +), reg r11:V, reg p1:p(V +), reg r13:V, reg db_from_logs:cls, reg logs3:*, reg logs4:V, reg p2:p(V +), reg drop_ok1:*, reg drop_ok2:V, reg p3:p(V +), reg ddd1:dots?, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg c3:cls, reg r20:V, reg l:*, reg colnames__:cls, reg r21:V, reg db:*, reg db1:V, reg c4:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r22:V, reg sub:cls, reg sprintf:cls, reg lqa:*, reg lqa1:V, reg p4:p(V +), reg rqa:*, reg rqa1:V, reg p5:p(V +), reg r25:V, reg p6:p(V +), reg checks:*, reg checks1:V, reg p7:p(V +), reg r28:V, reg sub1:cls, reg checks2:*, reg checks3:V, reg p8:p(V +), reg r30:V, reg sub2:cls, reg checks4:*, reg checks5:V, reg p9:p(V +), reg r32:V, reg sub3:cls, reg checks6:*, reg checks7:V, reg p10:p(V +), reg r34:V, reg sub4:cls, reg sprintf1:cls, reg lqa2:*, reg lqa3:V, reg p11:p(V +), reg rqa2:*, reg rqa3:V, reg p12:p(V +), reg r37:V, reg p13:p(V +), reg checks8:*, reg checks9:V, reg p14:p(V +), reg r40:V, reg sub5:cls, reg checks10:*, reg checks11:V, reg p15:p(V +), reg r42:V, reg checks12:*, reg checks13:V, reg l1:*, reg c5:L, reg checks15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r43:V, reg sub6:cls, reg db4:*, reg db5:V, reg c6:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r44:V, reg p16:p(V +), reg r46:V, reg l4:*, reg c7:L, reg r48:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ___1:cls, reg r51:V, reg as_data_frame:cls, reg db8:*, reg db9:V, reg p17:p(V +), reg r53:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg r55:V, reg c8:cls, reg r56:V, reg l7:*, reg class__:cls, reg r57:V, reg db10:*, reg db11:V |
    mkenv;
    st dir = dir;
    logs_isMissing = missing.0(logs);
    if logs_isMissing then L0(NULL) else L0(logs);
  L0(logs_orDefault):
    st logs = logs_orDefault;
    drop_ok_isMissing = missing.0(drop_ok);
    if drop_ok_isMissing then L1(TRUE) else L1(drop_ok);
  L1(drop_ok_orDefault):
    st drop_ok = drop_ok_orDefault;
    st `...` = ddd;
    r = clos inner4049406097;
    st db_from_logs = r;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L2(r2):
    c1 = `as.logical`(r2);
    if c1 then L17() else L3();
  L14():
    logs1 = ld logs;
    check L16() else D0();
  L15():
    r1 = dyn base(<sym logs>);
    goto L2(r1);
  D0():
    deopt 4 [logs1];
  L3():
    goto L8();
  L8():
    db_from_logs = ldf db_from_logs;
    check L31() else D7();
  L16():
    logs2 = force? logs1;
    checkMissing(logs2);
    c = `==`(logs2, NULL);
    goto L2(c);
  L17():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  D7():
    deopt 33 [];
  L4(r4):
    c2 = `as.logical`(r4);
    if c2 then L22() else L5();
  L18():
    dir1 = ld dir;
    check L20() else D1();
  L19():
    r3 = dyn base1(<sym dir>, "check_packages_in_dir");
    goto L4(r3);
  L31():
    p2 = prom<V +>{
      logs3 = ld logs;
      logs4 = force? logs3;
      checkMissing(logs4);
      return logs4;
    };
    p3 = prom<V +>{
      drop_ok1 = ld drop_ok;
      drop_ok2 = force? drop_ok1;
      checkMissing(drop_ok2);
      return drop_ok2;
    };
    ddd1 = ld `...`;
    r17 = dyn db_from_logs[, , `...`](p2, p3, ddd1);
    check L32() else D8();
  D1():
    deopt 9 [dir1];
  D8():
    deopt 37 [r17];
  L5():
    goto L7();
  L7():
    Sys_glob = ldf `Sys.glob`;
    check L28() else D5();
  L20():
    dir2 = force? dir1;
    checkMissing(dir2);
    inherits = ldf inherits in base;
    r5 = dyn inherits(dir2, "check_packages_in_dir", FALSE);
    check L21() else D2();
  L22():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L32():
    st db = r17;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  D2():
    deopt 14 [r5];
  D5():
    deopt 26 [];
  L6(r7):
    st dir = r7;
    goto L7();
  L9(r19):
    l = ld db;
    colnames__ = ldf `colnames<-`;
    check L36() else D10();
  L21():
    goto L4(r5);
  L23():
    dir3 = ld dir;
    check L25() else D3();
  L24():
    r6 = dyn base2(<sym dir>, "dir");
    goto L6(r6);
  L28():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r11 = dyn file_path(p, "*.Rcheck", "00check.log");
      return r11;
    };
    r13 = dyn Sys_glob(p1);
    check L29() else D6();
  L33():
    c3 = ldf c in base;
    r20 = dyn c3("Package", "Version", "Check", "Status", "Output", "Flags");
    check L35() else D9();
  L34():
    r18 = dyn base3("Package", "Version", "Check", "Status", "Output", "Flags");
    goto L9(r18);
  D3():
    deopt 17 [dir3];
  D6():
    deopt 28 [r13];
  D9():
    deopt 48 [r20];
  D10():
    deopt 50 [r19, l, r19];
  L25():
    dir4 = force? dir3;
    checkMissing(dir4);
    attr = ldf attr in base;
    r8 = dyn attr(dir4, "dir");
    check L26() else D4();
  L29():
    st logs = r13;
    goto L8();
  L35():
    goto L9(r20);
  L36():
    r21 = dyn colnames__(l, NULL, r19);
    check L37() else D11();
  D4():
    deopt 21 [r8];
  D11():
    deopt 52 [r19, r21];
  L26():
    goto L6(r8);
  L37():
    st db = r21;
    st lqa = "'|\u2018";
    st rqa = "'|\u2019";
    db = ld db;
    check L38() else D12();
  D12():
    deopt 60 [db];
  L38():
    db1 = force? db;
    checkMissing(db1);
    c4 = `is.object`(db1);
    if c4 then L39() else L40();
  L10(dx1):
    st checks = dx1;
    sub = ldf sub;
    check L42() else D13();
  L39():
    dr = tryDispatchBuiltin.1("[", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L41() else L40();
  L40():
    __ = ldf `[` in base;
    r22 = dyn __(db1, <missing>, "Check");
    goto L10(r22);
  D13():
    deopt 68 [];
  L41():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L42():
    p6 = prom<V +>{
      sprintf = ldf sprintf;
      p4 = prom<V +>{
        lqa = ld lqa;
        lqa1 = force? lqa;
        checkMissing(lqa1);
        return lqa1;
      };
      p5 = prom<V +>{
        rqa = ld rqa;
        rqa1 = force? rqa;
        checkMissing(rqa1);
        return rqa1;
      };
      r25 = dyn sprintf("checking whether package (%s).*(%s) can be installed", p4, p5);
      return r25;
    };
    p7 = prom<V +>{
      checks = ld checks;
      checks1 = force? checks;
      checkMissing(checks1);
      return checks1;
    };
    r28 = dyn sub[, , , perl](p6, "checking whether package can be installed", p7, TRUE);
    check L43() else D14();
  D14():
    deopt 74 [r28];
  L43():
    st checks = r28;
    sub1 = ldf sub;
    check L44() else D15();
  D15():
    deopt 77 [];
  L44():
    p8 = prom<V +>{
      checks2 = ld checks;
      checks3 = force? checks2;
      checkMissing(checks3);
      return checks3;
    };
    r30 = dyn sub1[, , , perl]("creating .*-Ex.R", "checking examples creation", p8, TRUE);
    check L45() else D16();
  D16():
    deopt 83 [r30];
  L45():
    st checks = r30;
    sub2 = ldf sub;
    check L46() else D17();
  D17():
    deopt 86 [];
  L46():
    p9 = prom<V +>{
      checks4 = ld checks;
      checks5 = force? checks4;
      checkMissing(checks5);
      return checks5;
    };
    r32 = dyn sub2[, , , perl]("creating .*-manual\\.tex", "checking manual creation", p9, TRUE);
    check L47() else D18();
  D18():
    deopt 92 [r32];
  L47():
    st checks = r32;
    sub3 = ldf sub;
    check L48() else D19();
  D19():
    deopt 95 [];
  L48():
    p10 = prom<V +>{
      checks6 = ld checks;
      checks7 = force? checks6;
      checkMissing(checks7);
      return checks7;
    };
    r34 = dyn sub3[, , , perl]("checking .*-manual\\.tex", "checking manual", p10, TRUE);
    check L49() else D20();
  D20():
    deopt 101 [r34];
  L49():
    st checks = r34;
    sub4 = ldf sub;
    check L50() else D21();
  D21():
    deopt 104 [];
  L50():
    p13 = prom<V +>{
      sprintf1 = ldf sprintf;
      p11 = prom<V +>{
        lqa2 = ld lqa;
        lqa3 = force? lqa2;
        checkMissing(lqa3);
        return lqa3;
      };
      p12 = prom<V +>{
        rqa2 = ld rqa;
        rqa3 = force? rqa2;
        checkMissing(rqa3);
        return rqa3;
      };
      r37 = dyn sprintf1("checking package vignettes in (%s)inst/doc(%s)", p11, p12);
      return r37;
    };
    p14 = prom<V +>{
      checks8 = ld checks;
      checks9 = force? checks8;
      checkMissing(checks9);
      return checks9;
    };
    r40 = dyn sub4[, , , perl](p13, "checking package vignettes", p14, TRUE);
    check L51() else D22();
  D22():
    deopt 110 [r40];
  L51():
    st checks = r40;
    sub5 = ldf sub;
    check L52() else D23();
  D23():
    deopt 113 [];
  L52():
    p15 = prom<V +>{
      checks10 = ld checks;
      checks11 = force? checks10;
      checkMissing(checks11);
      return checks11;
    };
    r42 = dyn sub5[, , , perl]("^checking *", "", p15, TRUE);
    check L53() else D24();
  D24():
    deopt 119 [r42];
  L53():
    st checks = r42;
    checks12 = ld checks;
    check L54() else D25();
  D25():
    deopt 121 [checks12];
  L54():
    checks13 = force? checks12;
    checkMissing(checks13);
    l1 = ld db;
    c5 = `is.object`(l1);
    if c5 then L55() else L56(checks13);
  L11(dx3):
    st db = dx3;
    sub6 = ldf sub;
    check L58() else D26();
  L55():
    dr2 = tryDispatchBuiltin.0("[<-", l1, checks13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(checks13);
  L56(checks15):
    ___ = ldf `[<-` in base;
    r43 = dyn ___(l1, <missing>, "Check", checks13);
    goto L11(r43);
  D26():
    deopt 130 [];
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L58():
    p16 = prom<V +>{
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      c6 = `is.object`(db5);
      if c6 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", db5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r44 = dyn __1(db5, <missing>, "Output");
      goto L0(r44);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r46 = dyn sub6[, , , perl]("[[:space:]]+$", "", p16, TRUE);
    check L59() else D27();
  D27():
    deopt 136 [r46];
  L59():
    l4 = ld db;
    c7 = `is.object`(l4);
    if c7 then L60() else L61(r46);
  L12(dx7):
    st db = dx7;
    as_data_frame = ldf `as.data.frame`;
    check L63() else D28();
  L60():
    dr6 = tryDispatchBuiltin.0("[<-", l4, r46);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L62() else L61(r46);
  L61(r48):
    ___1 = ldf `[<-` in base;
    r51 = dyn ___1(l4, <missing>, "Output", r46);
    goto L12(r51);
  D28():
    deopt 144 [];
  L62():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L63():
    p17 = prom<V +>{
      db8 = ld db;
      db9 = force? db8;
      checkMissing(db9);
      return db9;
    };
    r53 = dyn as_data_frame[, stringsAsFactors](p17, FALSE);
    check L64() else D29();
  D29():
    deopt 148 [r53];
  L64():
    st db = r53;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  L13(r55):
    l7 = ld db;
    class__ = ldf `class<-`;
    check L68() else D31();
  L65():
    c8 = ldf c in base;
    r56 = dyn c8("check_details", "data.frame");
    check L67() else D30();
  L66():
    r54 = dyn base4("check_details", "data.frame");
    goto L13(r54);
  D30():
    deopt 155 [r56];
  D31():
    deopt 157 [r55, l7, r55];
  L67():
    goto L13(r56);
  L68():
    r57 = dyn class__(l7, NULL, r55);
    check L69() else D32();
  D32():
    deopt 159 [r55, r57];
  L69():
    st db = r57;
    db10 = ld db;
    check L70() else D33();
  D33():
    deopt 161 [db10];
  L70():
    db11 = force? db10;
    checkMissing(db11);
    popenv;
    return db11;
  }
}
fun inner4049406097(logs, drop_ok, `...`) {
  (reg logs:*, reg drop_ok:*, reg ddd:dots) -+> V { var logs:*, var drop_ok:*, var `...`:dots?, reg lapply:cls, reg logs1:*, reg logs2:V, reg p:p(V +), reg analyze_check_log:*, reg analyze_check_log1:V, reg p1:p(V +), reg drop_ok1:*, reg drop_ok2:V, reg p2:p(V +), reg ddd1:dots?, reg r3:V, reg out:*, reg out1:V, reg c:L, reg out3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg lengths:cls, reg out4:*, reg out5:V, reg p3:p(V +), reg r5:V, reg r6:V, reg __:cls, reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg out6:*, reg out7:V, reg length:cls, reg r10:V, reg r11:V, reg c1:L, reg matrix:cls, reg character:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg lapply1:cls, reg out8:*, reg out9:V, reg p5:p(V +), reg __1:*, reg __2:V, reg p6:p(V +), reg r19:V, reg vapply:cls, reg out10:*, reg out11:V, reg p7:p(V +), reg __3:*, reg __4:V, reg p8:p(V +), reg r22:V, reg lengths1:cls, reg chunks:*, reg chunks1:V, reg p9:p(V +), reg r24:V, reg cbind:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg package:*, reg package1:V, reg lens:*, reg lens1:V, reg rep_int:cls, reg r27:V, reg p10:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg vapply1:cls, reg out12:*, reg out13:V, reg p11:p(V +), reg __5:*, reg __6:V, reg p12:p(V +), reg r33:V, reg lens2:*, reg lens3:V, reg rep_int1:cls, reg r34:V, reg p13:p(V +), reg matrix1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg unlist:cls, reg chunks2:*, reg chunks3:V, reg p14:p(V +), reg r39:V, reg as_character:cls, reg r40:V, reg p15:p(V +), reg r42:V, reg p16:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg vapply2:cls, reg out14:*, reg out15:V, reg p17:p(V +), reg __7:*, reg __8:V, reg p18:p(V +), reg r48:V, reg lens4:*, reg lens5:V, reg rep_int2:cls, reg r49:V, reg p19:p(V +), reg r51:V |
    mkenv;
    st logs = logs;
    st drop_ok = drop_ok;
    st `...` = ddd;
    lapply = ldf lapply;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      logs1 = ld logs;
      logs2 = force? logs1;
      checkMissing(logs2);
      return logs2;
    };
    p1 = prom<V +>{
      analyze_check_log = ld analyze_check_log;
      analyze_check_log1 = force? analyze_check_log;
      checkMissing(analyze_check_log1);
      return analyze_check_log1;
    };
    p2 = prom<V +>{
      drop_ok1 = ld drop_ok;
      drop_ok2 = force? drop_ok1;
      checkMissing(drop_ok2);
      return drop_ok2;
    };
    ddd1 = ld `...`;
    r3 = dyn lapply[, , , `...`](p, p1, p2, ddd1);
    check L5() else D1();
  D1():
    deopt 6 [r3];
  L5():
    st out = r3;
    out = ld out;
    check L6() else D2();
  D2():
    deopt 8 [out];
  L6():
    out1 = force? out;
    checkMissing(out1);
    c = `is.object`(out1);
    if c then L7() else L8(out1);
  L0(dx1):
    st out = dx1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L7():
    dr = tryDispatchBuiltin.1("[", out1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(out3):
    lengths = ldf lengths;
    check L10() else D3();
  D3():
    deopt 11 [out3];
  L1(r9):
    r11 = `!`(r9);
    c1 = `as.logical`(r11);
    if c1 then L16() else L2();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L10():
    p3 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    r5 = dyn lengths(p3);
    check L11() else D4();
  L12():
    out6 = ld out;
    check L14() else D5();
  L13():
    r8 = dyn base(<sym out>);
    goto L1(r8);
  D4():
    deopt 13 [out3, r5];
  D5():
    deopt 20 [out6];
  L2():
    lapply1 = ldf lapply;
    check L21() else D9();
  L11():
    r6 = `>`(r5, 0);
    __ = ldf `[` in base;
    r7 = dyn __(out3, r6);
    goto L0(r7);
  L14():
    out7 = force? out6;
    checkMissing(out7);
    length = ldf length in base;
    r10 = dyn length(out7);
    check L15() else D6();
  L16():
    matrix = ldf matrix;
    check L17() else D7();
  D6():
    deopt 23 [r10];
  D7():
    deopt 26 [];
  D9():
    deopt 35 [];
  L15():
    goto L1(r10);
  L17():
    p4 = prom<V +>{
      character = ldf character;
      r12 = dyn character();
      return r12;
    };
    r14 = dyn matrix[, ncol](p4, 6);
    check L18() else D8();
  L21():
    p5 = prom<V +>{
      out8 = ld out;
      out9 = force? out8;
      checkMissing(out9);
      return out9;
    };
    p6 = prom<V +>{
      __1 = ld `[[`;
      __2 = force? __1;
      checkMissing(__2);
      return __2;
    };
    r19 = dyn lapply1(p5, p6, "Chunks");
    check L22() else D10();
  D8():
    deopt 30 [r14];
  D10():
    deopt 39 [r19];
  L18():
    popenv;
    return r14;
  L22():
    st chunks = r19;
    vapply = ldf vapply;
    check L23() else D11();
  D11():
    deopt 42 [];
  L23():
    p7 = prom<V +>{
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      return out11;
    };
    p8 = prom<V +>{
      __3 = ld `[[`;
      __4 = force? __3;
      checkMissing(__4);
      return __4;
    };
    r22 = dyn vapply(p7, p8, "", "Package");
    check L24() else D12();
  D12():
    deopt 47 [r22];
  L24():
    st package = r22;
    lengths1 = ldf lengths;
    check L25() else D13();
  D13():
    deopt 50 [];
  L25():
    p9 = prom<V +>{
      chunks = ld chunks;
      chunks1 = force? chunks;
      checkMissing(chunks1);
      return chunks1;
    };
    r24 = dyn lengths1(p9);
    check L26() else D14();
  D14():
    deopt 52 [r24];
  L26():
    st lens = r24;
    cbind = ldf cbind;
    check L27() else D15();
  D15():
    deopt 55 [];
  L27():
    p10 = prom<V +>{
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      package = ld package;
      package1 = force? package;
      checkMissing(package1);
      lens = ld lens;
      lens1 = force? lens;
      checkMissing(lens1);
      rep_int = ldf `rep.int` in base;
      r27 = dyn rep_int(package1, lens1);
      goto L0(r27);
    L2():
      r25 = dyn base1(<sym package>, <sym lens>);
      goto L0(r25);
    };
    p13 = prom<V +>{
      sym2 = ldf `rep.int`;
      base2 = ldf `rep.int` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      vapply1 = ldf vapply;
      p11 = prom<V +>{
        out12 = ld out;
        out13 = force? out12;
        checkMissing(out13);
        return out13;
      };
      p12 = prom<V +>{
        __5 = ld `[[`;
        __6 = force? __5;
        checkMissing(__6);
        return __6;
      };
      r33 = dyn vapply1(p11, p12, "", "Version");
      lens2 = ld lens;
      lens3 = force? lens2;
      checkMissing(lens3);
      rep_int1 = ldf `rep.int` in base;
      r34 = dyn rep_int1(r33, lens3);
      goto L0(r34);
    L2():
      r29 = dyn base2(<lang vapply(out, `[[`, "", "Version")>, <sym lens>);
      goto L0(r29);
    };
    p16 = prom<V +>{
      matrix1 = ldf matrix;
      p15 = prom<V +>{
        sym3 = ldf `as.character`;
        base3 = ldf `as.character` in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r37):
        return r37;
      L1():
        unlist = ldf unlist;
        p14 = prom<V +>{
          chunks2 = ld chunks;
          chunks3 = force? chunks2;
          checkMissing(chunks3);
          return chunks3;
        };
        r39 = dyn unlist(p14);
        as_character = ldf `as.character` in base;
        r40 = dyn as_character(r39);
        goto L0(r40);
      L2():
        r36 = dyn base3(<lang unlist(chunks)>);
        goto L0(r36);
      };
      r42 = dyn matrix1[, ncol, byrow](p15, 3, TRUE);
      return r42;
    };
    p19 = prom<V +>{
      sym4 = ldf `rep.int`;
      base4 = ldf `rep.int` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      vapply2 = ldf vapply;
      p17 = prom<V +>{
        out14 = ld out;
        out15 = force? out14;
        checkMissing(out15);
        return out15;
      };
      p18 = prom<V +>{
        __7 = ld `[[`;
        __8 = force? __7;
        checkMissing(__8);
        return __8;
      };
      r48 = dyn vapply2(p17, p18, "", "Flags");
      lens4 = ld lens;
      lens5 = force? lens4;
      checkMissing(lens5);
      rep_int2 = ldf `rep.int` in base;
      r49 = dyn rep_int2(r48, lens5);
      goto L0(r49);
    L2():
      r44 = dyn base4(<lang vapply(out, `[[`, "", "Flags")>, <sym lens>);
      goto L0(r44);
    };
    r51 = dyn cbind(p10, p13, p16, p19);
    check L28() else D16();
  D16():
    deopt 60 [r51];
  L28():
    popenv;
    return r51;
  }
}