fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg lsf_str:cls, reg r5:V, reg ls_str:cls, reg r6:V, reg example:cls, reg glm:*, reg glm1:V, reg p1:p(V +), reg r8:V, reg as_list:cls, reg LETTERS:*, reg LETTERS1:V, reg p2:p(V +), reg r10:V, reg print:cls, reg ls_str1:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg lsf_str1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg search:cls, reg r16:V, reg length:cls, reg r17:V, reg p4:p(V +), reg r19:V, reg r20:cls, reg sapply:cls, reg strsplit:cls, reg capture_output:cls, reg tt:cls, reg r21:V, reg p5:p(V +), reg r23:V, reg p6:p(V +), reg r25:V, reg p7:p(V +), reg __:*, reg __1:V, reg p8:p(V +), reg r28:V, reg stopifnot:cls, reg nms:*, reg nms1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg nms4:V, reg r30:V, reg c:cls, reg r31:V, reg r32:V, reg p9:p(V +), reg r34:V |
    mkenv;
    r = clos inner8444684;
    st `ls.str` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    lsf_str = ldf `lsf.str`;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    r5 = dyn lsf_str();
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 10 [r5];
  L4():
    goto L0();
  L6():
    ls_str = ldf `ls.str`;
    check L7() else D4();
  D4():
    deopt 12 [];
  L7():
    r6 = dyn ls_str[mode]("list");
    check L8() else D5();
  D5():
    deopt 15 [r6];
  L8():
    example = ldf example;
    check L9() else D6();
  D6():
    deopt 17 [];
  L9():
    p1 = prom<V +>{
      glm = ld glm;
      glm1 = force? glm;
      checkMissing(glm1);
      return glm1;
    };
    r8 = dyn example[, echo](p1, FALSE);
    check L10() else D7();
  D7():
    deopt 21 [r8];
  L10():
    as_list = ldf `as.list`;
    check L11() else D8();
  D8():
    deopt 23 [];
  L11():
    p2 = prom<V +>{
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      return LETTERS1;
    };
    r10 = dyn as_list(p2);
    check L12() else D9();
  D9():
    deopt 25 [r10];
  L12():
    st ll = r10;
    print = ldf print;
    check L13() else D10();
  D10():
    deopt 28 [];
  L13():
    p3 = prom<V +>{
      ls_str1 = ldf `ls.str`;
      r11 = dyn ls_str1();
      return r11;
    };
    r13 = dyn print[, `max.level`](p3, 0.0);
    check L14() else D11();
  D11():
    deopt 32 [r13];
  L14():
    lsf_str1 = ldf `lsf.str`;
    check L15() else D12();
  D12():
    deopt 34 [];
  L15():
    p4 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      search = ldf search;
      r16 = dyn search();
      length = ldf length in base;
      r17 = dyn length(r16);
      goto L0(r17);
    L2():
      r14 = dyn base1(<lang search()>);
      goto L0(r14);
    };
    r19 = dyn lsf_str1[pos, pattern](p4, "file");
    check L16() else D13();
  D13():
    deopt 39 [r19];
  L16():
    r20 = clos inner3161976259;
    st tt = r20;
    sapply = ldf sapply;
    check L17() else D14();
  D14():
    deopt 44 [];
  L17():
    p7 = prom<V +>{
      strsplit = ldf strsplit;
      p6 = prom<V +>{
        capture_output = ldf `capture.output`;
        p5 = prom<V +>{
          tt = ldf tt;
          r21 = dyn tt(2.0);
          return r21;
        };
        r23 = dyn capture_output(p5);
        return r23;
      };
      r25 = dyn strsplit(p6, " *: *");
      return r25;
    };
    p8 = prom<V +>{
      __ = ld `[`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r28 = dyn sapply(p7, p8, 1.0);
    check L18() else D15();
  D15():
    deopt 48 [r28];
  L18():
    st nms = r28;
    stopifnot = ldf stopifnot;
    check L19() else D16();
  D16():
    deopt 51 [];
  L19():
    p9 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(nms4, r30):
      r32 = `==`(nms4, r30);
      return r32;
    L1():
      c = ldf c in base;
      r31 = dyn c("aa", "r", "x", "y");
      goto L0(nms1, r31);
    L2():
      r29 = dyn base2("aa", "r", "x", "y");
      goto L0(nms1, r29);
    };
    r34 = dyn stopifnot(p9);
    check L20() else D17();
  D17():
    deopt 53 [r34];
  L20():
    popenv;
    return r34;
  }
}
fun inner8444684(pos, name, envir, `all.names`, pattern, mode) {
  (reg pos:*, reg name:*, reg envir:*, reg all_names:*, reg pattern:*, reg mode:*) -+> V { var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, reg p:p(V +), var name:*, var envir:*, var `all.names`:*, reg all_names_isMissing:L, reg all_names_orDefault:*, var pattern:*, var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg pos1:*, reg pos2:V, reg as_environment:cls, reg r6:V, reg ls:cls, reg name1:*, reg name2:V, reg p1:p(V +), reg envir1:*, reg envir2:V, reg p2:p(V +), reg all_names1:*, reg all_names2:V, reg p3:p(V +), reg pattern1:*, reg pattern2:V, reg p4:p(V +), reg r12:V, reg vapply:cls, reg nms:*, reg nms1:V, reg p5:p(V +), reg exists:*, reg exists1:V, reg p6:p(V +), reg envir3:*, reg envir4:V, reg p7:p(V +), reg mode1:*, reg mode2:V, reg p8:p(V +), reg r17:V, reg structure:cls, reg nms2:*, reg nms3:V, reg c1:L, reg nms5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:*, reg r19:V, reg __:cls, reg r20:V, reg p9:p(V +), reg envir5:*, reg envir6:V, reg p10:p(V +), reg mode3:*, reg mode4:V, reg p11:p(V +), reg r24:V |
    mkenv;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L0() else L1(pos);
  L0():
    p = prom<V +>{
      return -1.0;
    };
    goto L1(p);
  L1(pos_orDefault):
    st pos = pos_orDefault;
    st name = name;
    st envir = envir;
    all_names_isMissing = missing.0(all_names);
    if all_names_isMissing then L2(FALSE) else L2(all_names);
  L2(all_names_orDefault):
    st `all.names` = all_names_orDefault;
    st pattern = pattern;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L3("any") else L3(mode);
  L3(mode_orDefault):
    st mode = mode_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L4(r2):
    c = `as.logical`(r2);
    if c then L10() else L5();
  L8():
    missing = ldf missing in base;
    r3 = dyn missing(<sym envir>);
    goto L4(r3);
  L9():
    r1 = dyn base(<sym envir>);
    goto L4(r1);
  L5():
    goto L7();
  L7():
    ls = ldf ls;
    check L16() else D2();
  L10():
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D2():
    deopt 13 [];
  L6(r5):
    st envir = r5;
    goto L7();
  L11():
    pos1 = ld pos;
    check L13() else D0();
  L12():
    r4 = dyn base1(<sym pos>);
    goto L6(r4);
  L16():
    p1 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p2 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    p3 = prom<V +>{
      all_names1 = ld `all.names`;
      all_names2 = force? all_names1;
      checkMissing(all_names2);
      return all_names2;
    };
    p4 = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    r12 = dyn ls[, envir, `all.names`, pattern](p1, p2, p3, p4);
    check L17() else D3();
  D0():
    deopt 5 [pos1];
  D3():
    deopt 21 [r12];
  L13():
    pos2 = force? pos1;
    checkMissing(pos2);
    as_environment = ldf `as.environment` in base;
    r6 = dyn as_environment(pos2);
    check L14() else D1();
  L17():
    st nms = r12;
    vapply = ldf vapply;
    check L18() else D4();
  D1():
    deopt 8 [r6];
  D4():
    deopt 24 [];
  L14():
    goto L6(r6);
  L18():
    p5 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    p6 = prom<V +>{
      exists = ld exists;
      exists1 = force? exists;
      checkMissing(exists1);
      return exists1;
    };
    p7 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    p8 = prom<V +>{
      mode1 = ld mode;
      mode2 = force? mode1;
      checkMissing(mode2);
      return mode2;
    };
    r17 = dyn vapply[, , , envir, mode, inherits](p5, p6, NA_LGL, p7, p8, FALSE);
    check L19() else D5();
  D5():
    deopt 34 [r17];
  L19():
    st r = r17;
    structure = ldf structure;
    check L20() else D6();
  D6():
    deopt 37 [];
  L20():
    p9 = prom<V +>{
      nms2 = ld nms;
      nms3 = force? nms2;
      checkMissing(nms3);
      c1 = `is.object`(nms3);
      if c1 then L1() else L2(nms3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", nms3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(nms5):
      r18 = ld r;
      r19 = force? r18;
      __ = ldf `[` in base;
      r20 = dyn __(nms5, r19);
      goto L0(r20);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p10 = prom<V +>{
      envir5 = ld envir;
      envir6 = force? envir5;
      checkMissing(envir6);
      return envir6;
    };
    p11 = prom<V +>{
      mode3 = ld mode;
      mode4 = force? mode3;
      checkMissing(mode4);
      return mode4;
    };
    r24 = dyn structure[, envir, mode, class](p9, p10, p11, "ls_str");
    check L21() else D7();
  D7():
    deopt 45 [r24];
  L21():
    popenv;
    return r24;
  }
}
fun inner3161976259(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg r:V, reg ls_str:cls, reg r1:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(1.0) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    st aa = 7.0;
    x1 = ld x;
    check L1() else D0();
  D0():
    deopt 3 [x1];
  L1():
    x2 = force? x1;
    checkMissing(x2);
    y1 = ld y;
    check L2() else D1();
  D1():
    deopt 4 [x2, y1];
  L2():
    y2 = force? y1;
    checkMissing(y2);
    r = `+`(x2, y2);
    st r = r;
    ls_str = ldf `ls.str`;
    check L3() else D2();
  D2():
    deopt 9 [];
  L3():
    r1 = dyn ls_str();
    check L4() else D3();
  D3():
    deopt 10 [r1];
  L4():
    popenv;
    return r1;
  }
}