fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2834544687;
    st summarize_check_packages_in_dir_timings = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2834544687(dir, all, full) {
  (reg dir:*, reg all:*, reg full:*) -+> V { var dir:*, var all:*, reg all_isMissing:L, reg all_orDefault:*, var full:*, reg full_isMissing:L, reg full_orDefault:*, reg normalizePath:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r3:V, reg file_test:cls, reg tfile:*, reg tfile1:V, reg p2:p(V +), reg r5:V, reg c:L, reg __:cls, reg r6:V, reg r7:cls, reg tfile2:*, reg tfile3:V, reg p3:p(V +), reg r9:V, reg all1:*, reg all2:V, reg r10:V, reg c1:L, reg Sys_glob:cls, reg file_path1:cls, reg dir5:*, reg dir6:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg timings:*, reg timings1:V, reg c2:L, reg timings3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg timings9:V, reg r18:V, reg rownames:cls, reg timings10:*, reg timings11:V, reg p6:p(V +), reg r20:V, reg sub:cls, reg basename:cls, reg rdepends:*, reg rdepends1:V, reg p7:p(V +), reg r22:V, reg p8:p(V +), reg r24:V, reg match:cls, reg r25:V, reg is_na:cls, reg r26:V, reg __1:cls, reg r27:V, reg print:cls, reg timings12:*, reg timings13:V, reg p9:p(V +), reg r29:V, reg full1:*, reg full2:V, reg c3:L, reg Sys_glob1:cls, reg file_path2:cls, reg R_check_outdirs:cls, reg dir7:*, reg dir8:V, reg p10:p(V +), reg all3:*, reg all4:V, reg p11:p(V +), reg r33:V, reg p12:p(V +), reg r35:V, reg p13:p(V +), reg r37:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r38:V, reg r39:V, reg tfiles:*, reg tfiles1:V, reg length:cls, reg r40:V, reg c4:L, reg message:cls, reg r41:V, reg lapply:cls, reg tfiles2:*, reg tfiles3:V, reg p14:p(V +), reg __2:cls, reg r44:V, reg p15:p(V +), reg r46:V, reg lapply1:cls, reg timings14:*, reg timings15:V, reg p16:p(V +), reg r48:cls, reg p17:p(V +), reg r50:V, reg split:cls, reg as_data_frame:cls, reg lapply2:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p18:p(V +), reg timings16:*, reg timings17:V, reg p19:p(V +), reg r53:V, reg p20:p(V +), reg format:*, reg format1:V, reg p21:p(V +), reg r56:V, reg p22:p(V +), reg r58:V, reg p23:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r60:V, reg r61:V, reg sub1:cls, reg basename1:cls, reg dirname:cls, reg tfiles4:*, reg tfiles5:V, reg p24:p(V +), reg r63:V, reg p25:p(V +), reg r65:V, reg p26:p(V +), reg r67:V, reg vapply:cls, reg timings18:*, reg timings19:V, reg p27:p(V +), reg nrow:*, reg nrow1:V, reg p28:p(V +), reg r70:V, reg rep_int:cls, reg r71:V, reg p29:p(V +), reg r73:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r74:V, reg r75:V, reg Map:cls, reg r76:cls, reg p30:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r78:V, reg r79:V, reg timings20:*, reg timings21:V, reg names:cls, reg r80:V, reg p31:p(V +), reg timings22:*, reg timings23:V, reg p32:p(V +), reg r83:V, reg invisible:cls, reg r84:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r86:V, reg r87:V, reg invisible1:cls, reg r88:V |
    mkenv;
    st dir = dir;
    all_isMissing = missing.0(all);
    if all_isMissing then L0(FALSE) else L0(all);
  L0(all_orDefault):
    st all = all_orDefault;
    full_isMissing = missing.0(full);
    if full_isMissing then L1(FALSE) else L1(full);
  L1(full_orDefault):
    st full = full_orDefault;
    normalizePath = ldf normalizePath;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn normalizePath(p);
    check L17() else D1();
  D1():
    deopt 3 [r1];
  L17():
    st dir = r1;
    file_path = ldf `file.path`;
    check L18() else D2();
  D2():
    deopt 6 [];
  L18():
    p1 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r3 = dyn file_path(p1, "timings.tab");
    check L19() else D3();
  D3():
    deopt 9 [r3];
  L19():
    st tfile = r3;
    file_test = ldf file_test;
    check L20() else D4();
  D4():
    deopt 12 [];
  L20():
    p2 = prom<V +>{
      tfile = ld tfile;
      tfile1 = force? tfile;
      checkMissing(tfile1);
      return tfile1;
    };
    r5 = dyn file_test("-f", p2);
    check L21() else D5();
  D5():
    deopt 15 [r5];
  L21():
    c = `as.logical`(r5);
    if c then L22() else L2();
  L2():
    goto L8();
  L8():
    full1 = ld full;
    check L48() else D21();
  L22():
    __ = ldf `::`;
    check L23() else D6();
  D6():
    deopt 17 [];
  D21():
    deopt 67 [full1];
  L23():
    r6 = dyn __("utils", "read.table");
    check L24() else D7();
  L48():
    full2 = force? full1;
    checkMissing(full2);
    c3 = `as.logical`(full2);
    if c3 then L49() else L9();
  D7():
    deopt 20 [r6];
  L9():
    goto L14();
  L14():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L24():
    checkFun.0(r6);
    r7 = r6 as cls;
    p3 = prom<V +>{
      tfile2 = ld tfile;
      tfile3 = force? tfile2;
      checkMissing(tfile3);
      return tfile3;
    };
    r9 = dyn r7(p3);
    check L25() else D8();
  L49():
    Sys_glob1 = ldf `Sys.glob`;
    check L50() else D22();
  D8():
    deopt 23 [r9];
  D22():
    deopt 70 [];
  L15(r87):
    popenv;
    return r87;
  L25():
    st timings = r9;
    all1 = ld all;
    check L26() else D9();
  L50():
    p13 = prom<V +>{
      file_path2 = ldf `file.path`;
      p12 = prom<V +>{
        R_check_outdirs = ldf R_check_outdirs;
        p10 = prom<V +>{
          dir7 = ld dir;
          dir8 = force? dir7;
          checkMissing(dir8);
          return dir8;
        };
        p11 = prom<V +>{
          all3 = ld all;
          all4 = force? all3;
          checkMissing(all4);
          return all4;
        };
        r33 = dyn R_check_outdirs[, all](p10, p11);
        return r33;
      };
      r35 = dyn file_path2(p12, "*-Ex.timings");
      return r35;
    };
    r37 = dyn Sys_glob1(p13);
    check L51() else D23();
  L72():
    invisible1 = ldf invisible in base;
    r88 = dyn invisible1();
    check L74() else D37();
  L73():
    r86 = dyn base6();
    goto L15(r86);
  D9():
    deopt 25 [all1];
  D23():
    deopt 72 [r37];
  D37():
    deopt 121 [r88];
  L26():
    all2 = force? all1;
    checkMissing(all2);
    r10 = `!`(all2);
    c1 = `as.logical`(r10);
    if c1 then L27() else L3();
  L51():
    st tfiles = r37;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L74():
    goto L15(r88);
  L3():
    goto L7();
  L7():
    print = ldf print;
    check L45() else D19();
  L10(r39):
    c4 = `as.logical`(r39);
    if c4 then L56() else L11();
  L27():
    Sys_glob = ldf `Sys.glob`;
    check L28() else D10();
  L52():
    tfiles = ld tfiles;
    check L54() else D24();
  L53():
    r38 = dyn base2(<sym tfiles>);
    goto L10(r38);
  D10():
    deopt 29 [];
  D19():
    deopt 62 [];
  D24():
    deopt 76 [tfiles];
  L11():
    goto L12();
  L12():
    lapply = ldf lapply;
    check L60() else D28();
  L28():
    p5 = prom<V +>{
      file_path1 = ldf `file.path`;
      p4 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r12 = dyn file_path1(p4, "rdepends_*.Rcheck");
      return r12;
    };
    r14 = dyn Sys_glob(p5);
    check L29() else D11();
  L45():
    p9 = prom<V +>{
      timings12 = ld timings;
      timings13 = force? timings12;
      checkMissing(timings13);
      return timings13;
    };
    r29 = dyn print(p9);
    check L46() else D20();
  L54():
    tfiles1 = force? tfiles;
    checkMissing(tfiles1);
    length = ldf length in base;
    r40 = dyn length(tfiles1);
    check L55() else D25();
  L56():
    message = ldf message;
    check L57() else D26();
  D11():
    deopt 31 [r14];
  D20():
    deopt 64 [r29];
  D25():
    deopt 79 [r40];
  D26():
    deopt 81 [];
  D28():
    deopt 87 [];
  L29():
    st rdepends = r14;
    timings = ld timings;
    check L30() else D12();
  L46():
    goto L8();
  L55():
    goto L10(r40);
  L57():
    r41 = dyn message("");
    check L58() else D27();
  L60():
    p14 = prom<V +>{
      tfiles2 = ld tfiles;
      tfiles3 = force? tfiles2;
      checkMissing(tfiles3);
      return tfiles3;
    };
    p15 = prom<V +>{
      __2 = ldf `::`;
      r44 = dyn __2("utils", "read.table");
      return r44;
    };
    r46 = dyn lapply[, , header](p14, p15, TRUE);
    check L61() else D29();
  D12():
    deopt 33 [timings];
  D27():
    deopt 83 [r41];
  D29():
    deopt 92 [r46];
  L30():
    timings1 = force? timings;
    checkMissing(timings1);
    c2 = `is.object`(timings1);
    if c2 then L31() else L32(timings1);
  L58():
    goto L12();
  L61():
    st timings = r46;
    lapply1 = ldf lapply;
    check L62() else D30();
  D30():
    deopt 95 [];
  L4(dx1):
    st timings = dx1;
    goto L7();
  L31():
    dr = tryDispatchBuiltin.1("[", timings1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(timings3):
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L62():
    p16 = prom<V +>{
      timings14 = ld timings;
      timings15 = force? timings14;
      checkMissing(timings15);
      return timings15;
    };
    p17 = prom<V +>{
      r48 = clos inner2501545716;
      return r48;
    };
    r50 = dyn lapply1(p16, p17);
    check L63() else D31();
  D31():
    deopt 98 [r50];
  L5(r16):
    __1 = ldf `[` in base;
    r27 = dyn __1(timings1, r16, <missing>);
    goto L4(r27);
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L34():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L35():
    r15 = dyn base(<lang match(rownames(timings), sub("rdepends_(.*).Rcheck", "\\1", basename(rdepends)))>);
    goto L5(r15);
  L63():
    st timings = r50;
    split = ldf split;
    check L64() else D32();
  D32():
    deopt 101 [];
  L6(timings9, r18):
    is_na = ldf `is.na` in base;
    r26 = dyn is_na(r18);
    check L43() else D18();
  L36():
    rownames = ldf rownames;
    check L38() else D13();
  L37():
    r17 = dyn base1(<lang rownames(timings)>, <lang sub("rdepends_(.*).Rcheck", "\\1", basename(rdepends))>);
    goto L6(timings3, r17);
  L64():
    p23 = prom<V +>{
      as_data_frame = ldf `as.data.frame`;
      p22 = prom<V +>{
        lapply2 = ldf lapply;
        p20 = prom<V +>{
          do_call = ldf `do.call`;
          p18 = prom<V +>{
            rbind = ld rbind;
            rbind1 = force? rbind;
            checkMissing(rbind1);
            return rbind1;
          };
          p19 = prom<V +>{
            timings16 = ld timings;
            timings17 = force? timings16;
            checkMissing(timings17);
            return timings17;
          };
          r53 = dyn do_call(p18, p19);
          return r53;
        };
        p21 = prom<V +>{
          format = ld format;
          format1 = force? format;
          checkMissing(format1);
          return format1;
        };
        r56 = dyn lapply2(p20, p21);
        return r56;
      };
      r58 = dyn as_data_frame(p22);
      return r58;
    };
    p29 = prom<V +>{
      sym3 = ldf `rep.int`;
      base3 = ldf `rep.int` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r61):
      return r61;
    L1():
      sub1 = ldf sub;
      p26 = prom<V +>{
        basename1 = ldf basename;
        p25 = prom<V +>{
          dirname = ldf dirname;
          p24 = prom<V +>{
            tfiles4 = ld tfiles;
            tfiles5 = force? tfiles4;
            checkMissing(tfiles5);
            return tfiles5;
          };
          r63 = dyn dirname(p24);
          return r63;
        };
        r65 = dyn basename1(p25);
        return r65;
      };
      r67 = dyn sub1("\\.Rcheck$", "", p26);
      vapply = ldf vapply;
      p27 = prom<V +>{
        timings18 = ld timings;
        timings19 = force? timings18;
        checkMissing(timings19);
        return timings19;
      };
      p28 = prom<V +>{
        nrow = ld nrow;
        nrow1 = force? nrow;
        checkMissing(nrow1);
        return nrow1;
      };
      r70 = dyn vapply(p27, p28, 0);
      rep_int = ldf `rep.int` in base;
      r71 = dyn rep_int(r67, r70);
      goto L0(r71);
    L2():
      r60 = dyn base3(<lang sub("\\.Rcheck$", "", basename(dirname(tfiles)))>, <lang vapply(timings, nrow, 0)>);
      goto L0(r60);
    };
    r73 = dyn split(p23, p29);
    check L65() else D33();
  D13():
    deopt 40 [timings3];
  D18():
    deopt 54 [timings9, r26];
  D33():
    deopt 104 [r73];
  L38():
    p6 = prom<V +>{
      timings10 = ld timings;
      timings11 = force? timings10;
      checkMissing(timings11);
      return timings11;
    };
    r20 = dyn rownames(p6);
    check L39() else D14();
  L43():
    goto L5(r26);
  L65():
    st timings = r73;
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L66() else L67();
  D14():
    deopt 42 [timings3, r20];
  L13(r75):
    goto L14();
  L39():
    sub = ldf sub;
    check L40() else D15();
  L66():
    Map = ldf Map;
    check L68() else D34();
  L67():
    r74 = dyn base4(<lang Map(function((x=, y=), {
          writeLines(sprintf("Example timings for package '%s':", x));
          cat(rbind(" ", t(as.matrix(y))), sep=c(" ", " ", " ", " ", "\n"))
        }, NULL), names(timings), timings)>);
    goto L13(r74);
  D15():
    deopt 44 [timings3];
  D34():
    deopt 109 [];
  L40():
    p8 = prom<V +>{
      basename = ldf basename;
      p7 = prom<V +>{
        rdepends = ld rdepends;
        rdepends1 = force? rdepends;
        checkMissing(rdepends1);
        return rdepends1;
      };
      r22 = dyn basename(p7);
      return r22;
    };
    r24 = dyn sub("rdepends_(.*).Rcheck", "\\1", p8);
    check L41() else D16();
  L68():
    p30 = prom<V +>{
      r76 = clos inner799576941;
      return r76;
    };
    p31 = prom<V +>{
      sym5 = ldf names;
      base5 = ldf names in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r79):
      return r79;
    L1():
      timings20 = ld timings;
      timings21 = force? timings20;
      checkMissing(timings21);
      names = ldf names in base;
      r80 = dyn names(timings21);
      goto L0(r80);
    L2():
      r78 = dyn base5(<sym timings>);
      goto L0(r78);
    };
    p32 = prom<V +>{
      timings22 = ld timings;
      timings23 = force? timings22;
      checkMissing(timings23);
      return timings23;
    };
    r83 = dyn Map(p30, p31, p32);
    check L69() else D35();
  D16():
    deopt 48 [timings3, r24];
  D35():
    deopt 113 [r83];
  L41():
    match = ldf match in base;
    r25 = dyn match(r20, r24, NA_INT, NULL);
    check L42() else D17();
  L69():
    invisible = ldf invisible in base;
    r84 = dyn invisible(r83);
    check L70() else D36();
  D17():
    deopt 52 [timings3, r25];
  D36():
    deopt 115 [r84];
  L42():
    goto L6(timings3, r25);
  L70():
    goto L13(r84);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg order:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r:V, reg p:p(V +), reg r2:V, reg __:cls, reg r3:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L1() else D0();
  D0():
    deopt 0 [x1];
  L1():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L2() else L3(x2);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x4):
    order = ldf order;
    check L5() else D1();
  D1():
    deopt 3 [x4];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r = `$`(x8, <sym user>);
      goto L0(r);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r2 = dyn order[, decreasing](p, TRUE);
    check L6() else D2();
  D2():
    deopt 7 [x4, r2];
  L6():
    __ = ldf `[` in base;
    r3 = dyn __(x2, r2, <missing>);
    goto L0(r3);
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg writeLines:cls, reg sprintf:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg cat:cls, reg rbind:cls, reg t:cls, reg as_matrix:cls, reg y1:*, reg y2:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg c:cls, reg r13:V, reg p6:p(V +), reg r15:V |
    mkenv;
    st x = x;
    st y = y;
    writeLines = ldf writeLines;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn sprintf("Example timings for package '%s':", p);
      return r1;
    };
    r3 = dyn writeLines(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    cat = ldf cat;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    p5 = prom<V +>{
      rbind = ldf rbind;
      p4 = prom<V +>{
        t = ldf t;
        p3 = prom<V +>{
          as_matrix = ldf `as.matrix`;
          p2 = prom<V +>{
            y1 = ld y;
            y2 = force? y1;
            checkMissing(y2);
            return y2;
          };
          r5 = dyn as_matrix(p2);
          return r5;
        };
        r7 = dyn t(p3);
        return r7;
      };
      r9 = dyn rbind(" ", p4);
      return r9;
    };
    p6 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c = ldf c in base;
      r13 = dyn c(" ", " ", " ", " ", "\n");
      goto L0(r13);
    L2():
      r11 = dyn base(" ", " ", " ", " ", "\n");
      goto L0(r11);
    };
    r15 = dyn cat[, sep](p5, p6);
    check L3() else D3();
  D3():
    deopt 9 [r15];
  L3():
    popenv;
    return r15;
  }
}